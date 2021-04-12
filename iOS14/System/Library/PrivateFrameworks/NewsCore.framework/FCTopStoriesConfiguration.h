/*
* Generated on Thursday, January 14, 2021 at 2:21:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithConfigDictionary:(id)arg1 ;
-(id)initWithPBTopStoriesConfig:(id)arg1 ;
-(BOOL)isPromotingEnabled;
-(NSString *)channelID;
-(long long)storyTypeTimeout;
-(NSDictionary *)styleConfigurations;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

