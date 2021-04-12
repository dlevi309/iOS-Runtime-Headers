/*
* Generated on Monday, March 1, 2021 at 2:31:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSObject*<OS_dispatch_queue>)queue;
-(void)addDelegate:(id)arg1 ;
-(void)removeDelegate:(id)arg1 ;
-(NSArray *)routes;
-(NSHashTable *)delegates;
-(id<TURouteControllerActions>)actionsDelegate;
-(TURoute *)pickedRoute;
-(void)pickRoute:(id)arg1 ;
-(NSDictionary *)routesByUniqueIdentifier;
-(void)pickRouteWithUniqueIdentifier:(id)arg1 ;
-(void)handleRoutesByUniqueIdentifierUpdated:(id)arg1 ;
-(void)setRoutesByUniqueIdentifier:(NSDictionary *)arg1 ;
-(void)requeryRoutes;
-(id)initWithActionsDelegate:(id)arg1 serialQueue:(id)arg2 ;
-(TURoute *)receiverRoute;
-(TURoute *)speakerRoute;
-(void)pickRouteWhenAvailableWithUniqueIdentifier:(id)arg1 ;
-(void)handleServerReconnect;
-(void)handleServerDisconnect;
@end

