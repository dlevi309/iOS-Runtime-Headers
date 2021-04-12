/*
* Generated on Thursday, January 14, 2021 at 2:28:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowEditor.framework/WorkflowEditor
*/

#import <WorkflowEditor/WFDragController.h>
#import <libobjc.A.dylib/CKComponentProvider.h>
#import <libobjc.A.dylib/CKComponentHostingViewDelegate.h>

@protocol NSObject;
@class CKComponentHostingView, WFAction, NSArray, NSString;

@interface WFComponentDragController : WFDragController <CKComponentProvider, CKComponentHostingViewDelegate> {

	id<NSObject> _model;
	CKComponentHostingView* _hostingView;

}

@property (nonatomic,__weak,readonly) CKComponentHostingView * hostingView;              //@synthesize hostingView=_hostingView - In the implementation block
@property (nonatomic,readonly) long long sizeRangeFlexibility; 
@property (nonatomic,copy,readonly) WFAction * action; 
@property (nonatomic,copy,readonly) NSArray * actions; 
@property (nonatomic,retain) id<NSObject> model;                                         //@synthesize model=_model - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)componentForModel:(id)arg1 context:(id)arg2 ;
-(id<NSObject>)model;
-(NSArray *)actions;
-(WFAction *)action;
-(void)setModel:(id<NSObject>)arg1 ;
-(CKComponentHostingView *)hostingView;
-(void)updateView;
-(void)loadView;
-(void)componentHostingViewDidInvalidateSize:(id)arg1 ;
-(long long)sizeRangeFlexibility;
-(void)animateFromModels:(id)arg1 atPositions:(id)arg2 inSourceView:(id)arg3 ;
-(void)animateToModels:(id)arg1 atPositions:(id)arg2 inSourceView:(id)arg3 withWidth:(double)arg4 completion:(/*^block*/id)arg5 ;
@end

