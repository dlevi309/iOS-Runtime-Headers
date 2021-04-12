/*
* Generated on Monday, March 1, 2021 at 2:35:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
*/

#import <NanoPassKit/NanoPassKit-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, NSString;

@interface NPKProtoDeviceDidRegisterRequest : PBRequest <NSCopying> {

	NSMutableArray* _brokerRegionPushTopics;
	NSString* _primaryRegionTopic;
	NSMutableArray* _tsmRegionPushTopics;
	NSMutableArray* _tsmRegionURLs;

}

@property (nonatomic,retain) NSMutableArray * tsmRegionPushTopics;                 //@synthesize tsmRegionPushTopics=_tsmRegionPushTopics - In the implementation block
@property (nonatomic,retain) NSMutableArray * tsmRegionURLs;                       //@synthesize tsmRegionURLs=_tsmRegionURLs - In the implementation block
@property (nonatomic,retain) NSMutableArray * brokerRegionPushTopics;              //@synthesize brokerRegionPushTopics=_brokerRegionPushTopics - In the implementation block
@property (nonatomic,readonly) BOOL hasPrimaryRegionTopic; 
@property (nonatomic,retain) NSString * primaryRegionTopic;                        //@synthesize primaryRegionTopic=_primaryRegionTopic - In the implementation block
+(Class)tsmRegionPushTopicsType;
+(Class)tsmRegionURLsType;
+(Class)brokerRegionPushTopicsType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NSString *)primaryRegionTopic;
-(void)addTsmRegionPushTopics:(id)arg1 ;
-(void)addTsmRegionURLs:(id)arg1 ;
-(void)addBrokerRegionPushTopics:(id)arg1 ;
-(unsigned long long)tsmRegionPushTopicsCount;
-(void)clearTsmRegionPushTopics;
-(id)tsmRegionPushTopicsAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)tsmRegionURLsCount;
-(void)clearTsmRegionURLs;
-(id)tsmRegionURLsAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)brokerRegionPushTopicsCount;
-(void)clearBrokerRegionPushTopics;
-(id)brokerRegionPushTopicsAtIndex:(unsigned long long)arg1 ;
-(void)setPrimaryRegionTopic:(NSString *)arg1 ;
-(BOOL)hasPrimaryRegionTopic;
-(NSMutableArray *)tsmRegionPushTopics;
-(void)setTsmRegionPushTopics:(NSMutableArray *)arg1 ;
-(NSMutableArray *)tsmRegionURLs;
-(void)setTsmRegionURLs:(NSMutableArray *)arg1 ;
-(NSMutableArray *)brokerRegionPushTopics;
-(void)setBrokerRegionPushTopics:(NSMutableArray *)arg1 ;
@end

