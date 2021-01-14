/*
* Generated on Thursday, January 14, 2021 at 2:22:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VoiceShortcutClient.framework/VoiceShortcutClient
*/


@class NSSet;

@interface WFCoreDataChangeNotification : NSObject {

	BOOL _invalidatedAllObjects;
	int _processIdentifier;
	NSSet* _updated;
	NSSet* _inserted;
	NSSet* _deleted;

}

@property (nonatomic,readonly) BOOL invalidatedAllObjects;              //@synthesize invalidatedAllObjects=_invalidatedAllObjects - In the implementation block
@property (nonatomic,readonly) NSSet * updated;                         //@synthesize updated=_updated - In the implementation block
@property (nonatomic,readonly) NSSet * inserted;                        //@synthesize inserted=_inserted - In the implementation block
@property (nonatomic,readonly) NSSet * deleted;                         //@synthesize deleted=_deleted - In the implementation block
@property (nonatomic,readonly) int processIdentifier;                   //@synthesize processIdentifier=_processIdentifier - In the implementation block
-(id)dictionaryRepresentation;
-(id)initWithDictionaryRepresentation:(id)arg1 ;
-(id)deletedDescriptors;
-(BOOL)appliesToObjectIDs:(id)arg1 ;
-(int)processIdentifier;
-(id)initWithInvalidatedAllObjects:(BOOL)arg1 updated:(id)arg2 inserted:(id)arg3 deleted:(id)arg4 processIdentifier:(int)arg5 ;
-(BOOL)appliesToResultState:(id)arg1 ;
-(id)debugDescription;
-(NSSet *)deleted;
-(NSSet *)updated;
-(id)notificationByMergingChangesFromNotification:(id)arg1 ;
-(BOOL)invalidatedAllObjects;
-(BOOL)hasChanges;
-(id)insertedDescriptors;
-(BOOL)originatedInCurrentProcess;
-(NSSet *)inserted;
-(BOOL)appliesToObjectURIRepresentations:(id)arg1 ;
-(id)updatedDescriptors;
@end

