/*
* Generated on Thursday, January 14, 2021 at 2:28:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iWorkXPC.framework/XPCServices/iWorkFileFormat.xpc/Frameworks/TSUtility.framework/TSUtility
*/


#import <TSUtility/TSUtility-Structs.h>
@class NSArray;

@interface TSUSharedLocale : NSObject {

	CFLocaleRef mCurrentLocale;
	NSArray* mObserverObjects;

}
+(id)_singletonAlloc;
+(id)allocWithZone:(NSZone*)arg1 ;
+(id)sharedLocale;
-(CFLocaleRef)currentLocale;
-(oneway void)release;
-(id)init;
-(id)retain;
-(id)autorelease;
-(unsigned long long)retainCount;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(void)datePreferencesChanged:(id)arg1 ;
@end

