/*
* Generated on Thursday, January 14, 2021 at 2:24:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <libobjc.A.dylib/SXLayoutCoordinatorDelegate.h>
#import <libobjc.A.dylib/SXPresentationAttributesObserver.h>
#import <libobjc.A.dylib/SXSubscriptionStatusObserving.h>
#import <libobjc.A.dylib/SXDebugLayoutOptionsObserving.h>
#import <libobjc.A.dylib/SXNewsletterSubscriptionStatusObserving.h>
#import <libobjc.A.dylib/SXFormatInteractor.h>

@protocol SXFormatInteractor <NSObject>
@property (assign,nonatomic,__weak) id<SXFormatInteractorDelegate> delegate; 
@required
-(id<SXFormatInteractorDelegate>)delegate;
-(void)updateWithPresentationEnvironment:(id)arg1;
-(void)setDelegate:(id)arg1;

@end


@protocol SXFormatInteractorDelegate, SXLayoutCoordinator, SXLayoutOptionsFactory, SXPresentationAttributesProvider, SXSubscriptionStatusProviding, SXPresentationEnvironment, SXDebugLayoutOptionsProviding, SXNewsletterSubscriptionStatusProviding;
@class NSString;

@interface SXFormatInteractor : NSObject <SXLayoutCoordinatorDelegate, SXPresentationAttributesObserver, SXSubscriptionStatusObserving, SXDebugLayoutOptionsObserving, SXNewsletterSubscriptionStatusObserving, SXFormatInteractor> {

	BOOL _requestedContentHiding;
	id<SXFormatInteractorDelegate> _delegate;
	id<SXLayoutCoordinator> _layoutCoordinator;
	id<SXLayoutOptionsFactory> _layoutOptionsFactory;
	id<SXPresentationAttributesProvider> _presentationAttributesProvider;
	id<SXSubscriptionStatusProviding> _subscriptionStatusProvider;
	id<SXPresentationEnvironment> _presentationEnvironment;
	id<SXDebugLayoutOptionsProviding> _debugLayoutOptionsProvider;
	id<SXNewsletterSubscriptionStatusProviding> _newsletterSubscriptionStatusProvider;

}

@property (nonatomic,readonly) id<SXLayoutCoordinator> layoutCoordinator;                                                     //@synthesize layoutCoordinator=_layoutCoordinator - In the implementation block
@property (nonatomic,readonly) id<SXLayoutOptionsFactory> layoutOptionsFactory;                                               //@synthesize layoutOptionsFactory=_layoutOptionsFactory - In the implementation block
@property (nonatomic,readonly) id<SXPresentationAttributesProvider> presentationAttributesProvider;                           //@synthesize presentationAttributesProvider=_presentationAttributesProvider - In the implementation block
@property (nonatomic,readonly) id<SXSubscriptionStatusProviding> subscriptionStatusProvider;                                  //@synthesize subscriptionStatusProvider=_subscriptionStatusProvider - In the implementation block
@property (assign,nonatomic,__weak) id<SXPresentationEnvironment> presentationEnvironment;                                    //@synthesize presentationEnvironment=_presentationEnvironment - In the implementation block
@property (nonatomic,readonly) id<SXDebugLayoutOptionsProviding> debugLayoutOptionsProvider;                                  //@synthesize debugLayoutOptionsProvider=_debugLayoutOptionsProvider - In the implementation block
@property (nonatomic,readonly) id<SXNewsletterSubscriptionStatusProviding> newsletterSubscriptionStatusProvider;              //@synthesize newsletterSubscriptionStatusProvider=_newsletterSubscriptionStatusProvider - In the implementation block
@property (assign,nonatomic) BOOL requestedContentHiding;                                                                     //@synthesize requestedContentHiding=_requestedContentHiding - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<SXFormatInteractorDelegate> delegate;                                                  //@synthesize delegate=_delegate - In the implementation block
-(id<SXSubscriptionStatusProviding>)subscriptionStatusProvider;
-(void)layoutCoordinator:(id)arg1 willLayoutWithParameters:(id)arg2 ;
-(id<SXFormatInteractorDelegate>)delegate;
-(id<SXLayoutCoordinator>)layoutCoordinator;
-(id<SXNewsletterSubscriptionStatusProviding>)newsletterSubscriptionStatusProvider;
-(void)layoutCoordinator:(id)arg1 didIntegrateBlueprint:(id)arg2 ;
-(id<SXDebugLayoutOptionsProviding>)debugLayoutOptionsProvider;
-(void)updateWithPresentationEnvironment:(id)arg1 ;
-(void)setDelegate:(id<SXFormatInteractorDelegate>)arg1 ;
-(void)layoutCoordinator:(id)arg1 cancelledLayoutWithOptions:(id)arg2 ;
-(void)presentationAttributesDidChangeFrom:(id)arg1 toAttributes:(id)arg2 ;
-(void)channelSubscriptionStatusDidChangeFromStatus:(long long)arg1 ;
-(void)bundleSubscriptionStatusDidChangeFromStatus:(long long)arg1 ;
-(BOOL)requestedContentHiding;
-(void)layoutCoordinator:(id)arg1 willIntegrateBlueprint:(id)arg2 ;
-(id<SXPresentationAttributesProvider>)presentationAttributesProvider;
-(id)initWithLayoutCoordinator:(id)arg1 layoutOptionsFactory:(id)arg2 presentationAttributesProvider:(id)arg3 subscriptionStatusProvider:(id)arg4 debugLayoutOptionsProvider:(id)arg5 newsletterSubscriptionStatusProvider:(id)arg6 ;
-(void)newsletterSubscriptionStatusDidChangeFromStatus:(unsigned long long)arg1 ;
-(void)setPresentationEnvironment:(id<SXPresentationEnvironment>)arg1 ;
-(id<SXLayoutOptionsFactory>)layoutOptionsFactory;
-(void)setRequestedContentHiding:(BOOL)arg1 ;
-(id<SXPresentationEnvironment>)presentationEnvironment;
-(void)debugLayoutOptionsDidChange:(id)arg1 ;
@end

