/*
* Generated on Monday, March 1, 2021 at 2:34:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)activityType;
-(UIView *)sourceView;
-(CGRect)sourceRect;
-(UIBarButtonItem *)barButtonItem;
-(void)setBarButtonItem:(UIBarButtonItem *)arg1 ;
-(void)setSourceView:(UIView *)arg1 ;
-(unsigned long long)arrowDirection;
-(void)setSourceRect:(CGRect)arg1 ;
-(void)setArrowDirection:(unsigned long long)arg1 ;
-(id)activityTitle;
-(BOOL)canPerformWithActivityItems:(id)arg1 ;
-(void)prepareWithActivityItems:(id)arg1 ;
-(id)activityViewController;
-(id)activityImage;
-(void)setActivityItems:(NSArray *)arg1 ;
-(NSArray *)activityItems;
-(WFFileRepresentation *)workflowFile;
-(id)initWithSourceView:(id)arg1 sourceRect:(CGRect)arg2 barButtonItem:(id)arg3 ;
@end

