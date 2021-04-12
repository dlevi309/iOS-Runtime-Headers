/*
* Generated on Monday, March 1, 2021 at 2:35:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SafariSharedUI.framework/SafariSharedUI
*/


@class WBSSiteMetadataRequest, NSTimer;

@interface _WBSSiteMetadataToken : NSObject {

	BOOL _cancelled;
	BOOL _isOneTimeRequest;
	BOOL _didReceiveResponse;
	WBSSiteMetadataRequest* _request;
	long long _priority;
	/*^block*/id _responseHandler;
	NSTimer* _delayTimer;

}

@property (getter=isCancelled) BOOL cancelled;                                //@synthesize cancelled=_cancelled - In the implementation block
@property (nonatomic,readonly) BOOL isOneTimeRequest;                         //@synthesize isOneTimeRequest=_isOneTimeRequest - In the implementation block
@property (nonatomic,readonly) WBSSiteMetadataRequest * request;              //@synthesize request=_request - In the implementation block
@property (assign,nonatomic) long long priority;                              //@synthesize priority=_priority - In the implementation block
@property (nonatomic,copy,readonly) id responseHandler;                       //@synthesize responseHandler=_responseHandler - In the implementation block
@property (nonatomic,retain) NSTimer * delayTimer;                            //@synthesize delayTimer=_delayTimer - In the implementation block
@property (assign,nonatomic) BOOL didReceiveResponse;                         //@synthesize didReceiveResponse=_didReceiveResponse - In the implementation block
-(void)dealloc;
-(BOOL)isCancelled;
-(long long)priority;
-(void)setPriority:(long long)arg1 ;
-(WBSSiteMetadataRequest *)request;
-(id)responseHandler;
-(void)setCancelled:(BOOL)arg1 ;
-(NSTimer *)delayTimer;
-(void)setDelayTimer:(NSTimer *)arg1 ;
-(BOOL)didReceiveResponse;
-(void)setDidReceiveResponse:(BOOL)arg1 ;
-(id)initWithRequest:(id)arg1 priority:(long long)arg2 responseHandler:(/*^block*/id)arg3 ;
-(id)initWithOneTimeRequest:(id)arg1 priority:(long long)arg2 responseHandler:(/*^block*/id)arg3 ;
-(BOOL)isOneTimeRequest;
-(void)dispatchResponse:(id)arg1 ;
@end

