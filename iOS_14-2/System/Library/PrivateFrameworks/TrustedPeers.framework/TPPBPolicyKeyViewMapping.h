/*
* Generated on Thursday, January 14, 2021 at 2:26:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TrustedPeers.framework/TrustedPeers
*/

#import <TrustedPeers/TrustedPeers-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class TPPBDictionaryMatchingRule, NSString;

@interface TPPBPolicyKeyViewMapping : PBCodable <NSCopying> {

	TPPBDictionaryMatchingRule* _matchingRule;
	NSString* _view;

}

@property (nonatomic,readonly) BOOL hasMatchingRule; 
@property (nonatomic,retain) TPPBDictionaryMatchingRule * matchingRule;              //@synthesize matchingRule=_matchingRule - In the implementation block
@property (nonatomic,readonly) BOOL hasView; 
@property (nonatomic,retain) NSString * view;                                        //@synthesize view=_view - In the implementation block
+(id)TPPBPolicyKeyViewMappingWithView:(id)arg1 matchingRule:(id)arg2 ;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(void)setView:(NSString *)arg1 ;
-(id)description;
-(NSString *)view;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(BOOL)hasView;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)hasMatchingRule;
-(TPPBDictionaryMatchingRule *)matchingRule;
-(void)setMatchingRule:(TPPBDictionaryMatchingRule *)arg1 ;
@end

