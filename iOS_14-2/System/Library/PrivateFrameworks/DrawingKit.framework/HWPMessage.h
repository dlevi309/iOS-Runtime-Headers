/*
* Generated on Thursday, January 14, 2021 at 2:27:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DrawingKit.framework/DrawingKit
*/

#import <DrawingKit/DrawingKit-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, NSData, NSString;

@interface HWPMessage : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	long long _creationDate;
	NSData* _drawing;
	NSString* _identifier;
	unsigned _version;
	SCD_Struct_HW18 _has;

}

@property (assign,nonatomic) BOOL hasVersion; 
@property (assign,nonatomic) unsigned version;                               //@synthesize version=_version - In the implementation block
@property (assign,nonatomic) BOOL hasCreationDate; 
@property (assign,nonatomic) long long creationDate;                         //@synthesize creationDate=_creationDate - In the implementation block
@property (nonatomic,readonly) BOOL hasIdentifier; 
@property (nonatomic,retain) NSString * identifier;                          //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) BOOL hasDrawing; 
@property (nonatomic,retain) NSData * drawing;                               //@synthesize drawing=_drawing - In the implementation block
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
-(id)dictionaryRepresentation;
-(void)setHasVersion:(BOOL)arg1 ;
-(BOOL)hasVersion;
-(PBUnknownFields *)unknownFields;
-(BOOL)hasIdentifier;
-(BOOL)hasCreationDate;
-(void)setCreationDate:(long long)arg1 ;
-(void)setHasCreationDate:(BOOL)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(long long)creationDate;
-(NSData *)drawing;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)setVersion:(unsigned)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)identifier;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(unsigned)version;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setDrawing:(NSData *)arg1 ;
-(BOOL)hasDrawing;
@end

