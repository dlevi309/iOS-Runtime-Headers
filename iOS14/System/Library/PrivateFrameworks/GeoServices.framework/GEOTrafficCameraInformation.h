/*
* Generated on Thursday, January 14, 2021 at 2:21:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface GEOTrafficCameraInformation : PBCodable <NSCopying> {

	NSString* _cameraIdentifier;
	int _cameraType;
	SCD_Struct_GE127 _flags;

}

@property (nonatomic,readonly) BOOL hasCameraIdentifier; 
@property (nonatomic,retain) NSString * cameraIdentifier; 
@property (assign,nonatomic) BOOL hasCameraType; 
@property (assign,nonatomic) int cameraType; 
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)readAll:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(int)cameraType;
-(id)description;
-(unsigned long long)hash;
-(NSString *)cameraIdentifier;
-(void)setCameraIdentifier:(NSString *)arg1 ;
-(void)setCameraType:(int)arg1 ;
-(BOOL)hasCameraIdentifier;
-(void)setHasCameraType:(BOOL)arg1 ;
-(BOOL)hasCameraType;
-(id)cameraTypeAsString:(int)arg1 ;
-(int)StringAsCameraType:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

