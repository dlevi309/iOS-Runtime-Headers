/*
* Generated on Monday, March 1, 2021 at 2:32:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, NSString;

@interface NTPBURLMappingPath : PBCodable <NSCopying> {

	NSMutableArray* _channelTags;
	NSString* _path;
	NSMutableArray* _sectionTags;
	NSMutableArray* _topicTags;

}

@property (nonatomic,retain) NSString * path;                           //@synthesize path=_path - In the implementation block
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
-(NSString *)path;
-(id)dictionaryRepresentation;
-(void)setPath:(NSString *)arg1 ;
-(void)writeTo:(id)arg1 ;
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

