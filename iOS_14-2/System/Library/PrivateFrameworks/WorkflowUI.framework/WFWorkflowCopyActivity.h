/*
* Generated on Thursday, January 14, 2021 at 2:28:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)activityType;
-(void)prepareWithActivityItems:(id)arg1 ;
-(void)performActivity;
-(void)setURL:(NSURL *)arg1 ;
-(NSURL *)URL;
-(id)_systemImageName;
-(BOOL)canPerformWithActivityItems:(id)arg1 ;
-(id)activityTitle;
-(id)initWithExcludedURL:(id)arg1 ;
-(NSURL *)excludedURL;
@end

