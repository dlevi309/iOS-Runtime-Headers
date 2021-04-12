/*
* Generated on Thursday, January 14, 2021 at 2:28:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowEditor.framework/WorkflowEditor
*/

#import <WorkflowEditor/CKStatefulViewComponentController.h>
#import <libobjc.A.dylib/WFModuleSummaryViewDelegate.h>
#import <libobjc.A.dylib/WFComponentEditingSession.h>
#import <libobjc.A.dylib/WFActionEventObserver.h>

@class NSDictionary, NSString;

@interface WFModuleSummaryComponentController : CKStatefulViewComponentController <WFModuleSummaryViewDelegate, WFComponentEditingSession, WFActionEventObserver> {

	BOOL _summaryIsEditing;
	BOOL _shouldReflowWhenComponentRemounted;
	BOOL _actionRunning;
	NSDictionary* _stagedParameterStates;

}

@property (assign,nonatomic) BOOL summaryIsEditing;                                //@synthesize summaryIsEditing=_summaryIsEditing - In the implementation block
@property (assign,nonatomic) BOOL shouldReflowWhenComponentRemounted;              //@synthesize shouldReflowWhenComponentRemounted=_shouldReflowWhenComponentRemounted - In the implementation block
@property (nonatomic,retain) NSDictionary * stagedParameterStates;                 //@synthesize stagedParameterStates=_stagedParameterStates - In the implementation block
@property (assign,nonatomic) BOOL actionRunning;                                   //@synthesize actionRunning=_actionRunning - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)newStatefulView:(id)arg1 ;
+(void)configureStatefulView:(id)arg1 forComponent:(id)arg2 ;
+(double)heightForComponent:(id)arg1 withWidth:(double)arg2 ;
-(id)summaryView;
-(void)actionRunningStateDidChange:(id)arg1 ;
-(void)cancelEditingWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)didUpdateComponent;
-(void)didAcquireStatefulView:(id)arg1 ;
-(void)willRelinquishStatefulView:(id)arg1 ;
-(NSDictionary *)stagedParameterStates;
-(void)summaryViewDidEndEditing:(id)arg1 ;
-(void)summaryViewDidInvalidateSize:(id)arg1 ;
-(void)summaryViewWillBeginEditing:(id)arg1 ;
-(id)viewControllerContainingSummaryView:(id)arg1 ;
-(BOOL)canRelinquishStatefulView;
-(void)setSummaryIsEditing:(BOOL)arg1 ;
-(void)reflowWithStagedParameterStates:(id)arg1 ;
-(void)updateColorsForRunningStateAnimated:(BOOL)arg1 ;
-(BOOL)summaryIsEditing;
-(BOOL)shouldReflowWhenComponentRemounted;
-(void)setShouldReflowWhenComponentRemounted:(BOOL)arg1 ;
-(void)setStagedParameterStates:(NSDictionary *)arg1 ;
-(BOOL)actionRunning;
-(void)setActionRunning:(BOOL)arg1 ;
@end

