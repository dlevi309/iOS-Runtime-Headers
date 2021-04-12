/*
* Generated on Monday, March 1, 2021 at 2:33:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setValues:(NSMutableArray *)arg1 ;
-(NSMutableArray *)values;
-(id)dictionaryRepresentation;
-(CKDPListPosition *)position;
-(void)writeTo:(id)arg1 ;
-(id)valueAtIndex:(unsigned long long)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)addValue:(id)arg1 ;
-(void)setPosition:(CKDPListPosition *)arg1 ;
-(unsigned long long)valuesCount;
-(void)clearValues;
-(BOOL)hasPosition;
-(void)setInsertAfter:(BOOL)arg1 ;
-(void)setHasInsertAfter:(BOOL)arg1 ;
-(BOOL)hasInsertAfter;
-(BOOL)insertAfter;
@end

