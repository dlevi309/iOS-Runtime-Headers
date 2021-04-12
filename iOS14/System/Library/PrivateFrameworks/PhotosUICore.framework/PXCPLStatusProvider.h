/*
* Generated on Thursday, January 14, 2021 at 2:22:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PXObservable.h>
#import <libobjc.A.dylib/CPLStatusDelegate.h>
#import <libobjc.A.dylib/PXAssetCountObserverDelegate.h>
#import <libobjc.A.dylib/PXChangeObserver.h>
#import <libobjc.A.dylib/PXCPLStatusProvider.h>
@class PXCPLStatus;


@protocol PXCPLStatusProvider <NSObject>
@property (nonatomic,readonly) PXCPLStatus * status; 
@required
-(PXCPLStatus *)status;

@end


@protocol OS_dispatch_queue;
@class PXCPLStatus, NSObject, CPLStatus, PXCPLSyncActivity, PXAssetCountObserver, PXCloudQuotaOfferProvider, PHPhotoLibrary, PLPhotoLibrary, NSString;

@interface PXCPLStatusProvider : PXObservable <CPLStatusDelegate, PXAssetCountObserverDelegate, PXChangeObserver, PXCPLStatusProvider> {

	PXCPLStatus* _status;
	NSObject*<OS_dispatch_queue> _serialUpdateQueue;
	CPLStatus* _cplStatus;
	PXCPLSyncActivity* _syncActivity;
	PXAssetCountObserver* _numberOfReferencedItemsObserver;
	unsigned long long _numberOfReferencedItems;
	PXCloudQuotaOfferProvider* _offerProvider;
	BOOL _hasCloudQuotaOffer;
	BOOL _cloudQuotaOfferHasAssetCounts;
	PHPhotoLibrary* _ph_photoLibrary;
	PLPhotoLibrary* _pl_photoLibrary;
	unsigned long long _needsUpdate;
	double _lastUpdate;
	BOOL _isUpdating;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) PXCPLStatus * status;                //@synthesize status=_status - In the implementation block
+(id)currentStatusProvider;
-(void)statusDidChange:(id)arg1 ;
-(id)init;
-(id)_initWithInitialSynchronousUpdateType:(unsigned long long)arg1 ;
-(void)assetCountObserver:(id)arg1 didChangeNumberOfAssets:(long long)arg2 ;
-(id)_initWithInitialUpdateType:(unsigned long long)arg1 isSynchronous:(BOOL)arg2 ;
-(void)_setStatus:(id)arg1 producedForUpdateType:(unsigned long long)arg2 ;
-(id)_updateStatus:(id)arg1 requestedTypes:(unsigned long long)arg2 ;
-(void)_schedulePendingUpdates;
-(void)_scheduleUpdateForType:(unsigned long long)arg1 ;
-(void)_powerStateDidChange:(id)arg1 ;
-(void)_performUpdate;
-(PXCPLStatus *)status;
-(void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3 ;
@end

