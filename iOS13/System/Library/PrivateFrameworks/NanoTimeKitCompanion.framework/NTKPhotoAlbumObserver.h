/*
* Generated on Monday, March 1, 2021 at 2:35:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/


@class NSMutableDictionary;

@interface NTKPhotoAlbumObserver : NSObject {

	NSMutableDictionary* _deviceAlbumObservers;

}
+(id)sharedInstance;
-(id)init;
-(void)addObserver:(id)arg1 forDevice:(id)arg2 ;
-(void)removeObserver:(id)arg1 forDevice:(id)arg2 ;
-(void)_startOrStopObservingIfNecessaryForDevice:(id)arg1 ;
@end

