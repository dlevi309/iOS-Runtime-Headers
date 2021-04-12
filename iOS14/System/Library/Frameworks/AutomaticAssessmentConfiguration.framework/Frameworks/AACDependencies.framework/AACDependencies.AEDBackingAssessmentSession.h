/*
* Generated on Thursday, January 14, 2021 at 2:26:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/AutomaticAssessmentConfiguration.framework/Frameworks/AACDependencies.framework/AACDependencies
*/


@interface AACDependencies.AEDBackingAssessmentSession : NSObject {

	 configuration;
	 policyBundleFactory;
	 configurationValidator;
	 policySession;
	 state;
	 delegate;

}

@property (assign,__weak,nonatomic) id<_TtP15AACDependencies35AEDBackingAssessmentSessionDelegate_> delegate; 
@property (readonly,nonatomic) BOOL isActive; 
-(void)end;
-(void)begin;
-(id)init;
-(id<_TtP15AACDependencies35AEDBackingAssessmentSessionDelegate_>)delegate;
-(BOOL)isActive;
-(id)initWithConfiguration:(id)arg1 ;
-(void)setDelegate:(id<_TtP15AACDependencies35AEDBackingAssessmentSessionDelegate_>)arg1 ;
@end

