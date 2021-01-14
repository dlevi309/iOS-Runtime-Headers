/*
* Generated on Thursday, January 14, 2021 at 2:24:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)didReceiveResponse;
-(void)setCancelled:(BOOL)arg1 ;
-(void)setDidReceiveResponse:(BOOL)arg1 ;
-(id)responseHandler;
-(WBSSiteMetadataRequest *)request;
-(id)initWithRequest:(id)arg1 priority:(long long)arg2 responseHandler:(/*^block*/id)arg3 ;
-(void)setDelayTimer:(NSTimer *)arg1 ;
-(void)dispatchResponse:(id)arg1 ;
-(BOOL)isOneTimeRequest;
-(id)initWithOneTimeRequest:(id)arg1 priority:(long long)arg2 responseHandler:(/*^block*/id)arg3 ;
-(long long)priority;
-(void)setPriority:(long long)arg1 ;
-(BOOL)isCancelled;
-(void)dealloc;
-(NSTimer *)delayTimer;
@end

