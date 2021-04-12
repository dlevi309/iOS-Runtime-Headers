/*
* Generated on Monday, March 1, 2021 at 2:34:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/

#import <ComponentKit/CKStatefulViewComponentController.h>
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
-(void)actionRunningStateDidChange:(id)arg1 ;
-(void)didAcquireStatefulView:(id)arg1 ;
-(void)willRelinquishStatefulView:(id)arg1 ;
-(void)cancelEditingWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)reflowWithStagedParameterStates:(id)arg1 ;
-(NSDictionary *)stagedParameterStates;
-(void)didUpdateComponent;
-(id)viewControllerContainingSummaryView:(id)arg1 ;
-(void)summaryViewWillBeginEditing:(id)arg1 ;
-(void)summaryViewDidEndEditing:(id)arg1 ;
-(void)summaryViewDidInvalidateSize:(id)arg1 ;
-(id)summaryView;
-(BOOL)canRelinquishStatefulView;
-(void)setSummaryIsEditing:(BOOL)arg1 ;
-(void)updateColorsForRunningStateAnimated:(BOOL)arg1 ;
-(BOOL)summaryIsEditing;
-(BOOL)shouldReflowWhenComponentRemounted;
-(void)setShouldReflowWhenComponentRemounted:(BOOL)arg1 ;
-(void)setStagedParameterStates:(NSDictionary *)arg1 ;
-(BOOL)actionRunning;
-(void)setActionRunning:(BOOL)arg1 ;
@end

