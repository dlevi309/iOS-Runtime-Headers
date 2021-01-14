/*
* Generated on Thursday, January 14, 2021 at 2:28:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/


@class OITSULocale, NSMutableArray, NSCondition;

@interface OITSUDateParserLibrary : NSObject {

	OITSULocale* mLocale;
	unsigned long long mMaxPermittedParsers;
	unsigned long long mNumberOfUses;
	unsigned long long mParsersCreated;
	NSMutableArray* mAvailableDateParsers;
	NSCondition* mParserLibraryConditionVariable;

}
-(id)initWithLocale:(id)arg1 ;
-(void)dealloc;
-(id)checkoutDateParser;
-(void)returnDateParser:(id)arg1 ;
-(void)prepareDateParserInBackground;
@end

