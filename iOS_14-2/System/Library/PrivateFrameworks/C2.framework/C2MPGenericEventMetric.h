/*
* Generated on Thursday, January 14, 2021 at 2:24:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/C2.framework/C2
*/

#import <C2/C2-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, C2MPGenericEventMetricValue;

@interface C2MPGenericEventMetric : PBCodable <NSCopying> {

	NSString* _key;
	C2MPGenericEventMetricValue* _value;

}

@property (nonatomic,readonly) BOOL hasKey; 
@property (nonatomic,retain) NSString * key;                                   //@synthesize key=_key - In the implementation block
@property (nonatomic,readonly) BOOL hasValue; 
@property (nonatomic,retain) C2MPGenericEventMetricValue * value;              //@synthesize value=_value - In the implementation block
-(BOOL)hasKey;
-(id)dictionaryRepresentation;
-(BOOL)hasValue;
-(void)mergeFrom:(id)arg1 ;
-(void)setValue:(C2MPGenericEventMetricValue *)arg1 ;
-(id)description;
-(NSString *)key;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setKey:(NSString *)arg1 ;
-(C2MPGenericEventMetricValue *)value;
-(BOOL)isEqual:(id)arg1 ;
@end

