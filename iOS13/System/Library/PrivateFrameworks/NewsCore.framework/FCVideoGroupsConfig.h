/*
* Generated on Monday, March 1, 2021 at 2:32:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <NewsCore/NewsCore-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NTPBVideoGroupsConfig, NSDictionary;

@interface FCVideoGroupsConfig : NSObject <NSSecureCoding, NSCopying> {

	unsigned long long _moreVideosGroupSortOption;
	unsigned long long _moreVideosGroupFilterOption;
	NTPBVideoGroupsConfig* _pbVideoGroupsConfig;
	NSDictionary* _configDictionary;

}

@property (nonatomic,copy) NTPBVideoGroupsConfig * pbVideoGroupsConfig;                   //@synthesize pbVideoGroupsConfig=_pbVideoGroupsConfig - In the implementation block
@property (nonatomic,copy) NSDictionary * configDictionary;                               //@synthesize configDictionary=_configDictionary - In the implementation block
@property (nonatomic,readonly) BOOL playsMutedByDefault; 
@property (nonatomic,readonly) long long nowPlayingBarTime; 
@property (nonatomic,readonly) long long upNextBarTime; 
@property (nonatomic,readonly) long long moreFromPublisherBarTime; 
@property (nonatomic,readonly) BOOL moreFromPublisherBarEnabled; 
@property (assign,nonatomic) unsigned long long moreVideosGroupSortOption;                //@synthesize moreVideosGroupSortOption=_moreVideosGroupSortOption - In the implementation block
@property (assign,nonatomic) unsigned long long moreVideosGroupFilterOption;              //@synthesize moreVideosGroupFilterOption=_moreVideosGroupFilterOption - In the implementation block
@property (nonatomic,readonly) long long moreVideosGroupMinNumberOfVideos; 
@property (nonatomic,readonly) long long moreVideosGroupMaxNumberOfVideos; 
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithConfigDictionary:(id)arg1 ;
-(NSDictionary *)configDictionary;
-(NTPBVideoGroupsConfig *)pbVideoGroupsConfig;
-(BOOL)playsMutedByDefault;
-(long long)nowPlayingBarTime;
-(long long)upNextBarTime;
-(long long)moreFromPublisherBarTime;
-(BOOL)moreFromPublisherBarEnabled;
-(unsigned long long)moreVideosGroupSortOption;
-(unsigned long long)moreVideosGroupFilterOption;
-(long long)moreVideosGroupMinNumberOfVideos;
-(long long)moreVideosGroupMaxNumberOfVideos;
-(void)setConfigDictionary:(NSDictionary *)arg1 ;
-(void)setPbVideoGroupsConfig:(NTPBVideoGroupsConfig *)arg1 ;
-(id)initWithVideoGroupsConfig:(id)arg1 ;
-(void)setMoreVideosGroupSortOption:(unsigned long long)arg1 ;
-(void)setMoreVideosGroupFilterOption:(unsigned long long)arg1 ;
@end

