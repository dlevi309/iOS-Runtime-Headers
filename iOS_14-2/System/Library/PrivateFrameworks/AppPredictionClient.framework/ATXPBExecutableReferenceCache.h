/*
* Generated on Thursday, January 14, 2021 at 2:24:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionClient.framework/AppPredictionClient
*/

#import <AppPredictionClient/AppPredictionClient-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface ATXPBExecutableReferenceCache : PBCodable <NSCopying> {

	NSMutableArray* _keys;

}

@property (nonatomic,retain) NSMutableArray * keys;              //@synthesize keys=_keys - In the implementation block
+(Class)keysType;
-(id)dictionaryRepresentation;
-(NSMutableArray *)keys;
-(void)mergeFrom:(id)arg1 ;
-(void)setKeys:(NSMutableArray *)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(unsigned long long)keysCount;
-(void)clearKeys;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)addKeys:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)keysAtIndex:(unsigned long long)arg1 ;
@end

