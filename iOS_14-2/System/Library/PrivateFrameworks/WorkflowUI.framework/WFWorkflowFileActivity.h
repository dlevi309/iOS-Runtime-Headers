/*
* Generated on Thursday, January 14, 2021 at 2:28:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/

#import <WorkflowUI/WorkflowUI-Structs.h>
#import <ShareSheet/UIActivity.h>

@class WFFileRepresentation, NSArray, UIView, UIBarButtonItem;

@interface WFWorkflowFileActivity : UIActivity {

	WFFileRepresentation* _workflowFile;
	unsigned long long _arrowDirection;
	NSArray* _activityItems;
	UIView* _sourceView;
	UIBarButtonItem* _barButtonItem;
	CGRect _sourceRect;

}

@property (nonatomic,copy) NSArray * activityItems;                              //@synthesize activityItems=_activityItems - In the implementation block
@property (nonatomic,readonly) WFFileRepresentation * workflowFile;              //@synthesize workflowFile=_workflowFile - In the implementation block
@property (nonatomic,retain) UIView * sourceView;                                //@synthesize sourceView=_sourceView - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * barButtonItem;                    //@synthesize barButtonItem=_barButtonItem - In the implementation block
@property (assign,nonatomic) CGRect sourceRect;                                  //@synthesize sourceRect=_sourceRect - In the implementation block
@property (assign,nonatomic) unsigned long long arrowDirection;                  //@synthesize arrowDirection=_arrowDirection - In the implementation block
+(id)activityType;
-(UIBarButtonItem *)barButtonItem;
-(id)activityType;
-(void)setSourceView:(UIView *)arg1 ;
-(void)prepareWithActivityItems:(id)arg1 ;
-(NSArray *)activityItems;
-(UIView *)sourceView;
-(void)setSourceRect:(CGRect)arg1 ;
-(CGRect)sourceRect;
-(void)setArrowDirection:(unsigned long long)arg1 ;
-(id)_systemImageName;
-(BOOL)canPerformWithActivityItems:(id)arg1 ;
-(id)activityTitle;
-(void)setActivityItems:(NSArray *)arg1 ;
-(void)setBarButtonItem:(UIBarButtonItem *)arg1 ;
-(unsigned long long)arrowDirection;
-(id)activityViewController;
-(WFFileRepresentation *)workflowFile;
-(id)initWithSourceView:(id)arg1 sourceRect:(CGRect)arg2 barButtonItem:(id)arg3 ;
@end

