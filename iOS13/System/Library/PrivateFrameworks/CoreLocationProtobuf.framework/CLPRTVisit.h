/*
* Generated on Monday, March 1, 2021 at 2:33:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreLocationProtobuf.framework/CoreLocationProtobuf
*/

#import <CoreLocationProtobuf/CoreLocationProtobuf-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface CLPRTVisit : PBCodable <NSCopying> {

	double _entryTime;
	double _exitTime;
	SCD_Struct_CL9 _has;

}

@property (assign,nonatomic) BOOL hasEntryTime; 
@property (assign,nonatomic) double entryTime;               //@synthesize entryTime=_entryTime - In the implementation block
@property (assign,nonatomic) BOOL hasExitTime; 
@property (assign,nonatomic) double exitTime;                //@synthesize exitTime=_exitTime - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(double)entryTime;
-(double)exitTime;
-(void)setEntryTime:(double)arg1 ;
-(void)setExitTime:(double)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setHasEntryTime:(BOOL)arg1 ;
-(BOOL)hasEntryTime;
-(void)setHasExitTime:(BOOL)arg1 ;
-(BOOL)hasExitTime;
@end

