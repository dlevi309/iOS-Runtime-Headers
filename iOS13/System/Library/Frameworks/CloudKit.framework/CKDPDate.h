/*
* Generated on Monday, March 1, 2021 at 2:30:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
*/

#import <CloudKit/CloudKit-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface CKDPDate : PBCodable <NSCopying> {

	double _time;
	SCD_Struct_CK4 _has;

}

@property (assign,nonatomic) BOOL hasTime; 
@property (assign,nonatomic) double time;               //@synthesize time=_time - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(double)time;
-(void)writeTo:(id)arg1 ;
-(void)setTime:(double)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setHasTime:(BOOL)arg1 ;
-(BOOL)hasTime;
@end

