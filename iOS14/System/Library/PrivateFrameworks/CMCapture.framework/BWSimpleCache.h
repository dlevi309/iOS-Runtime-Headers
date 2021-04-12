/*
* Generated on Thursday, January 14, 2021 at 2:23:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/


#import <CMCapture/CMCapture-Structs.h>
@class NSMutableDictionary;

@interface BWSimpleCache : NSObject {

	NSMutableDictionary* _cache;
	OpaqueFigSimpleMutexRef _propertyMutex;

}
+(void)initialize;
-(id)init;
-(void)cacheObject:(id)arg1 forKey:(id)arg2 ;
-(id)copyAndClearObjectForKey:(id)arg1 ;
-(void)dealloc;
@end

