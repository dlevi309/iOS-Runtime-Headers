/*
* Generated on Thursday, January 14, 2021 at 2:25:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface HDCodableCodedValueCollection : PBCodable <NSCopying> {

	NSMutableArray* _codedValues;

}

@property (nonatomic,retain) NSMutableArray * codedValues;              //@synthesize codedValues=_codedValues - In the implementation block
+(Class)codedValuesType;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(NSMutableArray *)codedValues;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setCodedValues:(NSMutableArray *)arg1 ;
-(void)addCodedValues:(id)arg1 ;
-(unsigned long long)codedValuesCount;
-(void)clearCodedValues;
-(id)codedValuesAtIndex:(unsigned long long)arg1 ;
@end

