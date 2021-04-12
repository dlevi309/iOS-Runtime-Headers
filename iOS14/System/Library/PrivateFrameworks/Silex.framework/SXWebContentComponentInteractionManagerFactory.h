/*
* Generated on Thursday, January 14, 2021 at 2:24:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <libobjc.A.dylib/SXWebContentComponentInteractionManagerFactory.h>

@protocol SXWebContentComponentInteractionManagerFactory <NSObject>
@required
-(id)interactionManagerForComponentView:(id)arg1;

@end


@protocol SWInteractionProvider, SXComponentInteractionHandlerManager, SXWebContentComponentInteractionHandlerFactory;
@class NSString;

@interface SXWebContentComponentInteractionManagerFactory : NSObject <SXWebContentComponentInteractionManagerFactory> {

	id<SWInteractionProvider> _interactionProvider;
	id<SXComponentInteractionHandlerManager> _interactionHandlerManager;
	id<SXWebContentComponentInteractionHandlerFactory> _componentInteractionHandlerFactory;

}

@property (nonatomic,readonly) id<SWInteractionProvider> interactionProvider;                                                      //@synthesize interactionProvider=_interactionProvider - In the implementation block
@property (nonatomic,readonly) id<SXComponentInteractionHandlerManager> interactionHandlerManager;                                 //@synthesize interactionHandlerManager=_interactionHandlerManager - In the implementation block
@property (nonatomic,readonly) id<SXWebContentComponentInteractionHandlerFactory> componentInteractionHandlerFactory;              //@synthesize componentInteractionHandlerFactory=_componentInteractionHandlerFactory - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<SXComponentInteractionHandlerManager>)interactionHandlerManager;
-(id<SXWebContentComponentInteractionHandlerFactory>)componentInteractionHandlerFactory;
-(id<SWInteractionProvider>)interactionProvider;
-(id)interactionManagerForComponentView:(id)arg1 ;
-(id)initWithInteractionProvider:(id)arg1 interactionHandlerManager:(id)arg2 componentInteractionHandlerFactory:(id)arg3 ;
@end

