/*
* Generated on Monday, March 1, 2021 at 2:34:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)hasIdentifier;
-(HDCodableInspectableValueCollection *)valueRange;
-(void)setValueRange:(HDCodableInspectableValueCollection *)arg1 ;
-(BOOL)hasValueRange;
@end

