/*
* Generated on Thursday, January 14, 2021 at 2:20:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Accounts.framework/Accounts
*/

#import <Accounts/Accounts-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, NSArray, NSSet;

@interface ACProtobufVariableValueList : PBCodable <NSCopying> {

	NSMutableArray* _values;

}

@property (nonatomic,copy) NSArray * array; 
@property (nonatomic,copy) NSSet * set; 
@property (nonatomic,retain) NSMutableArray * values;              //@synthesize values=_values - In the implementation block
+(Class)valueType;
-(id)dictionaryRepresentation;
-(void)clearValues;
-(void)addValue:(id)arg1 ;
-(unsigned long long)valuesCount;
-(id)valueAtIndex:(unsigned long long)arg1 ;
-(void)setSet:(NSSet *)arg1 ;
-(NSMutableArray *)values;
-(NSArray *)array;
-(void)mergeFrom:(id)arg1 ;
-(id)_convertArray:(id)arg1 ;
-(void)setValues:(NSMutableArray *)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(NSSet *)set;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setArray:(NSArray *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithSet:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithArray:(id)arg1 ;
@end

