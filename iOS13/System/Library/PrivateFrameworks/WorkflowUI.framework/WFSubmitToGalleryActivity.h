/*
* Generated on Monday, March 1, 2021 at 2:34:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/

#import <ShareSheet/UIActivity.h>
#import <libobjc.A.dylib/WFGallerySubmissionControllerDelegate.h>

@class WFWorkflow, NSString;

@interface WFSubmitToGalleryActivity : UIActivity <WFGallerySubmissionControllerDelegate> {

	WFWorkflow* _workflow;

}

@property (nonatomic,retain) WFWorkflow * workflow;                 //@synthesize workflow=_workflow - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)cancel;
-(id)activityType;
-(id)activityTitle;
-(BOOL)canPerformWithActivityItems:(id)arg1 ;
-(void)prepareWithActivityItems:(id)arg1 ;
-(id)activityViewController;
-(id)activityImage;
-(WFWorkflow *)workflow;
-(void)setWorkflow:(WFWorkflow *)arg1 ;
-(void)gallerySubmissionDidFinish:(id)arg1 ;
-(void)gallerySubmissionDidCancel:(id)arg1 ;
@end

