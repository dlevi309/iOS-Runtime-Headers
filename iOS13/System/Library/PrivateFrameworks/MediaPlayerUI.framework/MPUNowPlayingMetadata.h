/*
* Generated on Monday, March 1, 2021 at 2:33:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaPlayerUI.framework/MediaPlayerUI
*/


@class NSDictionary, NSString;

@interface MPUNowPlayingMetadata : NSObject {

	NSDictionary* _nowPlayingInfo;

}

@property (nonatomic,readonly) NSDictionary * nowPlayingInfo;                              //@synthesize nowPlayingInfo=_nowPlayingInfo - In the implementation block
@property (nonatomic,readonly) NSString * title; 
@property (nonatomic,readonly) NSString * artist; 
@property (nonatomic,readonly) NSString * album; 
@property (nonatomic,readonly) NSString * radioStationName; 
@property (nonatomic,readonly) double elapsedTime; 
@property (nonatomic,readonly) double duration; 
@property (nonatomic,readonly) float playbackRate; 
@property (nonatomic,readonly) unsigned long long persistentID; 
@property (nonatomic,readonly) NSString * radioStationIdentifier; 
@property (getter=isMusicApp,nonatomic,readonly) BOOL musicApp; 
@property (getter=isAlwaysLive,nonatomic,readonly) BOOL alwaysLive; 
@property (getter=isExplicitContent,nonatomic,readonly) BOOL explicitContent; 
-(NSString *)title;
-(double)duration;
-(NSString *)album;
-(NSString *)artist;
-(unsigned long long)persistentID;
-(double)elapsedTime;
-(float)playbackRate;
-(NSDictionary *)nowPlayingInfo;
-(BOOL)isAlwaysLive;
-(BOOL)isExplicitContent;
-(NSString *)radioStationName;
-(BOOL)isMusicApp;
-(NSString *)radioStationIdentifier;
-(id)initWithMediaRemoteNowPlayingInfo:(id)arg1 ;
@end

