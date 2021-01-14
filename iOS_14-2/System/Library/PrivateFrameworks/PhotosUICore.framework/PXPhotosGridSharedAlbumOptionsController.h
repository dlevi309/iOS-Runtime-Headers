/*
* Generated on Thursday, January 14, 2021 at 2:22:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <libobjc.A.dylib/PLInvitationRecordsObserver.h>
#import <libobjc.A.dylib/PXPhotosGridOptionsController.h>

@protocol OS_dispatch_queue, PXPhotosGridOptionsControllerDelegate;
@class NSString, NSObject, PHAssetCollection;

@interface PXPhotosGridSharedAlbumOptionsController : NSObject <PLInvitationRecordsObserver, PXPhotosGridOptionsController> {

	NSObject*<OS_dispatch_queue> _workQueue;
	BOOL _hasRegistered;
	id<PXPhotosGridOptionsControllerDelegate> _optionsDelegate;
	PHAssetCollection* _assetCollection;
	NSString* _actionPerformerType;
	NSString* _systemIconImageName;

}

@property (nonatomic,copy) NSString * actionPerformerType;                                                  //@synthesize actionPerformerType=_actionPerformerType - In the implementation block
@property (nonatomic,copy) NSString * systemIconImageName;                                                  //@synthesize systemIconImageName=_systemIconImageName - In the implementation block
@property (nonatomic,readonly) PHAssetCollection * assetCollection;                                         //@synthesize assetCollection=_assetCollection - In the implementation block
@property (assign,nonatomic,__weak) id<PXPhotosGridOptionsControllerDelegate> optionsDelegate;              //@synthesize optionsDelegate=_optionsDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)preloadOptions;
-(NSString *)actionPerformerType;
-(id<PXPhotosGridOptionsControllerDelegate>)optionsDelegate;
-(void)setOptionsDelegate:(id<PXPhotosGridOptionsControllerDelegate>)arg1 ;
-(void)setActionPerformerType:(NSString *)arg1 ;
-(void)setSystemIconImageName:(NSString *)arg1 ;
-(void)_workQueue_updateOptions;
-(void)_updateOptions;
-(PHAssetCollection *)assetCollection;
-(NSString *)systemIconImageName;
-(void)invitationRecordsDidChange:(id)arg1 ;
-(id)initWithAssetCollection:(id)arg1 ;
-(void)dealloc;
@end

