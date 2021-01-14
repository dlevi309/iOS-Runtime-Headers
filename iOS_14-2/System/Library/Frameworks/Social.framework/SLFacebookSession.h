/*
* Generated on Thursday, January 14, 2021 at 2:26:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Social.framework/Social
*/


@interface SLFacebookSession : NSObject
+(id)_remoteInterface;
+(id)sharedSession;
-(id)init;
-(void)likeURL:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)unlikeURL:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)fetchLikeStatusForURL:(id)arg1 flags:(unsigned long long)arg2 completion:(/*^block*/id)arg3 ;
-(id)tokenSecretForEntitledClientWithError:(id*)arg1 ;
-(void)testCall;
-(void)injectCompletedUploadWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)uploadPost:(id)arg1 ;
-(BOOL)uploadPost:(id)arg1 forPID:(int)arg2 ;
-(void)uploadPost:(id)arg1 suppressAlerts:(BOOL)arg2 withPostCompletion:(/*^block*/id)arg3 ;
-(void)uploadsInProgress:(/*^block*/id)arg1 ;
-(void)cancelUploadWithIdentifier:(id)arg1 ;
-(void)revokeAccessTokenForAppWithID:(id)arg1 ;
-(void)revokeAllAccessTokensForDevice;
-(BOOL)uploadProfilePicture:(id)arg1 error:(id*)arg2 ;
@end

