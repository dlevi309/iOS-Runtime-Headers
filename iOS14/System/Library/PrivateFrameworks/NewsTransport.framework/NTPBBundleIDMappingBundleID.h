/*
* Generated on Thursday, January 14, 2021 at 2:23:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSMutableArray;

@interface NTPBBundleIDMappingBundleID : PBCodable <NSCopying> {

	NSString* _bundleId;
	NSMutableArray* _channelTags;
	NSMutableArray* _sectionTags;
	NSMutableArray* _topicTags;

}

@property (nonatomic,retain) NSString * bundleId;                       //@synthesize bundleId=_bundleId - In the implementation block
@property (nonatomic,retain) NSMutableArray * topicTags;                //@synthesize topicTags=_topicTags - In the implementation block
@property (nonatomic,retain) NSMutableArray * channelTags;              //@synthesize channelTags=_channelTags - In the implementation block
@property (nonatomic,retain) NSMutableArray * sectionTags;              //@synthesize sectionTags=_sectionTags - In the implementation block
+(Class)topicTagsType;
+(Class)channelTagsType;
+(Class)sectionTagsType;
-(id)dictionaryRepresentation;
-(void)setBundleId:(NSString *)arg1 ;
-(NSString *)bundleId;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(void)addTopicTags:(id)arg1 ;
-(void)addChannelTags:(id)arg1 ;
-(void)addSectionTags:(id)arg1 ;
-(void)clearTopicTags;
-(unsigned long long)topicTagsCount;
-(id)topicTagsAtIndex:(unsigned long long)arg1 ;
-(void)clearChannelTags;
-(unsigned long long)channelTagsCount;
-(id)channelTagsAtIndex:(unsigned long long)arg1 ;
-(void)clearSectionTags;
-(unsigned long long)sectionTagsCount;
-(id)sectionTagsAtIndex:(unsigned long long)arg1 ;
-(void)setTopicTags:(NSMutableArray *)arg1 ;
-(void)setChannelTags:(NSMutableArray *)arg1 ;
-(void)setSectionTags:(NSMutableArray *)arg1 ;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(NSMutableArray *)channelTags;
-(NSMutableArray *)topicTags;
-(NSMutableArray *)sectionTags;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

