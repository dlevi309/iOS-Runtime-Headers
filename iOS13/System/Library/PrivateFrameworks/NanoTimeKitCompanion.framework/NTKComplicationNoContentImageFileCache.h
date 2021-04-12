/*
* Generated on Monday, March 1, 2021 at 2:35:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/


@class NSMutableDictionary, NTKTaskScheduler;

@interface NTKComplicationNoContentImageFileCache : NSObject {

	NSMutableDictionary* _complicationNoContentImages;
	BOOL _cacheDirty;
	NTKTaskScheduler* _taskScheduler;

}
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(BOOL)_flushCache;
-(void)_dirtyCache;
-(id)imageForClientIdentifier:(id)arg1 family:(long long)arg2 ;
-(void)setImage:(id)arg1 forClientIdentifier:(id)arg2 family:(long long)arg3 ;
-(id)noContentImagesForClientIdentifier:(id)arg1 ;
-(void)setNoContentImages:(id)arg1 forClientIdentifier:(id)arg2 ;
-(void)removeAllEntriesExceptThoseWithClientIdentifiers:(id)arg1 ;
@end

