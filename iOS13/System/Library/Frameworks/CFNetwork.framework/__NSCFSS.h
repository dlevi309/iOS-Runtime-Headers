/*
* Generated on Monday, March 1, 2021 at 2:30:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
*/


#import <CFNetwork/CFNetwork-Structs.h>
@interface __NSCFSS : NSObject {

	/*^block*/id _capturedStreams;
	/*function pointer*/void* _trustEval;

}
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)completeWithError:(id)arg1 ;
-(id)initWithTrustChallenge:(/*function pointer*/void*)arg1 capture:(/*^block*/id)arg2 ;
-(BOOL)shouldTrust:(SecTrustRef)arg1 ;
-(void)connectionEstablished:(id)arg1 outputStream:(id)arg2 ;
@end

