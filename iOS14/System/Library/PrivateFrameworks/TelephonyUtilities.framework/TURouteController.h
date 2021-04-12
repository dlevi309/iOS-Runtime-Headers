/*
* Generated on Thursday, January 14, 2021 at 2:23:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
*/


@protocol OS_dispatch_queue, TURouteControllerActions;
@class NSObject, NSHashTable, NSDictionary, NSArray, TURoute;

@interface TURouteController : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	id<TURouteControllerActions> _actionsDelegate;
	NSHashTable* _delegates;
	NSDictionary* _routesByUniqueIdentifier;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;                               //@synthesize queue=_queue - In the implementation block
@property (nonatomic,__weak,readonly) id<TURouteControllerActions> actionsDelegate;              //@synthesize actionsDelegate=_actionsDelegate - In the implementation block
@property (nonatomic,readonly) NSHashTable * delegates;                                          //@synthesize delegates=_delegates - In the implementation block
@property (nonatomic,copy) NSDictionary * routesByUniqueIdentifier;                              //@synthesize routesByUniqueIdentifier=_routesByUniqueIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSArray * routes; 
@property (nonatomic,copy,readonly) TURoute * pickedRoute; 
@property (nonatomic,copy,readonly) TURoute * receiverRoute; 
@property (nonatomic,copy,readonly) TURoute * speakerRoute; 
-(id<TURouteControllerActions>)actionsDelegate;
-(void)pickRoute:(id)arg1 ;
-(TURoute *)pickedRoute;
-(void)handleServerDisconnect;
-(NSHashTable *)delegates;
-(NSArray *)routes;
-(void)addDelegate:(id)arg1 ;
-(void)removeDelegate:(id)arg1 ;
-(TURoute *)speakerRoute;
-(TURoute *)receiverRoute;
-(void)requeryRoutes;
-(void)setRoutesByUniqueIdentifier:(NSDictionary *)arg1 ;
-(void)pickRouteWhenAvailableWithUniqueIdentifier:(id)arg1 ;
-(void)handleRoutesByUniqueIdentifierUpdated:(id)arg1 ;
-(id)initWithActionsDelegate:(id)arg1 serialQueue:(id)arg2 ;
-(id)routeWithSourceIdentifier:(id)arg1 ;
-(void)pickRouteWithUniqueIdentifier:(id)arg1 ;
-(NSDictionary *)routesByUniqueIdentifier;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)handleServerReconnect;
@end

