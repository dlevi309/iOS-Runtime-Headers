/*
* Generated on Thursday, January 14, 2021 at 2:22:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
*/

#import <HomeKit/HomeKit-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface HMPBMetadataCategory : PBCodable <NSCopying> {

	NSString* _desc;
	int _number;
	NSString* _type;
	SCD_Struct_HM1 _has;

}

@property (nonatomic,readonly) BOOL hasType; 
@property (nonatomic,retain) NSString * type;              //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) BOOL hasDesc; 
@property (nonatomic,retain) NSString * desc;              //@synthesize desc=_desc - In the implementation block
@property (assign,nonatomic) BOOL hasNumber; 
@property (assign,nonatomic) int number;                   //@synthesize number=_number - In the implementation block
-(void)setNumber:(int)arg1 ;
-(id)dictionaryRepresentation;
-(void)setDesc:(NSString *)arg1 ;
-(int)number;
-(NSString *)desc;
-(BOOL)hasType;
-(void)mergeFrom:(id)arg1 ;
-(void)setType:(NSString *)arg1 ;
-(BOOL)hasNumber;
-(id)description;
-(NSString *)type;
-(void)setHasNumber:(BOOL)arg1 ;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)hasDesc;
@end

