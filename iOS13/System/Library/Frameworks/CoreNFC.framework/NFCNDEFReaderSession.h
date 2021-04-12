/*
* Generated on Monday, March 1, 2021 at 2:34:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreNFC.framework/CoreNFC
*/

#import <CoreNFC/NFCReaderSession.h>
#import <libobjc.A.dylib/NFReaderSessionCallbacks.h>

@class NSString;

@interface NFCNDEFReaderSession : NFCReaderSession <NFReaderSessionCallbacks> {

	BOOL _invalidateAfterFirstRead;
	unsigned long long _tagsRead;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)readingAvailable;
-(void)dealloc;
-(void)didTerminate:(id)arg1 ;
-(void)didDetectNDEFMessages:(id)arg1 fromTags:(id)arg2 updateUICallback:(/*^block*/id)arg3 ;
-(id)initWithDelegate:(id)arg1 queue:(id)arg2 invalidateAfterFirstRead:(BOOL)arg3 ;
-(id)initWithDelegate:(id)arg1 sessionDelegateType:(long long)arg2 queue:(id)arg3 pollMethod:(unsigned long long)arg4 sessionConfig:(unsigned long long)arg5 ;
-(void)restartPolling;
-(id)initWithDelegate:(id)arg1 queue:(id)arg2 pollMethod:(unsigned long long)arg3 ;
-(void)connectToTag:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_callbackDidInvalidateWithError:(id)arg1 ;
-(void)_callbackDidBecomeActive;
@end

