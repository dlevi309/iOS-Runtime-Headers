/*
* Generated on Monday, March 1, 2021 at 2:35:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SBWorkspaceTransitionRequest.h>

@class SBMainWorkspace;

@interface SBMainWorkspaceTransitionRequest : SBWorkspaceTransitionRequest {

	long long _source;
	/*^block*/id _transactionProvider;
	/*^block*/id _transactionConfigurator;
	/*^block*/id _completionBlock;

}

@property (nonatomic,readonly) SBMainWorkspace * workspace; 
@property (assign,nonatomic) long long source;                           //@synthesize source=_source - In the implementation block
@property (nonatomic,copy) id transactionProvider;                       //@synthesize transactionProvider=_transactionProvider - In the implementation block
@property (nonatomic,copy) id transactionConfigurator;                   //@synthesize transactionConfigurator=_transactionConfigurator - In the implementation block
@property (nonatomic,copy) id completionBlock;                           //@synthesize completionBlock=_completionBlock - In the implementation block
-(void)finalize;
-(void)setSource:(long long)arg1 ;
-(long long)source;
-(id)completionBlock;
-(void)setCompletionBlock:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)initWithDisplayConfiguration:(id)arg1 ;
-(id)copyMainWorkspaceTransitionRequest;
-(id)compactDescriptionBuilder;
-(void)declineWithReason:(id)arg1 ;
-(BOOL)isMainWorkspaceTransitionRequest;
-(id)transactionConfigurator;
-(id)transactionProvider;
-(void)setTransactionProvider:(id)arg1 ;
-(id)_initWithWorkspace:(id)arg1 displayConfiguration:(id)arg2 ;
-(void)setTransientOverlayContext:(id)arg1 ;
-(void)setTransactionConfigurator:(id)arg1 ;
@end

