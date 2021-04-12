/*
* Generated on Monday, March 1, 2021 at 2:34:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/

#import <ShareSheet/UIActivity.h>

@class NSURL;

@interface WFWorkflowCopyActivity : UIActivity {

	NSURL* _excludedURL;
	NSURL* _URL;

}

@property (nonatomic,readonly) NSURL * excludedURL;              //@synthesize excludedURL=_excludedURL - In the implementation block
@property (nonatomic,retain) NSURL * URL;                        //@synthesize URL=_URL - In the implementation block
-(void)setURL:(NSURL *)arg1 ;
-(NSURL *)URL;
-(id)activityType;
-(id)activityTitle;
-(BOOL)canPerformWithActivityItems:(id)arg1 ;
-(void)prepareWithActivityItems:(id)arg1 ;
-(id)activityImage;
-(void)performActivity;
-(id)initWithExcludedURL:(id)arg1 ;
-(NSURL *)excludedURL;
@end

