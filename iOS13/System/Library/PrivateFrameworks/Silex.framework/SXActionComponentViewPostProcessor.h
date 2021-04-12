/*
* Generated on Monday, March 1, 2021 at 2:33:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <libobjc.A.dylib/SXComponentViewPostProcessor.h>

@protocol SXActionProvider, SXActionComponentInteractionHandlerFactory, SXComponentInteractionHandlerManager;
@class NSString;

@interface SXActionComponentViewPostProcessor : NSObject <SXComponentViewPostProcessor> {

	id<SXActionProvider> _actionProvider;
	id<SXActionComponentInteractionHandlerFactory> _factory;
	id<SXComponentInteractionHandlerManager> _interactionHandlerManager;

}

@property (nonatomic,readonly) id<SXActionProvider> actionProvider;                                             //@synthesize actionProvider=_actionProvider - In the implementation block
@property (nonatomic,readonly) id<SXActionComponentInteractionHandlerFactory> factory;                          //@synthesize factory=_factory - In the implementation block
@property (nonatomic,readonly) id<SXComponentInteractionHandlerManager> interactionHandlerManager;              //@synthesize interactionHandlerManager=_interactionHandlerManager - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<SXActionComponentInteractionHandlerFactory>)factory;
-(id<SXActionProvider>)actionProvider;
-(void)processComponent:(id)arg1 view:(id)arg2 ;
-(id<SXComponentInteractionHandlerManager>)interactionHandlerManager;
-(id)initWithActionProvider:(id)arg1 interactionHandlerFactory:(id)arg2 interactionHandlerManager:(id)arg3 ;
@end

