/*
* Generated on Monday, March 1, 2021 at 2:35:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NSString *)currentValue;
-(void)setCurrentValue:(NSString *)arg1 ;
-(int)fieldType;
-(void)setFieldType:(int)arg1 ;
-(id)fieldTypeAsString:(int)arg1 ;
-(int)StringAsFieldType:(id)arg1 ;
-(BOOL)hasCurrentValue;
@end

