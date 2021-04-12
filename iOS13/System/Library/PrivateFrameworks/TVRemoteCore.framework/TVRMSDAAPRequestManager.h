/*
* Generated on Monday, March 1, 2021 at 2:35:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TVRemoteCore.framework/TVRemoteCore
*/


@protocol TVRMSDAAPRequestManagerDelegate;
@class NSURLSession, NSString, TVRMSFairPlaySession;

@interface TVRMSDAAPRequestManager : NSObject {

	NSURLSession* _urlSession;
	NSString* _hostName;
	NSString* _pairingGUID;
	NSString* _homeSharingGroupKey;
	long long _sessionIdentifier;
	long long _port;
	id<TVRMSDAAPRequestManagerDelegate> _delegate;
	TVRMSFairPlaySession* _fairPlaySession;

}

@property (nonatomic,copy) NSString * hostName;                                                //@synthesize hostName=_hostName - In the implementation block
@property (nonatomic,copy) NSString * pairingGUID;                                             //@synthesize pairingGUID=_pairingGUID - In the implementation block
@property (nonatomic,copy) NSString * homeSharingGroupKey;                                     //@synthesize homeSharingGroupKey=_homeSharingGroupKey - In the implementation block
@property (assign,nonatomic) long long sessionIdentifier;                                      //@synthesize sessionIdentifier=_sessionIdentifier - In the implementation block
@property (assign,nonatomic) long long port;                                                   //@synthesize port=_port - In the implementation block
@property (assign,nonatomic,__weak) id<TVRMSDAAPRequestManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) TVRMSFairPlaySession * fairPlaySession;                           //@synthesize fairPlaySession=_fairPlaySession - In the implementation block
-(id)init;
-(id<TVRMSDAAPRequestManagerDelegate>)delegate;
-(void)setDelegate:(id<TVRMSDAAPRequestManagerDelegate>)arg1 ;
-(long long)port;
-(void)setPort:(long long)arg1 ;
-(NSString *)hostName;
-(long long)sessionIdentifier;
-(void)setSessionIdentifier:(long long)arg1 ;
-(void)setHostName:(NSString *)arg1 ;
-(void)setPairingGUID:(NSString *)arg1 ;
-(NSString *)pairingGUID;
-(NSString *)homeSharingGroupKey;
-(void)setHomeSharingGroupKey:(NSString *)arg1 ;
-(void)setFairPlaySession:(TVRMSFairPlaySession *)arg1 ;
-(id)requestWithPath:(id)arg1 method:(id)arg2 postData:(id)arg3 queryArgs:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(id)requestControlCommand:(id)arg1 text:(id)arg2 promptRevision:(long long)arg3 completionHandler:(/*^block*/id)arg4 ;
-(TVRMSFairPlaySession *)fairPlaySession;
-(id)requestControlCommand:(id)arg1 text:(id)arg2 data:(id)arg3 controlValue:(long long)arg4 promptRevision:(long long)arg5 completionHandler:(/*^block*/id)arg6 ;
@end

