/*
* Generated on Monday, March 1, 2021 at 2:32:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
*/

#import <MapsSupport/MapsSupport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/GEOTransitShieldDataSource.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, PBUnknownFields;

@interface MSPTransitStorageShield : PBCodable <GEOTransitShieldDataSource, NSCopying> {

	PBUnknownFields* _unknownFields;
	long long _shieldType;
	NSString* _shieldColorString;
	NSString* _shieldText;
	SCD_Struct_MS3 _has;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) long long shieldType; 
@property (nonatomic,readonly) NSString * shieldText; 
@property (nonatomic,readonly) NSString * shieldColorString; 
@property (nonatomic,readonly) BOOL hasShieldText; 
@property (nonatomic,retain) NSString * shieldText;                          //@synthesize shieldText=_shieldText - In the implementation block
@property (assign,nonatomic) BOOL hasShieldType; 
@property (assign,nonatomic) long long shieldType;                           //@synthesize shieldType=_shieldType - In the implementation block
@property (nonatomic,readonly) BOOL hasShieldColorString; 
@property (nonatomic,retain) NSString * shieldColorString;                   //@synthesize shieldColorString=_shieldColorString - In the implementation block
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(NSString *)shieldText;
-(void)setShieldText:(NSString *)arg1 ;
-(BOOL)hasShieldText;
-(long long)shieldType;
-(NSString *)shieldColorString;
-(BOOL)hasShieldType;
-(void)setShieldType:(long long)arg1 ;
-(void)setHasShieldType:(BOOL)arg1 ;
-(id)initWithShield:(id)arg1 ;
-(void)setShieldColorString:(NSString *)arg1 ;
-(BOOL)hasShieldColorString;
@end

