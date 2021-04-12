/*
* Generated on Thursday, January 14, 2021 at 2:28:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TSUtility.framework/TSUtility
*/


#import <TSUtility/TSUtility-Structs.h>
@class NSMutableArray, NSCondition;

@interface TSUDateParserLibrary : NSObject {

	unsigned long long mMaxPermittedParsers;
	unsigned long long mNumberOfUses;
	unsigned long long mParsersCreated;
	NSMutableArray* mAvailableDateParsers;
	NSCondition* mParserLibraryConditionVariable;

}
+(id)_singletonAlloc;
+(id)allocWithZone:(NSZone*)arg1 ;
+(id)sharedDateParserLibrary;
-(oneway void)release;
-(id)init;
-(id)retain;
-(id)autorelease;
-(unsigned long long)retainCount;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)checkoutDateParser;
-(void)returnDateParser:(id)arg1 ;
@end

