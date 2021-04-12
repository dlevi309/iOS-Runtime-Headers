/*
* Generated on Monday, March 1, 2021 at 2:32:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
*/


#import <iTunesCloud/iTunesCloud-Structs.h>
@interface ICFPSAPContext : NSObject {

	FPSAPContextOpaque_Ref _fairPlaySAPContext;
	FairPlayHWInfo_ _hardwareInfo;

}
-(void)dealloc;
-(BOOL)signData:(id)arg1 returningSignatureData:(id*)arg2 error:(id*)arg3 ;
-(id)initReturningError:(id*)arg1 ;
-(BOOL)exchangeWithSAPVersion:(unsigned)arg1 data:(id)arg2 returningData:(id*)arg3 exchangeStatus:(char*)arg4 error:(id*)arg5 ;
-(BOOL)processResponseWithSignatureData:(id)arg1 data:(id)arg2 error:(id*)arg3 ;
@end

