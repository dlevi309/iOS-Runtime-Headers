/*
* Generated on Thursday, January 14, 2021 at 2:26:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class CKDPListRange, NSMutableArray;

@interface CKDPFieldActionReplaceListRange : PBCodable <NSCopying> {

	CKDPListRange* _range;
	NSMutableArray* _values;

}

@property (nonatomic,readonly) BOOL hasRange; 
@property (nonatomic,retain) CKDPListRange * range;                //@synthesize range=_range - In the implementation block
@property (nonatomic,retain) NSMutableArray * values;              //@synthesize values=_values - In the implementation block
+(Class)valueType;
-(id)dictionaryRepresentation;
-(void)clearValues;
-(void)addValue:(id)arg1 ;
-(unsigned long long)valuesCount;
-(void)setRange:(CKDPListRange *)arg1 ;
-(id)valueAtIndex:(unsigned long long)arg1 ;
-(CKDPListRange *)range;
-(NSMutableArray *)values;
-(void)mergeFrom:(id)arg1 ;
-(void)setValues:(NSMutableArray *)arg1 ;
-(BOOL)hasRange;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

