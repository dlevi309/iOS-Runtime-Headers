/*
* Generated on Thursday, January 14, 2021 at 2:28:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
*/

#import <NanoPassKit/NanoPassKit-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface NPKProtoStandalonePaymentSetupField : PBCodable <NSCopying> {

	NSString* _currentValue;
	int _fieldType;
	NSString* _identifier;

}

@property (nonatomic,retain) NSString * identifier;                //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic) int fieldType;                        //@synthesize fieldType=_fieldType - In the implementation block
@property (nonatomic,readonly) BOOL hasCurrentValue; 
@property (nonatomic,retain) NSString * currentValue;              //@synthesize currentValue=_currentValue - In the implementation block
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(int)fieldType;
-(unsigned long long)hash;
-(NSString *)currentValue;
-(BOOL)readFrom:(id)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)identifier;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setCurrentValue:(NSString *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setFieldType:(int)arg1 ;
-(id)fieldTypeAsString:(int)arg1 ;
-(int)StringAsFieldType:(id)arg1 ;
-(BOOL)hasCurrentValue;
@end

