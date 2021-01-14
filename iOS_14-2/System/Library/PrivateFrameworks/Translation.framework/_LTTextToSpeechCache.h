/*
* Generated on Thursday, January 14, 2021 at 2:23:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Translation.framework/Translation
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableDictionary;

@interface _LTTextToSpeechCache : NSObject {

	NSObject*<OS_dispatch_queue> _cacheQueue;
	NSMutableDictionary* _cache;

}
-(void)clear;
-(id)init;
-(id)audioDataForKey:(id)arg1 ;
-(void)cacheAudioData:(id)arg1 forKey:(id)arg2 ;
@end

