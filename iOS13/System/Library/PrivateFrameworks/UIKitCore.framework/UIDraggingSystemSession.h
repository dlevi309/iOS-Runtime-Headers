/*
* Generated on Monday, March 1, 2021 at 2:30:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@protocol _DUIServerSessionSystemApp;
@class UIDraggingSystemSessionInfo, UIDraggingSystemTouchRoutingPolicy;

@interface UIDraggingSystemSession : NSObject {

	BOOL _commandeered;
	UIDraggingSystemSessionInfo* _info;
	UIDraggingSystemTouchRoutingPolicy* _routingPolicy;
	id<_DUIServerSessionSystemApp> _serverSession;

}

@property (nonatomic,retain) UIDraggingSystemSessionInfo * info;                                              //@synthesize info=_info - In the implementation block
@property (nonatomic,retain) UIDraggingSystemTouchRoutingPolicy * routingPolicy;                              //@synthesize routingPolicy=_routingPolicy - In the implementation block
@property (getter=_serverSession,nonatomic,retain) id<_DUIServerSessionSystemApp> serverSession;              //@synthesize serverSession=_serverSession - In the implementation block
@property (assign,getter=isCommandeered,nonatomic) BOOL commandeered;                                         //@synthesize commandeered=_commandeered - In the implementation block
-(UIDraggingSystemSessionInfo *)info;
-(UIDraggingSystemTouchRoutingPolicy *)routingPolicy;
-(id)_serverSession;
-(void)setInfo:(UIDraggingSystemSessionInfo *)arg1 ;
-(void)setRoutingPolicy:(UIDraggingSystemTouchRoutingPolicy *)arg1 ;
-(unsigned long long)_indexOfDragItemInSession:(id)arg1 ;
-(void)commandeerImmediately;
-(void)setCommandeered:(BOOL)arg1 ;
-(void)loadURLForItem:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)loadUserActivityForItem:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)isCommandeered;
-(void)setServerSession:(id<_DUIServerSessionSystemApp>)arg1 ;
@end

