/*
* Generated on Thursday, January 14, 2021 at 2:22:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
*/

#import <HomeKit/HomeKit-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface HMPBMetadataCharacteristic : PBCodable <NSCopying> {

	NSString* _desc;
	NSString* _type;

}

@property (nonatomic,readonly) BOOL hasType; 
@property (nonatomic,retain) NSString * type;              //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) BOOL hasDesc; 
@property (nonatomic,retain) NSString * desc;              //@synthesize desc=_desc - In the implementation block
-(id)dictionaryRepresentation;
-(void)setDesc:(NSString *)arg1 ;
-(NSString *)desc;
-(BOOL)hasType;
-(void)mergeFrom:(id)arg1 ;
-(void)setType:(NSString *)arg1 ;
-(id)description;
-(NSString *)type;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)hasDesc;
@end

