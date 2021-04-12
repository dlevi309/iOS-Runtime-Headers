/*
* Generated on Thursday, January 14, 2021 at 2:23:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface NTPBNetworkMetrics : PBCodable <NSCopying> {

	NSMutableArray* _failures;
	NSMutableArray* _successes;

}

@property (nonatomic,retain) NSMutableArray * successes;              //@synthesize successes=_successes - In the implementation block
@property (nonatomic,retain) NSMutableArray * failures;               //@synthesize failures=_failures - In the implementation block
+(Class)failuresType;
+(Class)successesType;
-(id)dictionaryRepresentation;
-(void)setSuccesses:(NSMutableArray *)arg1 ;
-(void)setFailures:(NSMutableArray *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(NSMutableArray *)failures;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)addSuccesses:(id)arg1 ;
-(void)addFailures:(id)arg1 ;
-(void)clearSuccesses;
-(unsigned long long)successesCount;
-(id)successesAtIndex:(unsigned long long)arg1 ;
-(void)clearFailures;
-(unsigned long long)failuresCount;
-(id)failuresAtIndex:(unsigned long long)arg1 ;
-(void)writeTo:(id)arg1 ;
-(NSMutableArray *)successes;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

