/*
* Generated on Monday, March 1, 2021 at 2:30:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RunningBoardServices.framework/RunningBoardServices
*/


@class BSXPCCoder, RBSXPCMessageContext;

@interface RBSXPCMessageReply : NSObject {

	BSXPCCoder* _payload;
	RBSXPCMessageContext* _context;
	BOOL _sent;

}

@property (nonatomic,readonly) id<BSXPCEncoding><BSXPCDecoding> payload;              //@synthesize payload=_payload - In the implementation block
@property (nonatomic,readonly) RBSXPCMessageContext * context;                        //@synthesize context=_context - In the implementation block
-(RBSXPCMessageContext *)context;
-(id<BSXPCEncoding><BSXPCDecoding>)payload;
-(void)send;
-(id)_initWithMessage:(id)arg1 ;
-(void)prepareForHandoff;
-(void)encode:(/*^block*/id)arg1 ;
@end

