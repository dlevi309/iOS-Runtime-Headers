/*
* Generated on Thursday, January 14, 2021 at 2:25:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData, NSString;

@interface AWDHomeKitValue : PBCodable <NSCopying> {

	double _doubleVal;
	long long _intVal;
	NSData* _dataVal;
	float _floatVal;
	NSString* _stringVal;
	BOOL _boolVal;
	SCD_Struct_AW8 _has;

}

@property (nonatomic,readonly) BOOL hasStringVal; 
@property (nonatomic,retain) NSString * stringVal;              //@synthesize stringVal=_stringVal - In the implementation block
@property (assign,nonatomic) BOOL hasIntVal; 
@property (assign,nonatomic) long long intVal;                  //@synthesize intVal=_intVal - In the implementation block
@property (assign,nonatomic) BOOL hasFloatVal; 
@property (assign,nonatomic) float floatVal;                    //@synthesize floatVal=_floatVal - In the implementation block
@property (assign,nonatomic) BOOL hasDoubleVal; 
@property (assign,nonatomic) double doubleVal;                  //@synthesize doubleVal=_doubleVal - In the implementation block
@property (assign,nonatomic) BOOL hasBoolVal; 
@property (assign,nonatomic) BOOL boolVal;                      //@synthesize boolVal=_boolVal - In the implementation block
@property (nonatomic,readonly) BOOL hasDataVal; 
@property (nonatomic,retain) NSData * dataVal;                  //@synthesize dataVal=_dataVal - In the implementation block
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(long long)intVal;
-(id)description;
-(unsigned long long)hash;
-(BOOL)boolVal;
-(NSData *)dataVal;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setStringVal:(NSString *)arg1 ;
-(void)setDataVal:(NSData *)arg1 ;
-(void)setIntVal:(long long)arg1 ;
-(void)setFloatVal:(float)arg1 ;
-(void)setDoubleVal:(double)arg1 ;
-(void)setBoolVal:(BOOL)arg1 ;
-(BOOL)hasStringVal;
-(void)setHasIntVal:(BOOL)arg1 ;
-(BOOL)hasIntVal;
-(void)setHasFloatVal:(BOOL)arg1 ;
-(BOOL)hasFloatVal;
-(void)setHasDoubleVal:(BOOL)arg1 ;
-(BOOL)hasDoubleVal;
-(void)setHasBoolVal:(BOOL)arg1 ;
-(BOOL)hasBoolVal;
-(BOOL)hasDataVal;
-(NSString *)stringVal;
-(float)floatVal;
-(double)doubleVal;
@end

