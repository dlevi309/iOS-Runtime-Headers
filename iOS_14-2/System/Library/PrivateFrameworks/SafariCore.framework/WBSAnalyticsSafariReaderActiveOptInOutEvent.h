/*
* Generated on Thursday, January 14, 2021 at 2:23:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SafariCore.framework/SafariCore
*/

#import <SafariCore/SafariCore-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface WBSAnalyticsSafariReaderActiveOptInOutEvent : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	int _state;
	SCD_Struct_WB1 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasState; 
@property (assign,nonatomic) int state;                                 //@synthesize state=_state - In the implementation block
-(id)dictionaryRepresentation;
-(BOOL)hasState;
-(unsigned long long)timestamp;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(void)setHasState:(BOOL)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(void)setState:(int)arg1 ;
-(unsigned long long)hash;
-(BOOL)hasTimestamp;
-(int)state;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

