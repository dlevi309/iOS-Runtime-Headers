/*
* Generated on Thursday, January 14, 2021 at 2:23:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSMutableArray;

@interface NTPBTopStoriesConfig : PBCodable <NSCopying> {

	long long _badgesTimeout;
	long long _cutoffTime;
	long long _maximumArticleCount;
	NSString* _channelId;
	NSMutableArray* _styleConfigs;
	BOOL _pinningEnabled;
	BOOL _promotingEnabled;
	SCD_Struct_NT11 _has;

}

@property (assign,nonatomic) BOOL hasPinningEnabled; 
@property (assign,nonatomic) BOOL pinningEnabled;                        //@synthesize pinningEnabled=_pinningEnabled - In the implementation block
@property (assign,nonatomic) BOOL hasPromotingEnabled; 
@property (assign,nonatomic) BOOL promotingEnabled;                      //@synthesize promotingEnabled=_promotingEnabled - In the implementation block
@property (nonatomic,readonly) BOOL hasChannelId; 
@property (nonatomic,retain) NSString * channelId;                       //@synthesize channelId=_channelId - In the implementation block
@property (assign,nonatomic) BOOL hasMaximumArticleCount; 
@property (assign,nonatomic) long long maximumArticleCount;              //@synthesize maximumArticleCount=_maximumArticleCount - In the implementation block
@property (assign,nonatomic) BOOL hasCutoffTime; 
@property (assign,nonatomic) long long cutoffTime;                       //@synthesize cutoffTime=_cutoffTime - In the implementation block
@property (nonatomic,retain) NSMutableArray * styleConfigs;              //@synthesize styleConfigs=_styleConfigs - In the implementation block
@property (assign,nonatomic) BOOL hasBadgesTimeout; 
@property (assign,nonatomic) long long badgesTimeout;                    //@synthesize badgesTimeout=_badgesTimeout - In the implementation block
+(Class)styleConfigsType;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(void)addStyleConfigs:(id)arg1 ;
-(void)setPinningEnabled:(BOOL)arg1 ;
-(void)setHasPinningEnabled:(BOOL)arg1 ;
-(BOOL)hasPinningEnabled;
-(void)setPromotingEnabled:(BOOL)arg1 ;
-(void)setHasPromotingEnabled:(BOOL)arg1 ;
-(BOOL)hasPromotingEnabled;
-(void)setMaximumArticleCount:(long long)arg1 ;
-(void)setHasMaximumArticleCount:(BOOL)arg1 ;
-(BOOL)hasMaximumArticleCount;
-(void)clearStyleConfigs;
-(unsigned long long)styleConfigsCount;
-(id)styleConfigsAtIndex:(unsigned long long)arg1 ;
-(void)setBadgesTimeout:(long long)arg1 ;
-(void)setHasBadgesTimeout:(BOOL)arg1 ;
-(BOOL)hasBadgesTimeout;
-(BOOL)pinningEnabled;
-(long long)maximumArticleCount;
-(void)setStyleConfigs:(NSMutableArray *)arg1 ;
-(BOOL)hasChannelId;
-(NSMutableArray *)styleConfigs;
-(id)description;
-(long long)badgesTimeout;
-(NSString *)channelId;
-(BOOL)promotingEnabled;
-(void)setHasCutoffTime:(BOOL)arg1 ;
-(BOOL)hasCutoffTime;
-(long long)cutoffTime;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setChannelId:(NSString *)arg1 ;
-(void)setCutoffTime:(long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

