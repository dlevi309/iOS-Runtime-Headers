/*
* Generated on Thursday, January 14, 2021 at 2:26:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/

#import <WorkflowKit/WorkflowKit-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSMutableArray;

@interface WFPBRepeatedKeyValuePair : PBCodable <NSCopying> {

	NSString* _key;
	NSMutableArray* _values;

}

@property (nonatomic,retain) NSString * key;                       //@synthesize key=_key - In the implementation block
@property (nonatomic,retain) NSMutableArray * values;              //@synthesize values=_values - In the implementation block
+(Class)valueType;
-(id)dictionaryRepresentation;
-(void)clearValues;
-(void)addValue:(id)arg1 ;
-(unsigned long long)valuesCount;
-(id)valueAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)values;
-(void)mergeFrom:(id)arg1 ;
-(void)setValues:(NSMutableArray *)arg1 ;
-(id)description;
-(NSString *)key;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setKey:(NSString *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

