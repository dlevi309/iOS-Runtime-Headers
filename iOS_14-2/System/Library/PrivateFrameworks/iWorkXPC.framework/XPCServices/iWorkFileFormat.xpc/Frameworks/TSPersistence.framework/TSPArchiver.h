/*
* Generated on Thursday, January 14, 2021 at 2:28:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iWorkXPC.framework/XPCServices/iWorkFileFormat.xpc/Frameworks/TSPersistence.framework/TSPersistence
*/

#import <TSPersistence/TSPersistence-Structs.h>
#import <TSPersistence/TSPArchiverBase.h>

@protocol OS_dispatch_group, OS_dispatch_data;
@class TSPUnknownContentSnapshot, NSObject, NSMutableSet, NSUUID, TSPObject, TSPReferenceOrderedSet, NSHashTable, NSSet;

@interface TSPArchiver : TSPArchiverBase {

	Ac _flags;
	TSPUnknownContentSnapshot* _unknownContentSnapshot;
	NSObject*<OS_dispatch_group> _archiveGroup;
	NSObject*<OS_dispatch_group> _serializeGroup;
	NSObject*<OS_dispatch_data> _serializedData;
	NSMutableSet* _featureInfos;
	NSUUID* _objectUUID;
	TSPObject* _explicitComponentRootObject;
	TSPReferenceOrderedSet* _aggregatedStrongReferences;
	TSPReferenceOrderedSet* _aggregatedWeakReferences;
	NSHashTable* _aggregatedLazyReferences;
	NSHashTable* _aggregatedDataReferences;

}

@property (nonatomic,readonly) NSUUID * objectUUID;                                              //@synthesize objectUUID=_objectUUID - In the implementation block
@property (nonatomic,readonly) TSPObject * explicitComponentRootObject;                          //@synthesize explicitComponentRootObject=_explicitComponentRootObject - In the implementation block
@property (nonatomic,readonly) BOOL success; 
@property (nonatomic,readonly) BOOL needsToScheduleArchive; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_group> archiveGroup;                        //@synthesize archiveGroup=_archiveGroup - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_group> serializeGroup;                      //@synthesize serializeGroup=_serializeGroup - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_data> serializedData;                       //@synthesize serializedData=_serializedData - In the implementation block
@property (nonatomic,readonly) NSSet * featureInfos; 
@property (nonatomic,readonly) TSPReferenceOrderedSet * aggregatedStrongReferences;              //@synthesize aggregatedStrongReferences=_aggregatedStrongReferences - In the implementation block
@property (nonatomic,readonly) TSPReferenceOrderedSet * aggregatedWeakReferences;                //@synthesize aggregatedWeakReferences=_aggregatedWeakReferences - In the implementation block
@property (nonatomic,readonly) NSHashTable * aggregatedLazyReferences;                           //@synthesize aggregatedLazyReferences=_aggregatedLazyReferences - In the implementation block
@property (nonatomic,readonly) NSHashTable * aggregatedDataReferences;                           //@synthesize aggregatedDataReferences=_aggregatedDataReferences - In the implementation block
@property (assign,nonatomic) unsigned long long messageVersion; 
@property (nonatomic,readonly) BOOL shouldSaveAlternates; 
-(NSObject*<OS_dispatch_data>)serializedData;
-(BOOL)success;
-(void)serialize;
-(id)initWithObject:(id)arg1 ;
-(void)fail;
-(void)archive;
-(void)cleanup;
-(NSUUID *)objectUUID;
-(void)requiresDocumentReadVersion:(unsigned long long)arg1 writeVersion:(unsigned long long)arg2 ;
-(void)requiresDocumentVersion:(unsigned long long)arg1 ;
-(void)requiresDocumentReadVersion:(unsigned long long)arg1 writeVersion:(unsigned long long)arg2 featureIdentifier:(id)arg3 ;
-(void)requiresDocumentVersion:(unsigned long long)arg1 featureIdentifier:(id)arg2 ;
-(BOOL)shouldSaveAlternates;
-(id)addAlternateArchiverForVersion:(unsigned long long)arg1 fieldPath:(const FieldPath*)arg2 isDiffArchiver:(BOOL)arg3 diffReadVersion:(unsigned long long)arg4 message:(const Message*)arg5 ;
-(BOOL)isSavingDocumentAs;
-(BOOL)isSavingCollaborativeDocument;
-(id)initWithObject:(id)arg1 flags:(char)arg2 ;
-(void)addDocumentFeatureInfoWithIdentifier:(id)arg1 readVersion:(unsigned long long)arg2 writeVersion:(unsigned long long)arg3 validatingValues:(BOOL)arg4 ;
-(void)aggregateReferencesFromArchiver:(id)arg1 ;
-(id)calculateOrderedArchivableContent;
-(void)validateOrderedArchivableContent:(id)arg1 ;
-(BOOL)updateMessageInfo:(MessageInfo*)arg1 withArchiver:(id)arg2 ;
-(NSSet *)featureInfos;
-(id)alternateForVersion:(unsigned long long)arg1 ;
-(void)willScheduleArchive;
-(BOOL)needsToScheduleArchive;
-(BOOL)beginArchive;
-(BOOL)beginWrite;
-(TSPObject *)explicitComponentRootObject;
-(NSObject*<OS_dispatch_group>)archiveGroup;
-(NSObject*<OS_dispatch_group>)serializeGroup;
-(TSPReferenceOrderedSet *)aggregatedStrongReferences;
-(TSPReferenceOrderedSet *)aggregatedWeakReferences;
-(NSHashTable *)aggregatedLazyReferences;
-(NSHashTable *)aggregatedDataReferences;
@end

