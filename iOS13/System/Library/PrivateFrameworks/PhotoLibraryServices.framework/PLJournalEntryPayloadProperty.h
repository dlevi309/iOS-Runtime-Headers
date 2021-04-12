/*
* Generated on Monday, March 1, 2021 at 2:30:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/


@class NSString, NSSet, NSDictionary;

@interface PLJournalEntryPayloadProperty : NSObject {

	BOOL _requiresConversion;
	BOOL _isUUIDKey;
	BOOL _isToManySubRelationship;
	NSString* _key;
	unsigned long long _type;
	NSSet* _relationPropertyNames;
	NSDictionary* _subRelationshipProperties;
	PLJournalEntryPayloadProperty* _parentProperty;

}

@property (assign,nonatomic,__weak) PLJournalEntryPayloadProperty * parentProperty;              //@synthesize parentProperty=_parentProperty - In the implementation block
@property (nonatomic,readonly) NSString * key;                                                   //@synthesize key=_key - In the implementation block
@property (nonatomic,readonly) unsigned long long type;                                          //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) BOOL requiresConversion; 
@property (nonatomic,readonly) BOOL isUUIDKey;                                                   //@synthesize isUUIDKey=_isUUIDKey - In the implementation block
@property (nonatomic,readonly) NSSet * relationPropertyNames;                                    //@synthesize relationPropertyNames=_relationPropertyNames - In the implementation block
@property (nonatomic,readonly) NSDictionary * subRelationshipProperties;                         //@synthesize subRelationshipProperties=_subRelationshipProperties - In the implementation block
@property (nonatomic,readonly) BOOL isToManySubRelationship;                                     //@synthesize isToManySubRelationship=_isToManySubRelationship - In the implementation block
@property (nonatomic,readonly) BOOL isPropertyListSupportedType; 
+(id)payloadPropertyWithKey:(id)arg1 andType:(unsigned long long)arg2 ;
+(id)payloadPropertyForUUID;
+(id)payloadPropertyWithKey:(id)arg1 relationPropertyNames:(id)arg2 ;
+(id)payloadPropertyWithKey:(id)arg1 andType:(unsigned long long)arg2 requiresConversion:(BOOL)arg3 ;
+(id)payloadPropertyWithKey:(id)arg1 subRelationshipProperties:(id)arg2 isToMany:(BOOL)arg3 ;
-(id)description;
-(NSString *)key;
-(unsigned long long)type;
-(BOOL)isEqualToKey:(id)arg1 ;
-(NSSet *)relationPropertyNames;
-(BOOL)requiresConversion;
-(BOOL)isUUIDKey;
-(NSDictionary *)subRelationshipProperties;
-(BOOL)isToManySubRelationship;
-(BOOL)isPropertyListSupportedType;
-(void)setParentProperty:(PLJournalEntryPayloadProperty *)arg1 ;
-(id)initWithKey:(id)arg1 andType:(unsigned long long)arg2 subRelationshipProperties:(id)arg3 requiresConversion:(BOOL)arg4 relationPropertyNames:(id)arg5 isUUIDKey:(BOOL)arg6 isToManySubRelationship:(BOOL)arg7 ;
-(PLJournalEntryPayloadProperty *)parentProperty;
@end

