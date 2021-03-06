/*
* Generated on Monday, March 1, 2021 at 2:34:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NSMutableArray *)codedValues;
-(void)setCodedValues:(NSMutableArray *)arg1 ;
-(void)addCodedValues:(id)arg1 ;
-(unsigned long long)codedValuesCount;
-(void)clearCodedValues;
-(id)codedValuesAtIndex:(unsigned long long)arg1 ;
@end

