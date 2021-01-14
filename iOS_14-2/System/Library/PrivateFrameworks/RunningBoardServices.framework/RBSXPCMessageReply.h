/*
* Generated on Thursday, January 14, 2021 at 2:21:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RunningBoardServices.framework/RunningBoardServices
*/


@class RBSXPCCoder, RBSXPCMessageContext;

@interface RBSXPCMessageReply : NSObject {

	RBSXPCCoder* _payload;
	RBSXPCMessageContext* _context;
	BOOL _sent;

}

@property (nonatomic,readonly) id<RBSXPCEncoding><RBSXPCDecoding> payload;              //@synthesize payload=_payload - In the implementation block
@property (nonatomic,readonly) RBSXPCMessageContext * context;                          //@synthesize context=_context - In the implementation block
-(void)prepareForHandoff;
-(RBSXPCMessageContext *)context;
-(id<RBSXPCEncoding><RBSXPCDecoding>)payload;
-(void)encode:(/*^block*/id)arg1 ;
-(void)send;
@end

