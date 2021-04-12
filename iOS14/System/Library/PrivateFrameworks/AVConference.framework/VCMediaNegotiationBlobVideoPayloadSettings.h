/*
* Generated on Thursday, January 14, 2021 at 2:25:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/

#import <AVConference/AVConference-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSMutableArray;

@interface VCMediaNegotiationBlobVideoPayloadSettings : PBCodable <NSCopying> {

	NSString* _featureString;
	unsigned _parameterSet;
	unsigned _payload;
	NSMutableArray* _videoRuleCollections;

}

@property (assign,nonatomic) unsigned payload;                                   //@synthesize payload=_payload - In the implementation block
@property (nonatomic,retain) NSMutableArray * videoRuleCollections;              //@synthesize videoRuleCollections=_videoRuleCollections - In the implementation block
@property (nonatomic,retain) NSString * featureString;                           //@synthesize featureString=_featureString - In the implementation block
@property (assign,nonatomic) unsigned parameterSet;                              //@synthesize parameterSet=_parameterSet - In the implementation block
+(Class)videoRuleCollectionsType;
-(id)dictionaryRepresentation;
-(void)setPayload:(unsigned)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(unsigned)payload;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(void)setVideoRuleCollections:(NSMutableArray *)arg1 ;
-(NSMutableArray *)videoRuleCollections;
-(void)setFeatureString:(NSString *)arg1 ;
-(void)addVideoRuleCollections:(id)arg1 ;
-(unsigned long long)videoRuleCollectionsCount;
-(void)clearVideoRuleCollections;
-(id)videoRuleCollectionsAtIndex:(unsigned long long)arg1 ;
-(NSString *)featureString;
-(unsigned)parameterSet;
-(void)setParameterSet:(unsigned)arg1 ;
@end

