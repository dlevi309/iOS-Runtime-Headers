/*
* Generated on Thursday, January 14, 2021 at 2:25:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, HDCodableInspectableValueCollection;

@interface HDCodableReferenceRange : PBCodable <NSCopying> {

	NSString* _identifier;
	HDCodableInspectableValueCollection* _valueRange;

}

@property (nonatomic,readonly) BOOL hasIdentifier; 
@property (nonatomic,retain) NSString * identifier;                                         //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) BOOL hasValueRange; 
@property (nonatomic,retain) HDCodableInspectableValueCollection * valueRange;              //@synthesize valueRange=_valueRange - In the implementation block
-(id)dictionaryRepresentation;
-(BOOL)hasIdentifier;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(HDCodableInspectableValueCollection *)valueRange;
-(NSString *)identifier;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setValueRange:(HDCodableInspectableValueCollection *)arg1 ;
-(BOOL)hasValueRange;
@end

