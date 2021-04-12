/*
* Generated on Monday, March 1, 2021 at 2:32:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NTPBGroupingFlags, NSString, NSMutableArray;

@interface NTPBLanguageBucket : PBCodable <NSCopying> {

	NTPBGroupingFlags* _groupingFlags;
	NSString* _key;
	NSMutableArray* _values;

}

@property (nonatomic,readonly) BOOL hasKey; 
@property (nonatomic,retain) NSString * key;                                 //@synthesize key=_key - In the implementation block
@property (nonatomic,retain) NSMutableArray * values;                        //@synthesize values=_values - In the implementation block
@property (nonatomic,readonly) BOOL hasGroupingFlags; 
@property (nonatomic,retain) NTPBGroupingFlags * groupingFlags;              //@synthesize groupingFlags=_groupingFlags - In the implementation block
+(Class)valuesType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)key;
-(void)setValues:(NSMutableArray *)arg1 ;
-(NSMutableArray *)values;
-(id)dictionaryRepresentation;
-(void)setKey:(NSString *)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(unsigned long long)valuesCount;
-(void)clearValues;
-(BOOL)hasKey;
-(id)valuesAtIndex:(unsigned long long)arg1 ;
-(void)addValues:(id)arg1 ;
-(NTPBGroupingFlags *)groupingFlags;
-(void)setGroupingFlags:(NTPBGroupingFlags *)arg1 ;
-(BOOL)hasGroupingFlags;
@end

