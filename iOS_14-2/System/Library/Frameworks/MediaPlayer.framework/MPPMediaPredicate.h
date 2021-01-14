/*
* Generated on Thursday, January 14, 2021 at 2:21:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class MPPCompoundPredicate, MPPConditionalPredicate, MPPPersistentIDsPredicate, MPPPropertyPredicate, MPPSearchStringPredicate;

@interface MPPMediaPredicate : PBCodable <NSCopying> {

	MPPCompoundPredicate* _compoundPredicate;
	MPPConditionalPredicate* _conditionalPredicate;
	MPPPersistentIDsPredicate* _persistentIDsPredicate;
	MPPPropertyPredicate* _propertyPredicate;
	MPPSearchStringPredicate* _searchStringPredicate;
	int _type;
	SCD_Struct_MP50 _has;

}

@property (assign,nonatomic) BOOL hasType; 
@property (assign,nonatomic) int type;                                                        //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) BOOL hasPropertyPredicate; 
@property (nonatomic,retain) MPPPropertyPredicate * propertyPredicate;                        //@synthesize propertyPredicate=_propertyPredicate - In the implementation block
@property (nonatomic,readonly) BOOL hasCompoundPredicate; 
@property (nonatomic,retain) MPPCompoundPredicate * compoundPredicate;                        //@synthesize compoundPredicate=_compoundPredicate - In the implementation block
@property (nonatomic,readonly) BOOL hasConditionalPredicate; 
@property (nonatomic,retain) MPPConditionalPredicate * conditionalPredicate;                  //@synthesize conditionalPredicate=_conditionalPredicate - In the implementation block
@property (nonatomic,readonly) BOOL hasPersistentIDsPredicate; 
@property (nonatomic,retain) MPPPersistentIDsPredicate * persistentIDsPredicate;              //@synthesize persistentIDsPredicate=_persistentIDsPredicate - In the implementation block
@property (nonatomic,readonly) BOOL hasSearchStringPredicate; 
@property (nonatomic,retain) MPPSearchStringPredicate * searchStringPredicate;                //@synthesize searchStringPredicate=_searchStringPredicate - In the implementation block
-(id)dictionaryRepresentation;
-(void)setHasType:(BOOL)arg1 ;
-(BOOL)hasType;
-(BOOL)hasConditionalPredicate;
-(MPPConditionalPredicate *)conditionalPredicate;
-(void)setConditionalPredicate:(MPPConditionalPredicate *)arg1 ;
-(void)setType:(int)arg1 ;
-(id)description;
-(BOOL)hasPropertyPredicate;
-(BOOL)hasCompoundPredicate;
-(BOOL)hasPersistentIDsPredicate;
-(BOOL)hasSearchStringPredicate;
-(MPPPropertyPredicate *)propertyPredicate;
-(void)setPropertyPredicate:(MPPPropertyPredicate *)arg1 ;
-(MPPCompoundPredicate *)compoundPredicate;
-(void)setCompoundPredicate:(MPPCompoundPredicate *)arg1 ;
-(MPPPersistentIDsPredicate *)persistentIDsPredicate;
-(void)setPersistentIDsPredicate:(MPPPersistentIDsPredicate *)arg1 ;
-(MPPSearchStringPredicate *)searchStringPredicate;
-(void)setSearchStringPredicate:(MPPSearchStringPredicate *)arg1 ;
-(int)type;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

