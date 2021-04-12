/*
* Generated on Thursday, January 14, 2021 at 2:28:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iWorkXPC.framework/XPCServices/iWorkFileFormat.xpc/Frameworks/TSPersistence.framework/TSPersistence
*/

#import <TSPersistence/TSPReadCoordinatorBase.h>
#import <TSPersistence/TSPReadCoordinator.h>

@protocol TSPDecoder, TSPDecoderReadCoordinatorDelegate, OS_dispatch_queue;
@class TSPObjectContext, TSPFinalizeHandlerQueue, NSObject, TSPComponent, NSMapTable, NSString;

@interface TSPDecoderReadCoordinator : TSPReadCoordinatorBase <TSPReadCoordinator> {

	id<TSPDecoder> _decoder;
	TSPObjectContext* _context;
	TSPFinalizeHandlerQueue* _finalizeHandlerQueue;
	id<TSPDecoderReadCoordinatorDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _dataQueue;
	TSPComponent* _rootObjectComponent;
	NSMapTable* _objects;

}

@property (nonatomic,readonly) BOOL isReadingFromDocument; 
@property (nonatomic,readonly) long long archiveValidationMode; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(long long)sourceType;
-(id)init;
-(id)context;
-(unsigned char)packageIdentifier;
-(id)objectForIdentifier:(long long)arg1 ;
-(unsigned long long)fileFormatVersion;
-(BOOL)hasDocumentVersionUUID;
-(BOOL)isCrossAppPaste;
-(void)readRootObjectWithCompletionQueue:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)endReading;
-(void)readComponent:(id)arg1 completionQueue:(id)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)readLazyReference:(id)arg1 object:(id*)arg2 error:(id*)arg3 ;
-(BOOL)canRetainObjectReferencedByWeakLazyReference;
-(unsigned long long)readVersion;
-(id)initWithDecoder:(id)arg1 context:(id)arg2 finalizeHandlerQueue:(id)arg3 delegate:(id)arg4 ;
-(BOOL)isCrossDocumentPaste;
-(BOOL)isExternalLazyReference:(id)arg1 ;
-(void)reader:(id)arg1 didFindExternalReferenceToObjectIdentifier:(long long)arg2 componentIdentifier:(long long)arg3 isWeak:(BOOL)arg4 allowUnknownObject:(BOOL)arg5 fromParentObject:(id)arg6 completion:(/*^block*/id)arg7 ;
-(void)reader:(id)arg1 didFindExternalRepeatedReference:(id)arg2 isWeak:(BOOL)arg3 allowUnknownObject:(BOOL)arg4 fromParentObject:(id)arg5 completion:(/*^block*/id)arg6 ;
-(void)reader:(id)arg1 didReadLazyReference:(id)arg2 ;
-(BOOL)isReadingFromDocument;
-(void)didUpdateLazyReferenceDelegate:(id)arg1 ;
-(id)baseObjectUUID;
-(id)unarchivedObjectForIdentifier:(long long)arg1 isReadFinished:(BOOL)arg2 ;
-(id)externalObjectForIdentifier:(long long)arg1 componentIdentifier:(long long)arg2 isReadFinished:(BOOL)arg3 ;
-(void)didReferenceExternalObject:(id)arg1 withIdentifier:(long long)arg2 ;
-(long long)reader:(id)arg1 wantsObjectIdentifierForUUID:(id)arg2 ;
-(id)reader:(id)arg1 wantsDataForIdentifier:(long long)arg2 ;
-(void)reader:(id)arg1 didUnarchiveObject:(id)arg2 ;
@end
