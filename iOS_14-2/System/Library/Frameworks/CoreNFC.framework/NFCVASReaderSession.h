/*
* Generated on Thursday, January 14, 2021 at 2:26:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreNFC.framework/CoreNFC
*/

#import <CoreNFC/NFCReaderSession.h>

@class NFTimer, NSArray;

@interface NFCVASReaderSession : NFCReaderSession {

	NFTimer* _presenceCheckTimer;
	NSArray* _vasConfig;

}
+(BOOL)readingAvailable;
-(void)beginSession;
-(void)dealloc;
-(void)didTerminate:(id)arg1 ;
-(void)didDetectTags:(id)arg1 ;
-(id)initWithDelegate:(id)arg1 sessionDelegateType:(long long)arg2 queue:(id)arg3 pollMethod:(unsigned long long)arg4 sessionConfig:(unsigned long long)arg5 ;
-(void)_callbackDidInvalidateWithError:(id)arg1 ;
-(void)_callbackDidBecomeActive;
-(BOOL)_selectOSE;
-(id)_getVASDataWithConfig:(id)arg1 lastInSequence:(BOOL)arg2 ;
-(id)initWithVASCommandConfigurations:(id)arg1 delegate:(id)arg2 queue:(id)arg3 ;
@end

