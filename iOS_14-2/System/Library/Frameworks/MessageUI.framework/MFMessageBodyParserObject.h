/*
* Generated on Thursday, January 14, 2021 at 2:23:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(double)timeoutInterval;
-(void)setTimeoutInterval:(double)arg1 ;
-(void)copyBlocks;
-(BOOL)shouldProceedParsing;
-(void)abortParsing;
-(BOOL)areBlocksCopied;
-(void)messageBodyParserWillBeginParsing:(id)arg1 ;
@end

