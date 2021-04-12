/*
* Generated on Monday, March 1, 2021 at 2:30:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithArray:(id)arg1 ;
-(NSArray *)array;
-(void)setValues:(NSMutableArray *)arg1 ;
-(NSMutableArray *)values;
-(NSSet *)set;
-(void)setArray:(NSArray *)arg1 ;
-(void)setSet:(NSSet *)arg1 ;
-(id)initWithSet:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(id)valueAtIndex:(unsigned long long)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)addValue:(id)arg1 ;
-(unsigned long long)valuesCount;
-(void)clearValues;
-(id)_convertArray:(id)arg1 ;
@end

