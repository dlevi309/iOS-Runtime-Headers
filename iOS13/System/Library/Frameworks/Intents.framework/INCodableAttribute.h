/*
* Generated on Monday, March 1, 2021 at 2:31:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

#import <Intents/Intents-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/INCodableCoding.h>

@class NSMutableDictionary, INCodableDescription, NSString, INCodableAttributeMetadata, INCodableAttributeRelationship, NSArray, NSNumber;

@interface INCodableAttribute : NSObject <NSSecureCoding, NSCopying, INCodableCoding> {

	NSMutableDictionary* _promptDialogsByType;
	BOOL _defaultAttribute;
	BOOL _supportsResolution;
	BOOL _supportsDynamicEnumeration;
	INCodableDescription* _internalCodableDescription;
	NSString* _typeString;
	long long _modifier;
	NSString* _propertyName;
	NSString* _displayName;
	NSString* _displayNameID;
	INCodableAttributeMetadata* _metadata;
	INCodableAttributeRelationship* _relationship;
	NSArray* _promptDialogs;
	NSArray* _unsupportedReasons;
	NSString* _entityKeypath;
	NSNumber* _displayPriorityRank;
	Class __relationshipValueTransformerClass;

}

@property (nonatomic,copy) NSNumber * displayPriorityRank;                                                                  //@synthesize displayPriorityRank=_displayPriorityRank - In the implementation block
@property (setter=_setPromptDialogs:,nonatomic,copy) NSArray * promptDialogs;                                               //@synthesize promptDialogs=_promptDialogs - In the implementation block
@property (setter=_setUnsupportedReasons:,nonatomic,copy) NSArray * unsupportedReasons;                                     //@synthesize unsupportedReasons=_unsupportedReasons - In the implementation block
@property (setter=_setTypeString:,nonatomic,copy) NSString * _typeString;                                                   //@synthesize typeString=_typeString - In the implementation block
@property (assign,setter=_setCodableDescription:,nonatomic,__weak) INCodableDescription * _codableDescription;              //@synthesize internalCodableDescription=_internalCodableDescription - In the implementation block
@property (nonatomic,readonly) Class _unsafeObjectClass; 
@property (nonatomic,readonly) Class _relationshipValueTransformerClass;                                                    //@synthesize _relationshipValueTransformerClass=__relationshipValueTransformerClass - In the implementation block
@property (assign,nonatomic) long long modifier;                                                                            //@synthesize modifier=_modifier - In the implementation block
@property (nonatomic,copy) NSString * propertyName;                                                                         //@synthesize propertyName=_propertyName - In the implementation block
@property (nonatomic,copy) NSString * displayName;                                                                          //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,copy) NSString * displayNameID;                                                                        //@synthesize displayNameID=_displayNameID - In the implementation block
@property (assign,getter=isDefaultAttribute,nonatomic) BOOL defaultAttribute;                                               //@synthesize defaultAttribute=_defaultAttribute - In the implementation block
@property (assign,nonatomic) BOOL supportsResolution;                                                                       //@synthesize supportsResolution=_supportsResolution - In the implementation block
@property (assign,nonatomic) BOOL supportsDynamicEnumeration;                                                               //@synthesize supportsDynamicEnumeration=_supportsDynamicEnumeration - In the implementation block
@property (nonatomic,retain) INCodableAttributeMetadata * metadata;                                                         //@synthesize metadata=_metadata - In the implementation block
@property (nonatomic,retain) INCodableAttributeRelationship * relationship;                                                 //@synthesize relationship=_relationship - In the implementation block
@property (nonatomic,readonly) SEL getter; 
@property (nonatomic,readonly) SEL setter; 
@property (nonatomic,readonly) long long valueType; 
@property (nonatomic,readonly) Class objectClass; 
@property (nonatomic,readonly) Class resolutionResultClass; 
@property (nonatomic,copy) NSString * entityKeypath;                                                                        //@synthesize entityKeypath=_entityKeypath - In the implementation block
@property (nonatomic,copy,readonly) NSString * localizedDisplayName; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * cacheGroup; 
@property (nonatomic,copy,readonly) NSString * keyPrefix; 
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)_typeString;
-(long long)modifier;
-(id)dictionaryRepresentation;
-(NSString *)displayName;
-(void)setMetadata:(INCodableAttributeMetadata *)arg1 ;
-(INCodableAttributeMetadata *)metadata;
-(long long)valueType;
-(void)setDisplayName:(NSString *)arg1 ;
-(INCodableAttributeRelationship *)relationship;
-(Class)objectClass;
-(NSString *)propertyName;
-(void)setPropertyName:(NSString *)arg1 ;
-(void)setModifier:(long long)arg1 ;
-(NSString *)localizedDisplayName;
-(SEL)getter;
-(SEL)setter;
-(void)setRelationship:(INCodableAttributeRelationship *)arg1 ;
-(NSString *)cacheGroup;
-(NSString *)keyPrefix;
-(id)dictionaryKeyForKeyPath:(id)arg1 ;
-(void)updateWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentationWithLocalizer:(id)arg1 ;
-(id)descriptionAtIndent:(unsigned long long)arg1 ;
-(id)localizedDisplayNameWithLocalizer:(id)arg1 ;
-(Class)resolutionResultClass;
-(Class)_relationshipValueTransformerClass;
-(Class)_unsafeObjectClass;
-(id)unsupportedReasonWithIndex:(unsigned long long)arg1 ;
-(unsigned long long)indexForUnsupportedReason:(id)arg1 ;
-(id)promptDialogWithType:(unsigned long long)arg1 ;
-(INCodableDescription *)_codableDescription;
-(void)_setCodableDescription:(id)arg1 ;
-(void)_setTypeString:(id)arg1 ;
-(NSString *)displayNameID;
-(void)setDisplayNameID:(NSString *)arg1 ;
-(BOOL)isDefaultAttribute;
-(void)setDefaultAttribute:(BOOL)arg1 ;
-(BOOL)supportsResolution;
-(void)setSupportsResolution:(BOOL)arg1 ;
-(BOOL)supportsDynamicEnumeration;
-(void)setSupportsDynamicEnumeration:(BOOL)arg1 ;
-(NSArray *)promptDialogs;
-(void)_setPromptDialogs:(id)arg1 ;
-(NSArray *)unsupportedReasons;
-(void)_setUnsupportedReasons:(id)arg1 ;
-(NSString *)entityKeypath;
-(void)setEntityKeypath:(NSString *)arg1 ;
-(NSNumber *)displayPriorityRank;
-(void)setDisplayPriorityRank:(NSNumber *)arg1 ;
@end

