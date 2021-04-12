/*
* Generated on Monday, March 1, 2021 at 2:35:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(id)initWithLocale:(id)arg1 ;
-(id)checkoutDateParser;
-(void)returnDateParser:(id)arg1 ;
-(void)prepareDateParserInBackground;
@end

