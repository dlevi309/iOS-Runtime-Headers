/*
* Generated on Monday, March 1, 2021 at 2:33:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Catalyst.framework/Catalyst
*/


@protocol CATHTTPMessageParserDelegate;
#import <Catalyst/Catalyst-Structs.h>
@class NSDictionary;

@interface CATHTTPMessageParser : NSObject {

	CFHTTPMessageRef mCurrentMessage;
	NSDictionary* mCurrentHeaderFields;
	unsigned long long mCurrentBytesReceived;
	id<CATHTTPMessageParserDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<CATHTTPMessageParserDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)encodeRequestData:(id)arg1 ;
+(id)responseHeaderForContentWithLength:(unsigned long long)arg1 ;
-(BOOL)appendBytes:(const char*)arg1 length:(unsigned long long)arg2 ;
-(void)dealloc;
-(id<CATHTTPMessageParserDelegate>)delegate;
-(void)setDelegate:(id<CATHTTPMessageParserDelegate>)arg1 ;
-(void)delegateDidReceiveRequestWithURL:(id)arg1 ;
-(void)delegateDidReceiveRequestData:(id)arg1 ;
-(void)delegateDidReceiveResponseData:(id)arg1 moreComing:(BOOL)arg2 ;
@end

