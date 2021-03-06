/* Generated by RuntimeBrowser.
 */

@protocol INRequestPaymentIntent <NSObject, JSExport>

@required

- (INCurrencyAmount *)currencyAmount;
- (NSString *)note;
- (INPerson *)payer;
- (void)setCurrencyAmount:(INCurrencyAmount *)arg1;
- (void)setNote:(NSString *)arg1;
- (void)setPayer:(INPerson *)arg1;

@end
