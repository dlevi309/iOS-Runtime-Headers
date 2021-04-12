/*
* Generated on Monday, March 1, 2021 at 2:34:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NSMutableArray *)keyValuePairs;
-(void)setKeyValuePairs:(NSMutableArray *)arg1 ;
-(void)addKeyValuePairs:(id)arg1 ;
-(unsigned long long)keyValuePairsCount;
-(void)clearKeyValuePairs;
-(id)keyValuePairsAtIndex:(unsigned long long)arg1 ;
@end

