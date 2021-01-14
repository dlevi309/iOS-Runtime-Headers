/*
* Generated on Thursday, January 14, 2021 at 2:26:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TrustedPeers.framework/TrustedPeers
*/

#import <TrustedPeers/TrustedPeers-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface TPPBPolicyModelToCategory : PBCodable <NSCopying> {

	NSString* _category;
	NSString* _prefix;

}

@property (nonatomic,readonly) BOOL hasPrefix; 
@property (nonatomic,retain) NSString * prefix;                //@synthesize prefix=_prefix - In the implementation block
@property (nonatomic,readonly) BOOL hasCategory; 
@property (nonatomic,retain) NSString * category;              //@synthesize category=_category - In the implementation block
-(id)dictionaryRepresentation;
-(NSString *)prefix;
-(void)setCategory:(NSString *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(NSString *)category;
-(id)description;
-(BOOL)hasCategory;
-(void)setPrefix:(NSString *)arg1 ;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)hasPrefix;
-(BOOL)isEqual:(id)arg1 ;
@end

