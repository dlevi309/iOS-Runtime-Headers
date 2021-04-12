/*
* Generated on Monday, March 1, 2021 at 2:35:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/


@class NSString;

@interface ECCurrencyEntry : NSObject {

	NSString* mLassoCurrencyCode;
	NSString* mXlLangId;
	NSString* mXlCurrencySymbol;
	BOOL mAppliesToExport;
	int mXlAccountingFormat;

}
+(id)currencyWithLassoCode:(id)arg1 langId:(int)arg2 xlSymbol:(id)arg3 ;
+(id)currencyWithLassoCode:(id)arg1 langId:(int)arg2 xlSymbol:(id)arg3 accountingFormat:(int)arg4 ;
+(id)currencyWithLassoCode:(id)arg1 langId:(int)arg2 xlSymbol:(id)arg3 isExport:(BOOL)arg4 ;
+(id)currencyWithLassoCode:(id)arg1 langId:(int)arg2 xlSymbol:(id)arg3 isExport:(BOOL)arg4 accountingFormat:(int)arg5 ;
-(id)initWithLassoCode:(id)arg1 langId:(int)arg2 xlSymbol:(id)arg3 isExport:(BOOL)arg4 accountingFormat:(int)arg5 ;
@end

