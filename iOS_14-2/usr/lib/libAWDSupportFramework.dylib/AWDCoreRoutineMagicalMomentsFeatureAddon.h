/*
* Generated on Thursday, January 14, 2021 at 2:28:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface AWDCoreRoutineMagicalMomentsFeatureAddon : PBCodable <NSCopying> {

	NSString* _name;
	int _value;
	SCD_Struct_AW5 _has;

}

@property (nonatomic,readonly) BOOL hasName; 
@property (nonatomic,retain) NSString * name;              //@synthesize name=_name - In the implementation block
@property (assign,nonatomic) BOOL hasValue; 
@property (assign,nonatomic) int value;                    //@synthesize value=_value - In the implementation block
-(id)dictionaryRepresentation;
-(BOOL)hasName;
-(BOOL)hasValue;
-(void)mergeFrom:(id)arg1 ;
-(NSString *)name;
-(void)setValue:(int)arg1 ;
-(id)description;
-(void)setHasValue:(BOOL)arg1 ;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)value;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

