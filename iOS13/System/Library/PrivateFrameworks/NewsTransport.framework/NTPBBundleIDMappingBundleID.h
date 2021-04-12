/*
* Generated on Monday, March 1, 2021 at 2:32:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(NSString *)bundleId;
-(void)setBundleId:(NSString *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(NSMutableArray *)channelTags;
-(NSMutableArray *)topicTags;
-(NSMutableArray *)sectionTags;
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
@end

