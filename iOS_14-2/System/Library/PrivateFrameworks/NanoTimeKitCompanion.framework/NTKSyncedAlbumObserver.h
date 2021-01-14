/*
* Generated on Thursday, January 14, 2021 at 2:26:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/


@class NSMutableDictionary;

@interface NTKSyncedAlbumObserver : NSObject {

	NSMutableDictionary* _deviceAlbumObservers;

}
+(id)sharedInstance;
-(id)init;
-(void)addObserver:(id)arg1 forDevice:(id)arg2 ;
-(id)syncedAlbumNameForDevice:(id)arg1 ;
-(void)removeObserver:(id)arg1 forDevice:(id)arg2 ;
@end

