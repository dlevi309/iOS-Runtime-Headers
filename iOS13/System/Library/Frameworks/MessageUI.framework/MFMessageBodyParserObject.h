/*
* Generated on Monday, March 1, 2021 at 2:32:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
*/


@interface MFMessageBodyParserObject : NSObject {

	double _timeoutTime;
	BOOL _shouldAbort;
	BOOL _didTimeout;
	BOOL _copyBlocks;
	double _timeoutInterval;

}

@property (assign,nonatomic) double timeoutInterval;              //@synthesize timeoutInterval=_timeoutInterval - In the implementation block
-(void)abortParsing;
-(void)setTimeoutInterval:(double)arg1 ;
-(double)timeoutInterval;
-(BOOL)shouldProceedParsing;
-(void)copyBlocks;
-(void)messageBodyParserWillBeginParsing:(id)arg1 ;
-(BOOL)areBlocksCopied;
@end

