/*
* Generated on Monday, March 1, 2021 at 2:32:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
	SCD_Struct_HK23 _has;

}

@property (assign,nonatomic) BOOL hasType; 
@property (assign,nonatomic) int type;                       //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) BOOL hasBytes; 
@property (nonatomic,retain) NSData * bytes;                 //@synthesize bytes=_bytes - In the implementation block
@property (nonatomic,readonly) BOOL hasString; 
@property (nonatomic,retain) NSString * string;              //@synthesize string=_string - In the implementation block
@property (assign,nonatomic) BOOL hasInteger; 
@property (assign,nonatomic) long long integer;              //@synthesize integer=_integer - In the implementation block
-(NSString *)string;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSData *)bytes;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)type;
-(void)setType:(int)arg1 ;
-(void)setString:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(id)typeAsString:(int)arg1 ;
-(int)StringAsType:(id)arg1 ;
-(void)setHasType:(BOOL)arg1 ;
-(BOOL)hasType;
-(void)setBytes:(NSData *)arg1 ;
-(BOOL)hasBytes;
-(BOOL)hasString;
-(void)setInteger:(long long)arg1 ;
-(void)setHasInteger:(BOOL)arg1 ;
-(BOOL)hasInteger;
-(long long)integer;
@end

