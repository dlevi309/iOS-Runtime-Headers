/*
* Generated on Thursday, January 14, 2021 at 2:22:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/


@class NSString, NSSet, NSDictionary;

@interface PLJournalEntryPayloadProperty : NSObject {

	BOOL _requiresConversion;
	BOOL _isUUIDKey;
	BOOL _shouldPrefetchRelationship;
	BOOL _isToManySubRelationship;
	NSString* _key;
	unsigned long long _type;
	NSSet* _relatedEntityPropertyNames;
	NSDictionary* _subRelationshipProperties;
	PLJournalEntryPayloadProperty* _parentProperty;

}

@property (nonatomic,retain) PLJournalEntryPayloadProperty * parentProperty;              //@synthesize parentProperty=_parentProperty - In the implementation block
@property (nonatomic,readonly) NSString * key;                                            //@synthesize key=_key - In the implementation block
@property (nonatomic,readonly) unsigned long long type;                                   //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) BOOL requiresConversion; 
@property (nonatomic,readonly) BOOL isUUIDKey;                                            //@synthesize isUUIDKey=_isUUIDKey - In the implementation block
@property (nonatomic,readonly) NSSet * relatedEntityPropertyNames;                        //@synthesize relatedEntityPropertyNames=_relatedEntityPropertyNames - In the implementation block
@property (nonatomic,readonly) NSDictionary * subRelationshipProperties;                  //@synthesize subRelationshipProperties=_subRelationshipProperties - In the implementation block
@property (nonatomic,readonly) BOOL shouldPrefetchRelationship;                           //@synthesize shouldPrefetchRelationship=_shouldPrefetchRelationship - In the implementation block
@property (nonatomic,readonly) BOOL isToManySubRelationship;                              //@synthesize isToManySubRelationship=_isToManySubRelationship - In the implementation block
@property (nonatomic,readonly) BOOL isPropertyListSupportedType; 
+(id)payloadPropertyWithKey:(id)arg1 subRelationshipProperties:(id)arg2 isToMany:(BOOL)arg3 ;
+(id)payloadPropertyWithKey:(id)arg1 andType:(unsigned long long)arg2 requiresConversion:(BOOL)arg3 ;
+(id)payloadPropertyWithKey:(id)arg1 relatedEntityPropertyNames:(id)arg2 shouldPrefetchRelationship:(BOOL)arg3 ;
+(id)payloadPropertyWithKey:(id)arg1 andType:(unsigned long long)arg2 ;
+(id)payloadPropertyForUUID;
-(BOOL)shouldPrefetchRelationship;
-(id)initWithKey:(id)arg1 andType:(unsigned long long)arg2 subRelationshipProperties:(id)arg3 requiresConversion:(BOOL)arg4 relatedEntityPropertyNames:(id)arg5 isUUIDKey:(BOOL)arg6 isToManySubRelationship:(BOOL)arg7 shouldPrefetchRelationship:(BOOL)arg8 ;
-(BOOL)isEqualToKey:(id)arg1 ;
-(id)description;
-(NSString *)key;
-(unsigned long long)type;
-(BOOL)requiresConversion;
-(NSSet *)relatedEntityPropertyNames;
-(BOOL)isUUIDKey;
-(void)setParentProperty:(PLJournalEntryPayloadProperty *)arg1 ;
-(BOOL)isToManySubRelationship;
-(NSDictionary *)subRelationshipProperties;
-(BOOL)isPropertyListSupportedType;
-(PLJournalEntryPayloadProperty *)parentProperty;
@end

