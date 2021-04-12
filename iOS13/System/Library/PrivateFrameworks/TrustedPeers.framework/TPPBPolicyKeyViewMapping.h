/*
* Generated on Monday, March 1, 2021 at 2:33:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NSString *)view;
-(void)setView:(NSString *)arg1 ;
-(BOOL)hasMatchingRule;
-(BOOL)hasView;
-(TPPBDictionaryMatchingRule *)matchingRule;
-(void)setMatchingRule:(TPPBDictionaryMatchingRule *)arg1 ;
@end

