/*
* Generated on Monday, March 1, 2021 at 2:32:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
*/


@class NSError, SSVPlayActivityController, ICUserIdentityProperties, ICRadioGetTracksRequest, ICRadioGetTracksResponse;

@interface MPCModelRadioGetTracksStep : NSObject {

	NSError* _error;
	BOOL _finished;
	SSVPlayActivityController* _playActivityController;
	unsigned long long _playActivitySessionToken;
	ICUserIdentityProperties* _identityProperties;
	ICUserIdentityProperties* _delegatedIdentityProperties;
	ICRadioGetTracksRequest* _request;
	ICRadioGetTracksResponse* _response;
	ICRadioGetTracksResponse* _siriAssetInfoGetTracksResponse;
	unsigned long long _playActitySessionToken;

}

@property (nonatomic,copy,readonly) ICUserIdentityProperties * delegatedIdentityProperties;              //@synthesize delegatedIdentityProperties=_delegatedIdentityProperties - In the implementation block
@property (nonatomic,copy,readonly) NSError * error;                                                     //@synthesize error=_error - In the implementation block
@property (getter=isFinished,nonatomic,readonly) BOOL finished;                                          //@synthesize finished=_finished - In the implementation block
@property (nonatomic,copy,readonly) ICUserIdentityProperties * identityProperties;                       //@synthesize identityProperties=_identityProperties - In the implementation block
@property (nonatomic,copy,readonly) SSVPlayActivityController * playActivityController;                  //@synthesize playActivityController=_playActivityController - In the implementation block
@property (nonatomic,readonly) unsigned long long playActitySessionToken;                                //@synthesize playActitySessionToken=_playActitySessionToken - In the implementation block
@property (nonatomic,copy,readonly) ICRadioGetTracksRequest * request;                                   //@synthesize request=_request - In the implementation block
@property (nonatomic,copy,readonly) ICRadioGetTracksResponse * response;                                 //@synthesize response=_response - In the implementation block
@property (nonatomic,readonly) ICRadioGetTracksResponse * siriAssetInfoGetTracksResponse;                //@synthesize siriAssetInfoGetTracksResponse=_siriAssetInfoGetTracksResponse - In the implementation block
-(NSError *)error;
-(BOOL)isFinished;
-(ICRadioGetTracksRequest *)request;
-(ICRadioGetTracksResponse *)response;
-(void)performWithCompletionHandler:(/*^block*/id)arg1 ;
-(ICUserIdentityProperties *)identityProperties;
-(SSVPlayActivityController *)playActivityController;
-(ICUserIdentityProperties *)delegatedIdentityProperties;
-(id)initWithGetTracksRequest:(id)arg1 siriAssetInfo:(id)arg2 playActivityController:(id)arg3 ;
-(unsigned long long)playActitySessionToken;
-(id)initWithPreviousStep:(id)arg1 ;
-(void)_performDefaultHandlingForButtonAction:(id)arg1 ;
-(void)_presentServerDialog:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)nextStepWithError:(id)arg1 ;
-(void)_fireAndForgetServerDialog:(id)arg1 ;
-(ICRadioGetTracksResponse *)siriAssetInfoGetTracksResponse;
@end

