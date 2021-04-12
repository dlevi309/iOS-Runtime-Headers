/*
* Generated on Thursday, January 14, 2021 at 2:22:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUICore/PXActivity.h>
#import <libobjc.A.dylib/PXFeedbackImageQualityUIViewControllerDelegate.h>

@class NSString;

@interface PUInternalImageQualityFeedbackActivity : PXActivity <PXFeedbackImageQualityUIViewControllerDelegate>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(long long)activityCategory;
-(id)assets;
-(id)activityType;
-(void)feedbackImageQualityUIViewController:(id)arg1 didFinish:(BOOL)arg2 ;
-(id)_systemImageName;
-(BOOL)canPerformWithActivityItems:(id)arg1 ;
-(id)activityTitle;
-(id)activityViewController;
@end

