/*
* Generated on Thursday, January 14, 2021 at 2:21:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/

#import <HealthKit/HealthKit-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface HKCodableQuantitySeries : PBCodable <NSCopying> {

	NSMutableArray* _values;

}

@property (nonatomic,retain) NSMutableArray * values;              //@synthesize values=_values - In the implementation block
+(Class)valuesType;
-(id)dictionaryRepresentation;
-(void)clearValues;
-(unsigned long long)valuesCount;
-(NSMutableArray *)values;
-(void)mergeFrom:(id)arg1 ;
-(void)addValues:(id)arg1 ;
-(id)valuesAtIndex:(unsigned long long)arg1 ;
-(void)setValues:(NSMutableArray *)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

