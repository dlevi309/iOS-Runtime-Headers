/*
* Generated on Thursday, January 14, 2021 at 2:21:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

@class NSString, NSDecimalNumber;


@protocol INRideFareLineItemExport <NSObject,JSExport>
@property (nonatomic,copy) NSString * title; 
@property (nonatomic,copy) NSDecimalNumber * price; 
@property (nonatomic,copy) NSString * currencyCode; 
@required
-(NSDecimalNumber *)price;
-(NSString *)currencyCode;
-(id)init;
-(void)setTitle:(id)arg1;
-(void)setCurrencyCode:(id)arg1;
-(void)setPrice:(id)arg1;
-(NSString *)title;

@end

