/*
* Generated on Thursday, January 14, 2021 at 2:28:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iWorkXPC.framework/XPCServices/iWorkFileFormat.xpc/Frameworks/TSPersistence.framework/TSPersistence
*/


@protocol TSPReadCoordinator;
@class NSMapTable, TSPFinalizeHandlerQueue;

@interface TSPReadCompletionInfo : NSObject {

	NSMapTable* _objects;
	id<TSPReadCoordinator> _readCoordinator;
	TSPFinalizeHandlerQueue* _finalizeHandlerQueue;

}

@property (nonatomic,readonly) NSMapTable * objects;                                        //@synthesize objects=_objects - In the implementation block
@property (nonatomic,readonly) id<TSPReadCoordinator> readCoordinator;                      //@synthesize readCoordinator=_readCoordinator - In the implementation block
@property (nonatomic,readonly) TSPFinalizeHandlerQueue * finalizeHandlerQueue;              //@synthesize finalizeHandlerQueue=_finalizeHandlerQueue - In the implementation block
-(NSMapTable *)objects;
-(id)initWithObjects:(id)arg1 readCoordinator:(id)arg2 finalizeHandlerQueue:(id)arg3 ;
-(TSPFinalizeHandlerQueue *)finalizeHandlerQueue;
-(id<TSPReadCoordinator>)readCoordinator;
@end

