/*
* Generated on Thursday, January 14, 2021 at 2:26:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class CKDPListPosition, NSMutableArray;

@interface CKDPFieldActionInsertIntoList : PBCodable <NSCopying> {

	CKDPListPosition* _position;
	NSMutableArray* _values;
	BOOL _insertAfter;
	SCD_Struct_CK1 _has;

}

@property (nonatomic,readonly) BOOL hasPosition; 
@property (nonatomic,retain) CKDPListPosition * position;              //@synthesize position=_position - In the implementation block
@property (assign,nonatomic) BOOL hasInsertAfter; 
@property (assign,nonatomic) BOOL insertAfter;                         //@synthesize insertAfter=_insertAfter - In the implementation block
@property (nonatomic,retain) NSMutableArray * values;                  //@synthesize values=_values - In the implementation block
+(Class)valueType;
-(BOOL)hasPosition;
-(id)dictionaryRepresentation;
-(void)clearValues;
-(void)addValue:(id)arg1 ;
-(unsigned long long)valuesCount;
-(CKDPListPosition *)position;
-(id)valueAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)values;
-(void)mergeFrom:(id)arg1 ;
-(void)setValues:(NSMutableArray *)arg1 ;
-(id)description;
-(void)setPosition:(CKDPListPosition *)arg1 ;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setInsertAfter:(BOOL)arg1 ;
-(void)setHasInsertAfter:(BOOL)arg1 ;
-(BOOL)hasInsertAfter;
-(BOOL)insertAfter;
@end

