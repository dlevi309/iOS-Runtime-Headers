/*
* Generated on Thursday, January 14, 2021 at 2:26:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <libobjc.A.dylib/NPTOCollectionTargetLibraryObserver.h>

@class NPTOCollectionTargetLibrary, NSHashTable, NSString, NRDevice;

@interface _NTKDeviceSyncedAlbumObserver : NSObject <NPTOCollectionTargetLibraryObserver> {

	NPTOCollectionTargetLibrary* _library;
	NSHashTable* _observers;
	os_unfair_lock_s _lock;
	NSString* _syncedAlbumName;
	NRDevice* _device;

}

@property (nonatomic,retain) NRDevice * device;                         //@synthesize device=_device - In the implementation block
@property (nonatomic,readonly) NSString * syncedAlbumName;              //@synthesize syncedAlbumName=_syncedAlbumName - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithDevice:(id)arg1 ;
-(void)addObserver:(id)arg1 ;
-(NRDevice *)device;
-(void)_stopObserving;
-(void)removeObserver:(id)arg1 ;
-(void)setDevice:(NRDevice *)arg1 ;
-(void)_startObserving;
-(void)dealloc;
-(void)collectionTargetLibraryDidUpdate:(id)arg1 ;
-(NSString *)syncedAlbumName;
@end

