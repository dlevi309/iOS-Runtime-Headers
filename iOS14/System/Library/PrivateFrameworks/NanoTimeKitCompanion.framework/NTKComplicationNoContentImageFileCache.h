/*
* Generated on Thursday, January 14, 2021 at 2:26:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/


@protocol OS_dispatch_queue;
@class NSMutableDictionary, NTKTaskScheduler, NSObject, NSString;

@interface NTKComplicationNoContentImageFileCache : NSObject {

	NSMutableDictionary* _queue_complicationNoContentImages;
	BOOL _cacheDirty;
	NTKTaskScheduler* _taskScheduler;
	NSObject*<OS_dispatch_queue> _cacheQueue;
	NSString* _cacheIdentifier;

}
+(id)sharedInstance;
-(id)init;
-(void)_flushCache;
-(void)dealloc;
-(void)_dirtyCache;
-(id)imageForClientIdentifier:(id)arg1 family:(long long)arg2 ;
-(void)setImage:(id)arg1 forClientIdentifier:(id)arg2 family:(long long)arg3 ;
-(id)noContentImagesForClientIdentifier:(id)arg1 ;
-(void)setNoContentImages:(id)arg1 forClientIdentifier:(id)arg2 ;
-(void)removeAllEntriesExceptThoseWithClientIdentifiers:(id)arg1 ;
@end

