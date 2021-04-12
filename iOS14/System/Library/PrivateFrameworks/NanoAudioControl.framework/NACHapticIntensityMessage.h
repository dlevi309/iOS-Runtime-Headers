/*
* Generated on Thursday, January 14, 2021 at 2:28:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoAudioControl.framework/NanoAudioControl
*/

#import <NanoAudioControl/NanoAudioControl-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface NACHapticIntensityMessage : PBCodable <NSCopying> {

	float _intensity;
	SCD_Struct_NA2 _has;

}

@property (assign,nonatomic) BOOL hasIntensity; 
@property (assign,nonatomic) float intensity;                //@synthesize intensity=_intensity - In the implementation block
-(id)dictionaryRepresentation;
-(float)intensity;
-(void)setIntensity:(float)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setHasIntensity:(BOOL)arg1 ;
-(BOOL)hasIntensity;
@end

