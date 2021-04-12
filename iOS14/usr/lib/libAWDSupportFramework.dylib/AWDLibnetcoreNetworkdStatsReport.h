/*
* Generated on Thursday, January 14, 2021 at 2:28:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AWDLibnetcoreNetworkdStatsReport : PBCodable <NSCopying> {

	unsigned long long _fallbackConnectionCount;
	unsigned long long _totalConnectionCount;
	unsigned long long _totalSuccessfulConnectionCount;
	SCD_Struct_AW4 _has;

}

@property (assign,nonatomic) BOOL hasTotalConnectionCount; 
@property (assign,nonatomic) unsigned long long totalConnectionCount;                        //@synthesize totalConnectionCount=_totalConnectionCount - In the implementation block
@property (assign,nonatomic) BOOL hasTotalSuccessfulConnectionCount; 
@property (assign,nonatomic) unsigned long long totalSuccessfulConnectionCount;              //@synthesize totalSuccessfulConnectionCount=_totalSuccessfulConnectionCount - In the implementation block
@property (assign,nonatomic) BOOL hasFallbackConnectionCount; 
@property (assign,nonatomic) unsigned long long fallbackConnectionCount;                     //@synthesize fallbackConnectionCount=_fallbackConnectionCount - In the implementation block
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(void)setTotalConnectionCount:(unsigned long long)arg1 ;
-(void)setHasTotalConnectionCount:(BOOL)arg1 ;
-(BOOL)hasTotalConnectionCount;
-(void)setTotalSuccessfulConnectionCount:(unsigned long long)arg1 ;
-(void)setHasTotalSuccessfulConnectionCount:(BOOL)arg1 ;
-(BOOL)hasTotalSuccessfulConnectionCount;
-(void)setFallbackConnectionCount:(unsigned long long)arg1 ;
-(void)setHasFallbackConnectionCount:(BOOL)arg1 ;
-(BOOL)hasFallbackConnectionCount;
-(unsigned long long)totalConnectionCount;
-(unsigned long long)totalSuccessfulConnectionCount;
-(unsigned long long)fallbackConnectionCount;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

