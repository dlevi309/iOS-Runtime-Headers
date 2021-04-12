/*
* Generated on Thursday, January 14, 2021 at 2:27:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DAAPKit.framework/DAAPKit
*/


@protocol DKDAAPParserDelegate;
@class NSInputStream, NSMutableArray;

@interface DKDAAPParser : NSObject {

	BOOL _canceled;
	id<DKDAAPParserDelegate> _delegate;
	long long _state;
	NSInputStream* _inputStream;
	NSMutableArray* _containerStack;

}

@property (nonatomic,readonly) NSInputStream * inputStream;                         //@synthesize inputStream=_inputStream - In the implementation block
@property (nonatomic,readonly) NSMutableArray * containerStack;                     //@synthesize containerStack=_containerStack - In the implementation block
@property (assign,getter=isCanceled,nonatomic) BOOL canceled;                       //@synthesize canceled=_canceled - In the implementation block
@property (assign,nonatomic,__weak) id<DKDAAPParserDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) long long state;                                     //@synthesize state=_state - In the implementation block
-(void)parse;
-(void)setCanceled:(BOOL)arg1 ;
-(id)initWithStream:(id)arg1 ;
-(BOOL)isCanceled;
-(id<DKDAAPParserDelegate>)delegate;
-(NSMutableArray *)containerStack;
-(id)initWithData:(id)arg1 ;
-(void)setDelegate:(id<DKDAAPParserDelegate>)arg1 ;
-(NSInputStream *)inputStream;
-(long long)state;
-(void)cancel;
-(void)_callDelegateDidStart;
-(void)_callDelegateDidCancel;
-(void)_callDelegateDidFailWithError:(id)arg1 ;
-(void)_verifyExpectedEOF;
-(BOOL)_callDelegateShouldParseCode:(unsigned)arg1 ;
-(BOOL)_callDelegateShouldParseCodeAsContainer:(unsigned)arg1 ;
-(void)_callDelegateDidStartContainerCode:(unsigned)arg1 contentLength:(unsigned)arg2 ;
-(void)_callDelegateDidParseDataCode:(unsigned)arg1 bytes:(char*)arg2 contentLength:(unsigned)arg3 ;
-(void)_callDelegateDidEndContainerCode:(unsigned)arg1 ;
-(void)_callDelegateDidFinish;
@end

