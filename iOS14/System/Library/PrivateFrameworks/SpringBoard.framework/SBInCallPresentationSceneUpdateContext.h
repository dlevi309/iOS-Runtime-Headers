/*
* Generated on Thursday, January 14, 2021 at 2:25:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/


#import <SpringBoard/SpringBoard-Structs.h>
@class NSString;

@interface SBInCallPresentationSceneUpdateContext : NSObject {

	NSString* _analyticsSource;
	long long _executionTarget;
	/*^block*/id _completionHandler;
	/*^block*/id _postSceneUpdateHandler;
	/*^block*/id _transitionRequestBuilderBlock;
	/*^block*/id _validatorHandler;
	CGRect _referenceFrame;

}

@property (nonatomic,copy) NSString * analyticsSource;                    //@synthesize analyticsSource=_analyticsSource - In the implementation block
@property (assign,nonatomic) CGRect referenceFrame;                       //@synthesize referenceFrame=_referenceFrame - In the implementation block
@property (assign,nonatomic) long long executionTarget;                   //@synthesize executionTarget=_executionTarget - In the implementation block
@property (nonatomic,copy) id completionHandler;                          //@synthesize completionHandler=_completionHandler - In the implementation block
@property (nonatomic,copy) id postSceneUpdateHandler;                     //@synthesize postSceneUpdateHandler=_postSceneUpdateHandler - In the implementation block
@property (nonatomic,copy) id transitionRequestBuilderBlock;              //@synthesize transitionRequestBuilderBlock=_transitionRequestBuilderBlock - In the implementation block
@property (nonatomic,copy) id validatorHandler;                           //@synthesize validatorHandler=_validatorHandler - In the implementation block
-(void)setCompletionHandler:(id)arg1 ;
-(id)completionHandler;
-(CGRect)referenceFrame;
-(void)setReferenceFrame:(CGRect)arg1 ;
-(long long)executionTarget;
-(NSString *)analyticsSource;
-(void)setAnalyticsSource:(NSString *)arg1 ;
-(id)initWithReferenceFrame:(CGRect)arg1 analyticsSource:(id)arg2 transitionRequestBuilderBlock:(/*^block*/id)arg3 ;
-(void)setPostSceneUpdateHandler:(id)arg1 ;
-(void)setExecutionTarget:(long long)arg1 ;
-(void)setValidatorHandler:(id)arg1 ;
-(id)postSceneUpdateHandler;
-(id)transitionRequestBuilderBlock;
-(id)validatorHandler;
-(void)setTransitionRequestBuilderBlock:(id)arg1 ;
@end

