/*
* Generated on Monday, March 1, 2021 at 2:32:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)groupIdentifier;
-(long long)seasonNumber;
-(long long)episodeNumber;
-(void)setEpisodeNumber:(long long)arg1 ;
-(void)setSeasonNumber:(long long)arg1 ;
-(id)encodedClassName;
-(long long)showEpisodesCount;
-(void)setShowEpisodesCount:(long long)arg1 ;
-(NSString *)showName;
-(void)setShowName:(NSString *)arg1 ;
@end

