/*
* Generated on Thursday, January 14, 2021 at 2:20:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Accounts.framework/Accounts
*/

#import <Accounts/Accounts-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, NSDictionary;

@interface ACProtobufVariableValueDictionary : PBCodable <NSCopying> {

	NSMutableArray* _pairs;

}

@property (nonatomic,copy) NSDictionary * dictionary; 
@property (nonatomic,retain) NSMutableArray * pairs;               //@synthesize pairs=_pairs - In the implementation block
+(Class)pairType;
-(NSMutableArray *)pairs;
-(id)dictionaryRepresentation;
-(void)addPair:(id)arg1 ;
-(void)setPairs:(NSMutableArray *)arg1 ;
-(void)setDictionary:(NSDictionary *)arg1 ;
-(unsigned long long)pairsCount;
-(void)clearPairs;
-(id)pairAtIndex:(unsigned long long)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(NSDictionary *)dictionary;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

