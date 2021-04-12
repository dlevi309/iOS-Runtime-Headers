/*
* Generated on Monday, March 1, 2021 at 2:34:49 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ExchangeSync.framework/Frameworks/DAEAS.framework/DAEAS
*/

#import <DAEAS/ASTask.h>

@class NSArray, ASMailMessage;

@interface ASItemOperationsTask : ASTask {

	NSArray* _commands;
	int _numReplacedItems;
	int _bodyTruncationBytes;
	int _mimeSupport;
	ASMailMessage* _streamingMailMessage;

}
-(id)init;
-(void)finishWithError:(id)arg1 ;
-(id)commands;
-(void)setCommands:(id)arg1 ;
-(void)setMIMESupport:(int)arg1 ;
-(int)bodyType;
-(id)requestBody;
-(long long)taskStatusForExchangeStatus:(int)arg1 ;
-(int)commandCode;
-(BOOL)getTopLevelToken:(char*)arg1 outStatusCodePage:(char*)arg2 outStatusToken:(char*)arg3 ;
-(BOOL)processContext:(id)arg1 ;
-(id)replacementObjectForEmailItem:(id)arg1 ;
-(int)mimeSupport;
-(int)_mimeSupportCode;
-(BOOL)handleStreamOperation:(int)arg1 forCodePage:(int)arg2 tag:(int)arg3 withParentItem:(id)arg4 withData:(char*)arg5 dataLength:(int)arg6 ;
-(void)setBodyTruncationBytes:(int)arg1 ;
-(id)streamingMailMessage;
-(void)setStreamingMailMessage:(id)arg1 ;
@end

