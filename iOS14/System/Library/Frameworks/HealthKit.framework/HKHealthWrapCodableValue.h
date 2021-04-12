/*
* Generated on Thursday, January 14, 2021 at 2:21:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/

#import <HealthKit/HealthKit-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData, NSString;

@interface HKHealthWrapCodableValue : PBCodable <NSCopying> {

	long long _integer;
	NSData* _bytes;
	NSString* _string;
	int _type;
	SCD_Struct_HK27 _has;

}

@property (assign,nonatomic) BOOL hasType; 
@property (assign,nonatomic) int type;                       //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) BOOL hasBytes; 
@property (nonatomic,retain) NSData * bytes;                 //@synthesize bytes=_bytes - In the implementation block
@property (nonatomic,readonly) BOOL hasString; 
@property (nonatomic,retain) NSString * string;              //@synthesize string=_string - In the implementation block
@property (assign,nonatomic) BOOL hasInteger; 
@property (assign,nonatomic) long long integer;              //@synthesize integer=_integer - In the implementation block
-(id)dictionaryRepresentation;
-(id)typeAsString:(int)arg1 ;
-(void)setHasType:(BOOL)arg1 ;
-(int)StringAsType:(id)arg1 ;
-(long long)integer;
-(NSData *)bytes;
-(BOOL)hasType;
-(BOOL)hasString;
-(void)mergeFrom:(id)arg1 ;
-(void)setInteger:(long long)arg1 ;
-(void)setType:(int)arg1 ;
-(id)description;
-(void)setHasInteger:(BOOL)arg1 ;
-(BOOL)hasInteger;
-(BOOL)hasBytes;
-(int)type;
-(void)setBytes:(NSData *)arg1 ;
-(unsigned long long)hash;
-(NSString *)string;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setString:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

