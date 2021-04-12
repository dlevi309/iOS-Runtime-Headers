/*
* Generated on Monday, March 1, 2021 at 2:33:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/


@protocol SWInteractionProvider, SXComponentInteractionHandlerManager, SXWebContentComponentInteractionHandlerFactory, SXComponentInteractionHandler;
@class SXComponentView;

@interface SXWebContentComponentInteractionManager : NSObject {

	SXComponentView* _componentView;
	id<SWInteractionProvider> _interactionProvider;
	id<SXComponentInteractionHandlerManager> _interactionHandlerManager;
	id<SXWebContentComponentInteractionHandlerFactory> _componentInteractionHandlerFactory;
	id<SXComponentInteractionHandler> _currentInteractionHandler;

}

@property (nonatomic,__weak,readonly) SXComponentView * componentView;                                                             //@synthesize componentView=_componentView - In the implementation block
@property (nonatomic,readonly) id<SWInteractionProvider> interactionProvider;                                                      //@synthesize interactionProvider=_interactionProvider - In the implementation block
@property (nonatomic,__weak,readonly) id<SXComponentInteractionHandlerManager> interactionHandlerManager;                          //@synthesize interactionHandlerManager=_interactionHandlerManager - In the implementation block
@property (nonatomic,readonly) id<SXWebContentComponentInteractionHandlerFactory> componentInteractionHandlerFactory;              //@synthesize componentInteractionHandlerFactory=_componentInteractionHandlerFactory - In the implementation block
@property (nonatomic,retain) id<SXComponentInteractionHandler> currentInteractionHandler;                                          //@synthesize currentInteractionHandler=_currentInteractionHandler - In the implementation block
-(SXComponentView *)componentView;
-(id<SXComponentInteractionHandlerManager>)interactionHandlerManager;
-(void)manageInteractionHandlerForInteraction:(id)arg1 ;
-(id<SXComponentInteractionHandler>)currentInteractionHandler;
-(id<SXWebContentComponentInteractionHandlerFactory>)componentInteractionHandlerFactory;
-(void)setCurrentInteractionHandler:(id<SXComponentInteractionHandler>)arg1 ;
-(id)initWithComponentView:(id)arg1 interactionProvider:(id)arg2 interactionHandlerManager:(id)arg3 componentInteractionHandlerFactory:(id)arg4 ;
-(id<SWInteractionProvider>)interactionProvider;
@end

