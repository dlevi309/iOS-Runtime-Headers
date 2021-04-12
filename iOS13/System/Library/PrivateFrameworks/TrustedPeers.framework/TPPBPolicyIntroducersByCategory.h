/*
* Generated on Monday, March 1, 2021 at 2:33:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)category;
-(void)setCategory:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)hasCategory;
-(void)clearIntroducers;
-(void)addIntroducers:(id)arg1 ;
-(unsigned long long)introducersCount;
-(id)introducersAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)introducers;
-(void)setIntroducers:(NSMutableArray *)arg1 ;
@end

