/*
* Generated on Thursday, January 14, 2021 at 2:21:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
*/


@class NSString, MRArtwork, INPlayMediaIntent;

@interface MRMediaSuggestion : NSObject {

	NSString* _bundleID;
	MRArtwork* _artwork;
	INPlayMediaIntent* _intent;

}

@property (nonatomic,retain) NSString * bundleID;                     //@synthesize bundleID=_bundleID - In the implementation block
@property (nonatomic,retain) MRArtwork * artwork;                     //@synthesize artwork=_artwork - In the implementation block
@property (nonatomic,retain) INPlayMediaIntent * intent;              //@synthesize intent=_intent - In the implementation block
@property (nonatomic,readonly) NSString * identifier; 
@property (nonatomic,readonly) NSString * title; 
@property (nonatomic,readonly) NSString * artist; 
-(INPlayMediaIntent *)intent;
-(NSString *)artist;
-(void)setBundleID:(NSString *)arg1 ;
-(void)setArtwork:(MRArtwork *)arg1 ;
-(id)_processedIntent;
-(void)_playIntent:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)_originatedFromSystemMediaApp;
-(void)_playIntent:(id)arg1 onEndpoint:(id)arg2 queue:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)playWithCompletion:(/*^block*/id)arg1 ;
-(void)_playIntentRemotelyWithAirPlay:(id)arg1 destinationDevices:(id)arg2 queue:(id)arg3 completion:(/*^block*/id)arg4 ;
-(id)_intentForQueuePlayback;
-(id)_identifierForQueuePlayback;
-(void)_playIntentRemotelyAsPlaybackQueue:(id)arg1 endpoint:(id)arg2 queue:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)_confirmIntent:(id)arg1 intentHandler:(/*^block*/id)arg2 ;
-(void)_handleIntentWithProxy:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setIntent:(INPlayMediaIntent *)arg1 ;
-(void)playOnDeviceWithUID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)playOnEndpoint:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_updateActiveEndpointAndPlayIntent:(id)arg1 endpoint:(id)arg2 queue:(id)arg3 completion:(/*^block*/id)arg4 ;
-(id)_callbackQueue;
-(id)description;
-(MRArtwork *)artwork;
-(NSString *)bundleID;
-(unsigned long long)hash;
-(NSString *)identifier;
-(id)initWithIntent:(id)arg1 ;
-(NSString *)title;
-(BOOL)isEqual:(id)arg1 ;
@end

