/*
* Generated on Thursday, January 14, 2021 at 2:27:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BrookServices.framework/BrookServices
*/

#import <BrookServices/BrookServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface BRKIDSMessage : PBCodable <NSCopying> {

	double _latitude;
	double _longitude;
	double _radius;
	NSString* _identifier;
	SCD_Struct_BR1 _has;

}

@property (nonatomic,readonly) BOOL hasIdentifier; 
@property (nonatomic,retain) NSString * identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic) BOOL hasLatitude; 
@property (assign,nonatomic) double latitude;                    //@synthesize latitude=_latitude - In the implementation block
@property (assign,nonatomic) BOOL hasLongitude; 
@property (assign,nonatomic) double longitude;                   //@synthesize longitude=_longitude - In the implementation block
@property (assign,nonatomic) BOOL hasRadius; 
@property (assign,nonatomic) double radius;                      //@synthesize radius=_radius - In the implementation block
-(id)dictionaryRepresentation;
-(double)latitude;
-(void)setRadius:(double)arg1 ;
-(void)setHasLatitude:(BOOL)arg1 ;
-(BOOL)hasLatitude;
-(BOOL)hasLongitude;
-(void)setHasLongitude:(BOOL)arg1 ;
-(BOOL)hasIdentifier;
-(double)longitude;
-(void)setLongitude:(double)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasRadius;
-(void)setLatitude:(double)arg1 ;
-(double)radius;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)identifier;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setHasRadius:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

