/*
* Generated on Thursday, January 14, 2021 at 2:26:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <libobjc.A.dylib/NTKFaceCollectionObserver.h>
#import <libobjc.A.dylib/NTKFaceObserver.h>

@protocol OS_dispatch_queue, NTKLibrarySelectedFaceSnapshotProviderDelegate;
@class NTKFaceCollection, NTKFace, NSString, NSObject, UIImage;

@interface NTKLibrarySelectedFaceSnapshotProvider : NSObject <NTKFaceCollectionObserver, NTKFaceObserver> {

	NTKFaceCollection* _libraryCollection;
	NTKFace* _selectedFace;
	NSString* _snapshotKey;
	NSObject*<OS_dispatch_queue> _snapshotRequestsQueue;
	BOOL _resumedQueue;
	id<NTKLibrarySelectedFaceSnapshotProviderDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<NTKLibrarySelectedFaceSnapshotProviderDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) UIImage * snapshotImage; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)snapshotCurrentFaceForActiveDeviceWithOptions:(id)arg1 completion:(/*^block*/id)arg2 ;
+(void)snapshotCurrentFaceForDevice:(id)arg1 withOptions:(id)arg2 completion:(/*^block*/id)arg3 ;
+(void)snapshotCurrentFaceForDeviceUUID:(id)arg1 withOptions:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id<NTKLibrarySelectedFaceSnapshotProviderDelegate>)delegate;
-(void)setDelegate:(id<NTKLibrarySelectedFaceSnapshotProviderDelegate>)arg1 ;
-(UIImage *)snapshotImage;
-(void)dealloc;
-(void)faceCollectionDidLoad:(id)arg1 ;
-(void)faceCollection:(id)arg1 didSelectFace:(id)arg2 atIndex:(unsigned long long)arg3 ;
-(void)faceConfigurationDidChange:(id)arg1 ;
-(void)faceResourceDirectoryDidChange:(id)arg1 ;
-(id)initWithDeviceUUID:(id)arg1 delegate:(id)arg2 ;
-(void)_handleSnapshotChangedNotification:(id)arg1 ;
-(void)_updateSelectedFaceAndSnapshotKey;
-(void)_notifyIfSnapshotAvailable;
-(void)_handleFaceChange:(id)arg1 ;
-(id)initWithDeviceUUID:(id)arg1 ;
-(void)snapshotSelectedFaceWithOptions:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

