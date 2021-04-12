/*
* Generated on Thursday, January 14, 2021 at 2:22:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUI/PUAssetActionPerformer.h>
#import <libobjc.A.dylib/PUDeletePhotosActionControllerDelegate.h>

@protocol PUVideoListAssetExpungeActionPerformerDelegate;
@class NSString;

@interface PUVideoListAssetExpungeActionPerformer : PUAssetActionPerformer <PUDeletePhotosActionControllerDelegate> {

	id<PUVideoListAssetExpungeActionPerformerDelegate> _actionPerformerDelegate;

}

@property (assign,nonatomic,__weak) id<PUVideoListAssetExpungeActionPerformerDelegate> actionPerformerDelegate;              //@synthesize actionPerformerDelegate=_actionPerformerDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)canPerformOnAsset:(id)arg1 inAssetCollection:(id)arg2 ;
+(BOOL)shouldEnableOnAsset:(id)arg1 inAssetCollection:(id)arg2 ;
-(void)performUserInteractionTask;
-(void)deletePhotosActionController:(id)arg1 dismissConfirmationViewController:(id)arg2 ;
-(void)deletePhotosActionController:(id)arg1 presentConfirmationViewController:(id)arg2 ;
-(id<PUVideoListAssetExpungeActionPerformerDelegate>)actionPerformerDelegate;
-(void)setActionPerformerDelegate:(id<PUVideoListAssetExpungeActionPerformerDelegate>)arg1 ;
-(void)_performUserInteractionTask;
-(void)performBackgroundTask;
@end

