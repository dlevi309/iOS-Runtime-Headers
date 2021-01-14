/*
* Generated on Thursday, January 14, 2021 at 2:28:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoLeash.framework/NanoLeash
*/

#import <NanoLeash/NanoLeash-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface NFMProtoPlaySoundAndFlashLEDRequest : PBRequest <NSCopying> {

	double _timeStamp;
	SCD_Struct_NF1 _has;

}

@property (assign,nonatomic) BOOL hasTimeStamp; 
@property (assign,nonatomic) double timeStamp;               //@synthesize timeStamp=_timeStamp - In the implementation block
-(id)dictionaryRepresentation;
-(double)timeStamp;
-(id)description;
-(void)setTimeStamp:(double)arg1 ;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setHasTimeStamp:(BOOL)arg1 ;
-(BOOL)hasTimeStamp;
@end

