/*
* Generated on Thursday, January 14, 2021 at 2:23:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)encodedClassName;
-(void)setDurationInMilliseconds:(NSNumber *)arg1 ;
-(void)setPaused:(BOOL)arg1 ;
-(NSNumber *)durationInMilliseconds;
-(void)setNowPlaying:(SALCMContent *)arg1 ;
-(SALCMContent *)nowPlaying;
-(BOOL)paused;
-(BOOL)commercialPlaying;
-(void)setCommercialPlaying:(BOOL)arg1 ;
-(NSString *)nowPlayingAppId;
-(void)setNowPlayingAppId:(NSString *)arg1 ;
-(NSNumber *)playbackPositionInMilliseconds;
-(NSArray *)viewingHistory;
-(void)setPlaybackPositionInMilliseconds:(NSNumber *)arg1 ;
-(void)setViewingHistory:(NSArray *)arg1 ;
@end

