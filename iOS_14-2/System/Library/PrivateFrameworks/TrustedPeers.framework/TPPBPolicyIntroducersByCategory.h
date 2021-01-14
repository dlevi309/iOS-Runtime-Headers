/*
* Generated on Thursday, January 14, 2021 at 2:26:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TrustedPeers.framework/TrustedPeers
*/

#import <TrustedPeers/TrustedPeers-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSMutableArray;

@interface TPPBPolicyIntroducersByCategory : PBCodable <NSCopying> {

	NSString* _category;
	NSMutableArray* _introducers;

}

@property (nonatomic,readonly) BOOL hasCategory; 
@property (nonatomic,retain) NSString * category;                       //@synthesize category=_category - In the implementation block
@property (nonatomic,retain) NSMutableArray * introducers;              //@synthesize introducers=_introducers - In the implementation block
+(Class)introducersType;
-(id)dictionaryRepresentation;
-(void)setCategory:(NSString *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(NSString *)category;
-(id)description;
-(BOOL)hasCategory;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)clearIntroducers;
-(void)addIntroducers:(id)arg1 ;
-(unsigned long long)introducersCount;
-(id)introducersAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)introducers;
-(void)setIntroducers:(NSMutableArray *)arg1 ;
@end

