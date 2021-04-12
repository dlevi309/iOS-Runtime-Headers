/*
* Generated on Monday, March 1, 2021 at 2:30:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <libobjc.A.dylib/_DUIClientDestination.h>
#import <libobjc.A.dylib/_DUIClientSessionDestination.h>
#import <UIKitCore/_UIDruidDestinationConnection.h>

@protocol _UIDruidDestinationConnection <NSObject>
@property (nonatomic,readonly) unsigned sessionIdentifier; 
@property (nonatomic,copy) id connectionBlock; 
@property (nonatomic,copy) id dragPreviewProviderBlock; 
@property (nonatomic,copy) id itemsAddedBlock; 
@property (nonatomic,copy) id dropPerformBlock; 
@property (nonatomic,copy) id handOffDroppedItemsBlock; 
@property (nonatomic,copy) id dragEndBlock; 
@required
-(id)init;
-(void)takePotentialDrop:(id)arg1;
-(void)requestVisibleItems:(/*^block*/id)arg1;
-(void)requestDropWithOperation:(unsigned long long)arg1;
-(void)sawDragEndEvent;
-(void)enableKeyboardIfNeeded;
-(void)setDragPreviewProviderBlock:(/*^block*/id)arg1;
-(void)dirtyItems:(id)arg1;
-(unsigned)sessionIdentifier;
-(id)initWithSessionIdentifier:(unsigned)arg1 systemPolicy:(BOOL)arg2;
-(void)setConnectionBlock:(/*^block*/id)arg1;
-(void)setItemsAddedBlock:(/*^block*/id)arg1;
-(void)setDropPerformBlock:(/*^block*/id)arg1;
-(void)setHandOffDroppedItemsBlock:(/*^block*/id)arg1;
-(void)setDragEndBlock:(/*^block*/id)arg1;
-(id)dragPreviewProviderBlock;
-(id)connectionBlock;
-(id)itemsAddedBlock;
-(id)dropPerformBlock;
-(id)handOffDroppedItemsBlock;
-(id)dragEndBlock;

@end


@protocol _DUIServerSessionDestination;
@class NSXPCConnection, NSString;

@interface _UIDruidDestinationConnection : NSObject <_DUIClientDestination, _DUIClientSessionDestination, _UIDruidDestinationConnection> {

	NSXPCConnection* _connection;
	id<_DUIServerSessionDestination> _serverSession;
	unsigned _sessionIdentifier;
	/*^block*/id _connectionBlock;
	/*^block*/id _dragEndBlock;
	/*^block*/id _dropPerformBlock;
	/*^block*/id _handOffDroppedItemsBlock;
	/*^block*/id _dragPreviewProviderBlock;
	/*^block*/id _itemsAddedBlock;
	long long _state;

}

@property (assign,nonatomic) long long state;                           //@synthesize state=_state - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned sessionIdentifier;              //@synthesize sessionIdentifier=_sessionIdentifier - In the implementation block
@property (nonatomic,copy) id connectionBlock;                          //@synthesize connectionBlock=_connectionBlock - In the implementation block
@property (nonatomic,copy) id dragPreviewProviderBlock;                 //@synthesize dragPreviewProviderBlock=_dragPreviewProviderBlock - In the implementation block
@property (nonatomic,copy) id itemsAddedBlock;                          //@synthesize itemsAddedBlock=_itemsAddedBlock - In the implementation block
@property (nonatomic,copy) id dropPerformBlock;                         //@synthesize dropPerformBlock=_dropPerformBlock - In the implementation block
@property (nonatomic,copy) id handOffDroppedItemsBlock;                 //@synthesize handOffDroppedItemsBlock=_handOffDroppedItemsBlock - In the implementation block
@property (nonatomic,copy) id dragEndBlock;                             //@synthesize dragEndBlock=_dragEndBlock - In the implementation block
-(long long)state;
-(void)setState:(long long)arg1 ;
-(void)takePotentialDrop:(id)arg1 ;
-(void)requestVisibleItems:(/*^block*/id)arg1 ;
-(oneway void)requestDragPreviewsForIndexSet:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)requestDropWithOperation:(unsigned long long)arg1 ;
-(void)sawDragEndEvent;
-(void)enableKeyboardIfNeeded;
-(oneway void)addedItemCollection:(id)arg1 ;
-(oneway void)performDropWithItemCollection:(id)arg1 dataProviderEndpoint:(id)arg2 visibleDroppedItems:(id)arg3 reply:(/*^block*/id)arg4 ;
-(oneway void)handOffDroppedItems:(id)arg1 withFence:(id)arg2 ;
-(oneway void)dragEnded;
-(void)setDragPreviewProviderBlock:(id)arg1 ;
-(void)dirtyItems:(id)arg1 ;
-(unsigned)sessionIdentifier;
-(id)initWithSessionIdentifier:(unsigned)arg1 systemPolicy:(BOOL)arg2 ;
-(void)setConnectionBlock:(id)arg1 ;
-(void)setItemsAddedBlock:(id)arg1 ;
-(void)setDropPerformBlock:(id)arg1 ;
-(void)setHandOffDroppedItemsBlock:(id)arg1 ;
-(void)setDragEndBlock:(id)arg1 ;
-(id)dragPreviewProviderBlock;
-(id)connectionBlock;
-(id)itemsAddedBlock;
-(id)dropPerformBlock;
-(id)handOffDroppedItemsBlock;
-(id)dragEndBlock;
@end

