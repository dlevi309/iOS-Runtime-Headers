/*
* Generated on Thursday, January 14, 2021 at 2:27:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSString *)radioStationName;
-(float)playbackRate;
-(NSString *)artist;
-(BOOL)isMusicApp;
-(BOOL)isAlwaysLive;
-(NSString *)radioStationIdentifier;
-(NSDictionary *)nowPlayingInfo;
-(double)elapsedTime;
-(BOOL)isExplicitContent;
-(unsigned long long)persistentID;
-(NSString *)album;
-(double)duration;
-(NSString *)title;
-(id)initWithMediaRemoteNowPlayingInfo:(id)arg1 ;
@end

