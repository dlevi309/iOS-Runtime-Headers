/*
* Generated on Monday, March 1, 2021 at 2:33:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
*/

#import <libobjc.A.dylib/SVInteractionManager.h>

@protocol SVInteractionManager <NSObject>
@required
-(void)registerInteraction:(id)arg1 withInteractionHandler:(id)arg2;
-(void)registerInteraction:(id)arg1 withInteractionObserver:(id)arg2;
-(void)registerInteraction:(id)arg1 withInteractionHandlerFactory:(id)arg2;
-(void)registerInteraction:(id)arg1 withInteractionObserverFactory:(id)arg2;

@end

#import <libobjc.A.dylib/SVVideoTransitionObserver.h>

@class NSMutableSet, NSMapTable, NSString;

@interface SVInteractionManager : NSObject <SVInteractionManager, SVVideoTransitionObserver> {

	NSMutableSet* _interactions;
	NSMapTable* _registeredHandlers;
	NSMapTable* _registeredObservers;
	NSMapTable* _interactionHandlers;
	NSMapTable* _interactionHandlerFactories;
	NSMapTable* _interactionObservers;
	NSMapTable* _interactionObserverFactories;

}

@property (nonatomic,readonly) NSMutableSet * interactions;                            //@synthesize interactions=_interactions - In the implementation block
@property (nonatomic,readonly) NSMapTable * registeredHandlers;                        //@synthesize registeredHandlers=_registeredHandlers - In the implementation block
@property (nonatomic,readonly) NSMapTable * registeredObservers;                       //@synthesize registeredObservers=_registeredObservers - In the implementation block
@property (nonatomic,readonly) NSMapTable * interactionHandlers;                       //@synthesize interactionHandlers=_interactionHandlers - In the implementation block
@property (nonatomic,readonly) NSMapTable * interactionHandlerFactories;               //@synthesize interactionHandlerFactories=_interactionHandlerFactories - In the implementation block
@property (nonatomic,readonly) NSMapTable * interactionObservers;                      //@synthesize interactionObservers=_interactionObservers - In the implementation block
@property (nonatomic,readonly) NSMapTable * interactionObserverFactories;              //@synthesize interactionObserverFactories=_interactionObserverFactories - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(NSMutableSet *)interactions;
-(NSMapTable *)registeredObservers;
-(void)willTransitionToVideo:(id)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)configureInteractionManagementForVideo:(id)arg1 ;
-(NSMapTable *)registeredHandlers;
-(NSMapTable *)interactionHandlerFactories;
-(NSMapTable *)interactionObserverFactories;
-(NSMapTable *)interactionHandlers;
-(NSMapTable *)interactionObservers;
-(id)interactionHandlerForInteraction:(id)arg1 withVideo:(id)arg2 ;
-(id)interactionObserverForInteraction:(id)arg1 withVideo:(id)arg2 ;
-(void)configureInteraction:(id)arg1 withHandler:(id)arg2 observer:(id)arg3 ;
-(void)registerInteraction:(id)arg1 withInteractionHandler:(id)arg2 ;
-(void)registerInteraction:(id)arg1 withInteractionObserver:(id)arg2 ;
-(void)registerInteraction:(id)arg1 withInteractionHandlerFactory:(id)arg2 ;
-(void)registerInteraction:(id)arg1 withInteractionObserverFactory:(id)arg2 ;
@end

