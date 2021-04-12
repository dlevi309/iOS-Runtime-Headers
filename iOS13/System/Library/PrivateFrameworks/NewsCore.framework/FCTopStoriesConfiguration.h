/*
* Generated on Monday, March 1, 2021 at 2:32:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <NewsCore/NewsCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NTPBTopStoriesConfig, NSDictionary, NSString;

@interface FCTopStoriesConfiguration : NSObject <NSCopying> {

	NTPBTopStoriesConfig* _pbConfig;
	NSDictionary* _configDict;
	BOOL _promotingEnabled;
	NSString* _channelID;
	NSDictionary* _styleConfigurations;
	long long _storyTypeTimeout;

}

@property (getter=isPromotingEnabled,nonatomic,readonly) BOOL promotingEnabled;              //@synthesize promotingEnabled=_promotingEnabled - In the implementation block
@property (nonatomic,readonly) NSString * channelID;                                         //@synthesize channelID=_channelID - In the implementation block
@property (nonatomic,readonly) NSDictionary * styleConfigurations;                           //@synthesize styleConfigurations=_styleConfigurations - In the implementation block
@property (nonatomic,readonly) long long storyTypeTimeout;                                   //@synthesize storyTypeTimeout=_storyTypeTimeout - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)channelID;
-(id)initWithConfigDictionary:(id)arg1 ;
-(NSDictionary *)styleConfigurations;
-(long long)storyTypeTimeout;
-(id)initWithPBTopStoriesConfig:(id)arg1 ;
-(BOOL)isPromotingEnabled;
@end

