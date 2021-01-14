/*
* Generated on Thursday, January 14, 2021 at 2:22:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
*/

#import <CoreSuggestions/CoreSuggestions-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface SGM2BundleIdsUsingOldEntitlement : PBCodable <NSCopying> {

	NSString* _bundleId;
	NSString* _key;

}

@property (nonatomic,readonly) BOOL hasKey; 
@property (nonatomic,retain) NSString * key;                   //@synthesize key=_key - In the implementation block
@property (nonatomic,readonly) BOOL hasBundleId; 
@property (nonatomic,retain) NSString * bundleId;              //@synthesize bundleId=_bundleId - In the implementation block
-(BOOL)hasKey;
-(id)dictionaryRepresentation;
-(void)setBundleId:(NSString *)arg1 ;
-(NSString *)bundleId;
-(BOOL)hasBundleId;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(NSString *)key;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setKey:(NSString *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

