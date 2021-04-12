/*
* Generated on Thursday, January 14, 2021 at 2:22:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <libobjc.A.dylib/PXAssetsSharingHelper.h>

@protocol PXAssetsSharingHelperDelegate;
@class NSString;

@interface PUAssetSharingHelper : NSObject <PXAssetsSharingHelper> {

	id<PXAssetsSharingHelperDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<PXAssetsSharingHelperDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)_ensureLocalAssets:(id)arg1 forReason:(id)arg2 completion:(/*^block*/id)arg3 ;
+(void)copyAssets:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id<PXAssetsSharingHelperDelegate>)delegate;
-(void)copyAssets:(id)arg1 ;
-(void)_presentViewController:(id)arg1 ;
-(void)setDelegate:(id<PXAssetsSharingHelperDelegate>)arg1 ;
-(void)ensureLocalAssetsForCloudPhotoSharing:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

