/*
* Generated on Thursday, January 14, 2021 at 2:23:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
*/

#import <libobjc.A.dylib/REMReplicaIDHelperOwner.h>
#import <libobjc.A.dylib/CRUndoDelegate.h>

@protocol REMReplicaManagerProviding;
@class REMReplicaIDSource, CRDocument, REMReplicaIDHelper, NSMutableArray, REMMutableCRUndo, NSString;

@interface REMMutableCRMergeableOrderedSet : NSObject <REMReplicaIDHelperOwner, CRUndoDelegate> {

	id<REMReplicaManagerProviding> _replicaManagerProvider;
	REMReplicaIDSource* _replicaIDSource;
	CRDocument* _document;
	REMReplicaIDHelper* _replicaIDHelper;
	NSMutableArray* _undos;
	REMMutableCRUndo* _currentUndo;

}

@property (nonatomic,retain) REMReplicaIDSource * replicaIDSource;                               //@synthesize replicaIDSource=_replicaIDSource - In the implementation block
@property (nonatomic,retain) CRDocument * document;                                              //@synthesize document=_document - In the implementation block
@property (nonatomic,retain) REMReplicaIDHelper * replicaIDHelper;                               //@synthesize replicaIDHelper=_replicaIDHelper - In the implementation block
@property (nonatomic,readonly) NSMutableArray * undos;                                           //@synthesize undos=_undos - In the implementation block
@property (nonatomic,retain) REMMutableCRUndo * currentUndo;                                     //@synthesize currentUndo=_currentUndo - In the implementation block
@property (nonatomic,retain) id<REMReplicaManagerProviding> replicaManagerProvider;              //@synthesize replicaManagerProvider=_replicaManagerProvider - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)undo;
-(REMReplicaIDSource *)replicaIDSource;
-(void)setReplicaIDSource:(REMReplicaIDSource *)arg1 ;
-(void)setReplicaManagerProvider:(id<REMReplicaManagerProviding>)arg1 ;
-(id)insertObject:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)setDocument:(CRDocument *)arg1 ;
-(NSString *)description;
-(id)addObject:(id)arg1 ;
-(id)removeObjectAtIndex:(unsigned long long)arg1 ;
-(void)undo:(id)arg1 ;
-(CRDocument *)document;
-(REMMutableCRUndo *)currentUndo;
-(id)initWithReplicaIDSource:(id)arg1 immutableDocumentToEdit:(id)arg2 undos:(id)arg3 ;
-(REMReplicaIDHelper *)replicaIDHelper;
-(void)setCurrentUndo:(REMMutableCRUndo *)arg1 ;
-(id)documentToEdit;
-(id)moveObjectFromIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2 ;
-(void)replicaIDHelperDidAcquireReplicaUUID:(id)arg1 ;
-(void)addUndoCommandsForObject:(id)arg1 block:(/*^block*/id)arg2 ;
-(BOOL)wantsUndoCommands;
-(id)immutableOrderedSet;
-(void)setReplicaIDHelper:(REMReplicaIDHelper *)arg1 ;
-(NSMutableArray *)undos;
-(id<REMReplicaManagerProviding>)replicaManagerProvider;
@end

