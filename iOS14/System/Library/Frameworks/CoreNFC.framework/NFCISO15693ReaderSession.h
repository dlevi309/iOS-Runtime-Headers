/*
* Generated on Thursday, January 14, 2021 at 2:26:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreNFC.framework/CoreNFC
*/

#import <CoreNFC/NFCReaderSession.h>

@interface NFCISO15693ReaderSession : NFCReaderSession
+(BOOL)readingAvailable;
-(id)initWithDelegate:(id)arg1 queue:(id)arg2 ;
-(void)didDetectTags:(id)arg1 ;
-(id)initWithDelegate:(id)arg1 sessionDelegateType:(long long)arg2 queue:(id)arg3 pollMethod:(unsigned long long)arg4 sessionConfig:(unsigned long long)arg5 ;
-(void)restartPolling;
-(id)initWithDelegate:(id)arg1 queue:(id)arg2 pollMethod:(unsigned long long)arg3 ;
@end

