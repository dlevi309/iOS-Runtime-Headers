/*
* Generated on Monday, March 1, 2021 at 2:32:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SADomainObject.h>

@class NSNumber, SALCMContent, NSString, NSArray;

@interface SALCMViewingContext : SADomainObject

@property (assign,nonatomic) BOOL commercialPlaying; 
@property (nonatomic,copy) NSNumber * durationInMilliseconds; 
@property (nonatomic,retain) SALCMContent * nowPlaying; 
@property (nonatomic,copy) NSString * nowPlayingAppId; 
@property (assign,nonatomic) BOOL paused; 
@property (nonatomic,copy) NSNumber * playbackPositionInMilliseconds; 
@property (nonatomic,copy) NSArray * viewingHistory; 
+(id)viewingContext;
+(id)viewingContextWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(BOOL)paused;
-(void)setPaused:(BOOL)arg1 ;
-(SALCMContent *)nowPlaying;
-(void)setNowPlaying:(SALCMContent *)arg1 ;
-(id)encodedClassName;
-(void)setDurationInMilliseconds:(NSNumber *)arg1 ;
-(NSNumber *)durationInMilliseconds;
-(BOOL)commercialPlaying;
-(void)setCommercialPlaying:(BOOL)arg1 ;
-(NSString *)nowPlayingAppId;
-(void)setNowPlayingAppId:(NSString *)arg1 ;
-(NSNumber *)playbackPositionInMilliseconds;
-(void)setPlaybackPositionInMilliseconds:(NSNumber *)arg1 ;
-(NSArray *)viewingHistory;
-(void)setViewingHistory:(NSArray *)arg1 ;
@end

