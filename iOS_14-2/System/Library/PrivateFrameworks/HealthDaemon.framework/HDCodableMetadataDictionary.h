/*
* Generated on Thursday, January 14, 2021 at 2:25:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface HDCodableMetadataDictionary : PBCodable <NSCopying> {

	NSMutableArray* _keyValuePairs;

}

@property (nonatomic,retain) NSMutableArray * keyValuePairs;              //@synthesize keyValuePairs=_keyValuePairs - In the implementation block
+(Class)keyValuePairsType;
+(id)decodeMetadataFromData:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(id)keyValuePairsAtIndex:(unsigned long long)arg1 ;
-(void)addKeyValuePairs:(id)arg1 ;
-(id)description;
-(void)clearKeyValuePairs;
-(NSMutableArray *)keyValuePairs;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(unsigned long long)keyValuePairsCount;
-(void)setKeyValuePairs:(NSMutableArray *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

