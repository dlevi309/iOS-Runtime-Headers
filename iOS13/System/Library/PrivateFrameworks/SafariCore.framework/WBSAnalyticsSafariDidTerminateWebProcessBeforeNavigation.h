/*
* Generated on Monday, March 1, 2021 at 2:32:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SafariCore.framework/SafariCore
*/

#import <SafariCore/SafariCore-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface WBSAnalyticsSafariDidTerminateWebProcessBeforeNavigation : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	int _terminationReason;
	SCD_Struct_WB1 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasTerminationReason; 
@property (assign,nonatomic) int terminationReason;                     //@synthesize terminationReason=_terminationReason - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(int)terminationReason;
-(unsigned long long)timestamp;
-(BOOL)hasTimestamp;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setTerminationReason:(int)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(void)setHasTerminationReason:(BOOL)arg1 ;
-(BOOL)hasTerminationReason;
-(id)terminationReasonAsString:(int)arg1 ;
-(int)StringAsTerminationReason:(id)arg1 ;
@end

