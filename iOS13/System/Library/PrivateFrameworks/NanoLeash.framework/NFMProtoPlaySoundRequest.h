/*
* Generated on Monday, March 1, 2021 at 2:35:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoLeash.framework/NanoLeash
*/

#import <NanoLeash/NanoLeash-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface NFMProtoPlaySoundRequest : PBRequest <NSCopying> {

	double _timeStamp;
	SCD_Struct_NF1 _has;

}

@property (assign,nonatomic) BOOL hasTimeStamp; 
@property (assign,nonatomic) double timeStamp;               //@synthesize timeStamp=_timeStamp - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(double)timeStamp;
-(void)setTimeStamp:(double)arg1 ;
-(void)setHasTimeStamp:(BOOL)arg1 ;
-(BOOL)hasTimeStamp;
@end

