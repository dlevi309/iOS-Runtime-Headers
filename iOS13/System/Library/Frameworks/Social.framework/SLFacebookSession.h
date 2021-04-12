/*
* Generated on Monday, March 1, 2021 at 2:31:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Social.framework/Social
*/


@protocol SLFacebookRemoteSessionProtocol;
@interface SLFacebookSession : NSObject {

	id<SLFacebookRemoteSessionProtocol> _remoteSession;

}
+(id)_remoteInterface;
+(id)sharedSession;
-(id)init;
-(BOOL)uploadPost:(id)arg1 forPID:(int)arg2 ;
-(void)injectCompletedUploadWithCompletion:(/*^block*/id)arg1 ;
-(void)uploadPost:(id)arg1 suppressAlerts:(BOOL)arg2 withPostCompletion:(/*^block*/id)arg3 ;
-(void)uploadsInProgress:(/*^block*/id)arg1 ;
-(void)cancelUploadWithIdentifier:(id)arg1 ;
-(void)revokeAccessTokenForAppWithID:(id)arg1 ;
-(void)likeURL:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)unlikeURL:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)fetchLikeStatusForURL:(id)arg1 flags:(unsigned long long)arg2 completion:(/*^block*/id)arg3 ;
-(id)tokenSecretForEntitledClientWithError:(id*)arg1 ;
-(void)testCall;
-(BOOL)uploadPost:(id)arg1 ;
-(void)revokeAllAccessTokensForDevice;
-(BOOL)uploadProfilePicture:(id)arg1 error:(id*)arg2 ;
@end

