/*
* Generated on Thursday, January 14, 2021 at 2:26:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/AutomaticAssessmentConfiguration.framework/AutomaticAssessmentConfiguration
*/

#import <libobjc.A.dylib/AACDependencies.AEDBackingAssessmentSessionDelegate.h>

@protocol AEAssessmentSessionDelegate;
@class _TtC15AACDependencies27AEDBackingAssessmentSession;

@interface AEAssessmentSession : NSObject <AACDependencies.AEDBackingAssessmentSessionDelegate> {

	id<AEAssessmentSessionDelegate> _delegate;
	_TtC15AACDependencies27AEDBackingAssessmentSession* _backingSession;

}

@property (assign,nonatomic,__weak) id<AEAssessmentSessionDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (getter=isActive,nonatomic,readonly) BOOL active; 
-(void)end;
-(void)begin;
-(id<AEAssessmentSessionDelegate>)delegate;
-(BOOL)isActive;
-(id)initWithConfiguration:(id)arg1 ;
-(void)setDelegate:(id<AEAssessmentSessionDelegate>)arg1 ;
-(void)backingAssessmentSessionDidBegin:(id)arg1 ;
-(void)backingAssessmentSession:(id)arg1 failedToBeginWithError:(id)arg2 ;
-(void)backingAssessmentSession:(id)arg1 wasInterruptedWithError:(id)arg2 ;
-(void)backingAssessmentSessionDidEnd:(id)arg1 ;
@end

