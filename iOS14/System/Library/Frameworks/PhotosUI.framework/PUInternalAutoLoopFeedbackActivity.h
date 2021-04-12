/*
* Generated on Thursday, January 14, 2021 at 2:22:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUICore/PXActivity.h>
#import <libobjc.A.dylib/PXFeedbackAssetUIViewControllerDelegate.h>

@class NSString;

@interface PUInternalAutoLoopFeedbackActivity : PXActivity <PXFeedbackAssetUIViewControllerDelegate>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(long long)activityCategory;
-(id)activityType;
-(id)asset;
-(void)feedbackAssetUIViewController:(id)arg1 didFinish:(BOOL)arg2 ;
-(BOOL)canPerformWithActivityItems:(id)arg1 ;
-(id)activityTitle;
-(id)activityImage;
-(id)activityViewController;
@end

