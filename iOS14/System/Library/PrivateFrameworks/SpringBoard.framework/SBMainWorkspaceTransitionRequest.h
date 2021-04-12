/*
* Generated on Thursday, January 14, 2021 at 2:25:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SBWorkspaceTransitionRequest.h>

@protocol SBBannerUnfurlSourceContextProviding;
@class SBMainWorkspace;

@interface SBMainWorkspaceTransitionRequest : SBWorkspaceTransitionRequest {

	long long _source;
	/*^block*/id _transactionProvider;
	/*^block*/id _transactionConfigurator;
	/*^block*/id _completionBlock;
	BOOL _shouldPreventEmergencyNotificationBannerDismissal;
	BOOL _shouldPreventAutoPiP;
	id<SBBannerUnfurlSourceContextProviding> _bannerUnfurlSourceContextProvider;

}

@property (nonatomic,readonly) SBMainWorkspace * workspace; 
@property (assign,nonatomic) long long source;                                                                        //@synthesize source=_source - In the implementation block
@property (assign,nonatomic) BOOL shouldPreventEmergencyNotificationBannerDismissal;                                  //@synthesize shouldPreventEmergencyNotificationBannerDismissal=_shouldPreventEmergencyNotificationBannerDismissal - In the implementation block
@property (assign,nonatomic) BOOL shouldPreventAutoPiP;                                                               //@synthesize shouldPreventAutoPiP=_shouldPreventAutoPiP - In the implementation block
@property (nonatomic,retain) id<SBBannerUnfurlSourceContextProviding> bannerUnfurlSourceContextProvider;              //@synthesize bannerUnfurlSourceContextProvider=_bannerUnfurlSourceContextProvider - In the implementation block
@property (nonatomic,copy) id transactionProvider;                                                                    //@synthesize transactionProvider=_transactionProvider - In the implementation block
@property (nonatomic,copy) id transactionConfigurator;                                                                //@synthesize transactionConfigurator=_transactionConfigurator - In the implementation block
@property (nonatomic,copy) id completionBlock;                                                                        //@synthesize completionBlock=_completionBlock - In the implementation block
-(id)initWithDisplayConfiguration:(id)arg1 ;
-(id)completionBlock;
-(void)setCompletionBlock:(id)arg1 ;
-(void)setShouldPreventEmergencyNotificationBannerDismissal:(BOOL)arg1 ;
-(void)finalize;
-(void)setTransactionProvider:(id)arg1 ;
-(BOOL)shouldPreventAutoPiP;
-(BOOL)shouldPreventEmergencyNotificationBannerDismissal;
-(id)copyMainWorkspaceTransitionRequest;
-(void)setTransientOverlayContext:(id)arg1 ;
-(void)setSource:(long long)arg1 ;
-(void)declineWithReason:(id)arg1 ;
-(id)transactionConfigurator;
-(void)setBannerUnfurlSourceContextProvider:(id<SBBannerUnfurlSourceContextProviding>)arg1 ;
-(id)_initWithWorkspace:(id)arg1 displayConfiguration:(id)arg2 ;
-(id<SBBannerUnfurlSourceContextProviding>)bannerUnfurlSourceContextProvider;
-(id)succinctDescriptionBuilder;
-(BOOL)isMainWorkspaceTransitionRequest;
-(id)compactDescriptionBuilder;
-(void)setShouldPreventAutoPiP:(BOOL)arg1 ;
-(void)setTransactionConfigurator:(id)arg1 ;
-(id)transactionProvider;
-(long long)source;
@end

