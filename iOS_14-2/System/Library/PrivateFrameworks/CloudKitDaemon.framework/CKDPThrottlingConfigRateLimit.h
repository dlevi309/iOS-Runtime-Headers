/*
* Generated on Thursday, January 14, 2021 at 2:26:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface CKDPThrottlingConfigRateLimit : PBCodable <NSCopying> {

	int _allowedRequestCount;
	int _intervalLengthSec;
	SCD_Struct_CK4 _has;

}

@property (assign,nonatomic) BOOL hasIntervalLengthSec; 
@property (assign,nonatomic) int intervalLengthSec;                    //@synthesize intervalLengthSec=_intervalLengthSec - In the implementation block
@property (assign,nonatomic) BOOL hasAllowedRequestCount; 
@property (assign,nonatomic) int allowedRequestCount;                  //@synthesize allowedRequestCount=_allowedRequestCount - In the implementation block
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(int)allowedRequestCount;
-(void)setAllowedRequestCount:(int)arg1 ;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setIntervalLengthSec:(int)arg1 ;
-(void)setHasIntervalLengthSec:(BOOL)arg1 ;
-(BOOL)hasIntervalLengthSec;
-(void)setHasAllowedRequestCount:(BOOL)arg1 ;
-(BOOL)hasAllowedRequestCount;
-(int)intervalLengthSec;
@end

