/*
* Generated on Monday, March 1, 2021 at 2:32:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/

#import <libobjc.A.dylib/WFRecordStorageProvider.h>

@protocol WFDatabaseBackingStore;
@class NSURL, NSString;

@interface WFDatabase : NSObject <WFRecordStorageProvider> {

	NSURL* _fileURL;
	id<WFDatabaseBackingStore> _backingStore;

}

@property (nonatomic,readonly) id<WFDatabaseBackingStore> backingStore;              //@synthesize backingStore=_backingStore - In the implementation block
@property (nonatomic,readonly) NSURL * fileURL;                                      //@synthesize fileURL=_fileURL - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)defaultDatabase;
+(void)setDefaultDatabase:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)respondsToSelector:(SEL)arg1 ;
-(id)forwardingTargetForSelector:(SEL)arg1 ;
-(NSURL *)fileURL;
-(id<WFDatabaseBackingStore>)backingStore;
-(id)initWithBackingStore:(id)arg1 ;
-(id)renameReference:(id)arg1 to:(id)arg2 error:(id*)arg3 ;
-(id)suggestedWorkflowNameForName:(id)arg1 ;
-(id)createWorkflowWithOptions:(id)arg1 error:(id*)arg2 ;
-(id)recordWithDescriptor:(id)arg1 error:(id*)arg2 ;
-(BOOL)deleteReference:(id)arg1 tombstone:(BOOL)arg2 error:(id*)arg3 ;
-(id)createWorkflowWithOptions:(id)arg1 nameCollisionBehavior:(unsigned long long)arg2 error:(id*)arg3 ;
-(BOOL)saveRecord:(id)arg1 withDescriptor:(id)arg2 error:(id*)arg3 ;
-(id)referenceForWorkflowID:(id)arg1 ;
-(id)recordWithDescriptor:(id)arg1 properties:(id)arg2 error:(id*)arg3 ;
-(BOOL)reloadRecord:(id)arg1 withDescriptor:(id)arg2 error:(id*)arg3 ;
-(void)deleteAllAccessResourceStateDataForReference:(id)arg1 ;
-(id)referenceForWorkflowName:(id)arg1 ;
-(id)conflictForWorkflowReference:(id)arg1 ;
-(id)configuredTriggerForTriggerID:(id)arg1 ;
-(BOOL)deleteReference:(id)arg1 error:(id*)arg2 ;
-(id)createWorkflowWithError:(id*)arg1 ;
-(id)duplicateReference:(id)arg1 error:(id*)arg2 ;
-(id)accessResourcesForReference:(id)arg1 ;
-(id)validateWorkflowName:(id)arg1 forCreation:(BOOL)arg2 overwriting:(BOOL)arg3 error:(id*)arg4 ;
-(id)duplicateNameErrorWithName:(id)arg1 ;
@end

