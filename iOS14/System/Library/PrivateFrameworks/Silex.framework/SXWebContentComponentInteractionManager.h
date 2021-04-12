/*
* Generated on Thursday, January 14, 2021 at 2:24:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id<SXComponentInteractionHandlerManager>)interactionHandlerManager;
-(SXComponentView *)componentView;
-(void)manageInteractionHandlerForInteraction:(id)arg1 ;
-(id<SXComponentInteractionHandler>)currentInteractionHandler;
-(id<SXWebContentComponentInteractionHandlerFactory>)componentInteractionHandlerFactory;
-(void)setCurrentInteractionHandler:(id<SXComponentInteractionHandler>)arg1 ;
-(id)initWithComponentView:(id)arg1 interactionProvider:(id)arg2 interactionHandlerManager:(id)arg3 componentInteractionHandlerFactory:(id)arg4 ;
-(id<SWInteractionProvider>)interactionProvider;
@end

