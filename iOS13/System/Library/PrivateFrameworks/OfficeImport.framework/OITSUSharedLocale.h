/*
* Generated on Monday, March 1, 2021 at 2:35:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/


#import <OfficeImport/OfficeImport-Structs.h>
@class NSArray;

@interface OITSUSharedLocale : NSObject {

	CFLocaleRef mCurrentLocale;
	NSArray* mObserverObjects;

}
+(id)allocWithZone:(NSZone*)arg1 ;
+(id)_singletonAlloc;
+(id)sharedLocale;
-(id)init;
-(unsigned long long)retainCount;
-(void)dealloc;
-(id)retain;
-(oneway void)release;
-(id)autorelease;
-(id)copyWithZone:(NSZone*)arg1 ;
-(CFLocaleRef)currentLocale;
-(void)datePreferencesChanged:(id)arg1 ;
@end

