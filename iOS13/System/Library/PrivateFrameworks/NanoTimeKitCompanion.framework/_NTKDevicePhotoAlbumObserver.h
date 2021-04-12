/*
* Generated on Monday, March 1, 2021 at 2:35:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/


@class NSHashTable;

@interface _NTKDevicePhotoAlbumObserver : NSObject {

	id _albumPreferenceObserver;
	NSHashTable* _observers;

}

@property (nonatomic,retain) id albumPreferenceObserver;              //@synthesize albumPreferenceObserver=_albumPreferenceObserver - In the implementation block
@property (nonatomic,retain) NSHashTable * observers;                 //@synthesize observers=_observers - In the implementation block
-(id)init;
-(void)setObservers:(NSHashTable *)arg1 ;
-(NSHashTable *)observers;
-(id)albumPreferenceObserver;
-(void)setAlbumPreferenceObserver:(id)arg1 ;
@end

