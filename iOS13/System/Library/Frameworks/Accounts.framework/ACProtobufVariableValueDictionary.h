/*
* Generated on Monday, March 1, 2021 at 2:30:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSDictionary *)dictionary;
-(id)initWithDictionary:(id)arg1 ;
-(void)setDictionary:(NSDictionary *)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NSMutableArray *)pairs;
-(void)setPairs:(NSMutableArray *)arg1 ;
-(unsigned long long)pairsCount;
-(void)addPair:(id)arg1 ;
-(void)clearPairs;
-(id)pairAtIndex:(unsigned long long)arg1 ;
@end

