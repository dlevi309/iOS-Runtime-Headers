/*
* Generated on Thursday, January 14, 2021 at 2:23:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SAMPMediaItem.h>

@class NSString;

@interface SAMPEpisode : SAMPMediaItem

@property (assign,nonatomic) long long episodeNumber; 
@property (assign,nonatomic) long long seasonNumber; 
@property (assign,nonatomic) long long showEpisodesCount; 
@property (nonatomic,copy) NSString * showName; 
+(id)episode;
+(id)episodeWithDictionary:(id)arg1 context:(id)arg2 ;
-(long long)episodeNumber;
-(void)setEpisodeNumber:(long long)arg1 ;
-(long long)seasonNumber;
-(void)setSeasonNumber:(long long)arg1 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(long long)showEpisodesCount;
-(void)setShowEpisodesCount:(long long)arg1 ;
-(void)setShowName:(NSString *)arg1 ;
-(NSString *)showName;
@end

