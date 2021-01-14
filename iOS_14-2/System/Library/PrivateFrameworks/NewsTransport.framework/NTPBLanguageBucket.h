/*
* Generated on Thursday, January 14, 2021 at 2:23:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)hasKey;
-(id)dictionaryRepresentation;
-(void)clearValues;
-(unsigned long long)valuesCount;
-(NSMutableArray *)values;
-(void)mergeFrom:(id)arg1 ;
-(void)addValues:(id)arg1 ;
-(id)valuesAtIndex:(unsigned long long)arg1 ;
-(void)setValues:(NSMutableArray *)arg1 ;
-(id)description;
-(NSString *)key;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(NTPBGroupingFlags *)groupingFlags;
-(void)setGroupingFlags:(NTPBGroupingFlags *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)hasGroupingFlags;
-(void)setKey:(NSString *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

