/*
* Generated on Monday, March 1, 2021 at 2:31:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/


@class NSString;

@interface MPMusicKitTokenHelper : NSObject {

	NSString* _clientIdentifier;
	NSString* _clientVersion;

}

@property (nonatomic,copy) NSString * clientIdentifier;              //@synthesize clientIdentifier=_clientIdentifier - In the implementation block
@property (nonatomic,copy) NSString * clientVersion;                 //@synthesize clientVersion=_clientVersion - In the implementation block
-(void)setClientIdentifier:(NSString *)arg1 ;
-(NSString *)clientIdentifier;
-(id)clientInfo;
-(NSString *)clientVersion;
-(void)setClientVersion:(NSString *)arg1 ;
-(void)fetchDeveloperTokenWithCompletion:(/*^block*/id)arg1 ;
-(void)fetchMusicUserTokenWithDeveloperToken:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)fetchDeveloperAndMusicUserTokensWithCompletion:(/*^block*/id)arg1 ;
@end

