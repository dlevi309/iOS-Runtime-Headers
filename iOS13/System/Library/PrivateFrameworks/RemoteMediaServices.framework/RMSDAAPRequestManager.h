/*
* Generated on Monday, March 1, 2021 at 2:35:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RemoteMediaServices.framework/RemoteMediaServices
*/


@protocol RMSDAAPRequestManagerDelegate;
@class NSURLSession, NSString, RMSFairPlaySession;

@interface RMSDAAPRequestManager : NSObject {

	NSURLSession* _urlSession;
	NSString* _hostName;
	NSString* _pairingGUID;
	NSString* _homeSharingGroupKey;
	long long _sessionIdentifier;
	long long _port;
	id<RMSDAAPRequestManagerDelegate> _delegate;
	RMSFairPlaySession* _fairPlaySession;

}

@property (nonatomic,copy) NSString * hostName;                                              //@synthesize hostName=_hostName - In the implementation block
@property (nonatomic,copy) NSString * pairingGUID;                                           //@synthesize pairingGUID=_pairingGUID - In the implementation block
@property (nonatomic,copy) NSString * homeSharingGroupKey;                                   //@synthesize homeSharingGroupKey=_homeSharingGroupKey - In the implementation block
@property (assign,nonatomic) long long sessionIdentifier;                                    //@synthesize sessionIdentifier=_sessionIdentifier - In the implementation block
@property (assign,nonatomic) long long port;                                                 //@synthesize port=_port - In the implementation block
@property (assign,nonatomic,__weak) id<RMSDAAPRequestManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) RMSFairPlaySession * fairPlaySession;                           //@synthesize fairPlaySession=_fairPlaySession - In the implementation block
-(id)init;
-(id<RMSDAAPRequestManagerDelegate>)delegate;
-(void)setDelegate:(id<RMSDAAPRequestManagerDelegate>)arg1 ;
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
-(void)setFairPlaySession:(RMSFairPlaySession *)arg1 ;
-(id)requestWithPath:(id)arg1 method:(id)arg2 postData:(id)arg3 queryArgs:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(id)requestControlCommand:(id)arg1 text:(id)arg2 promptRevision:(long long)arg3 completionHandler:(/*^block*/id)arg4 ;
-(RMSFairPlaySession *)fairPlaySession;
@end

