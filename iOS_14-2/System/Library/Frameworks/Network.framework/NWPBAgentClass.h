/*
* Generated on Thursday, January 14, 2021 at 2:22:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Network.framework/Network
*/

#import <Network/Network-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface NWPBAgentClass : PBCodable <NSCopying> {

	NSString* _domain;
	NSString* _type;

}

@property (nonatomic,readonly) BOOL hasDomain; 
@property (nonatomic,retain) NSString * domain;              //@synthesize domain=_domain - In the implementation block
@property (nonatomic,readonly) BOOL hasType; 
@property (nonatomic,retain) NSString * type;                //@synthesize type=_type - In the implementation block
-(id)dictionaryRepresentation;
-(BOOL)hasType;
-(void)mergeFrom:(id)arg1 ;
-(void)setDomain:(NSString *)arg1 ;
-(void)setType:(NSString *)arg1 ;
-(NSString *)domain;
-(id)description;
-(BOOL)hasDomain;
-(NSString *)type;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

