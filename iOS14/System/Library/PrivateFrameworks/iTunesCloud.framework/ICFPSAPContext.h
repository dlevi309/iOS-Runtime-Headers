/*
* Generated on Thursday, January 14, 2021 at 2:22:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
*/


#import <iTunesCloud/iTunesCloud-Structs.h>
@interface ICFPSAPContext : NSObject {

	FPSAPContextOpaque_Ref _fairPlaySAPContext;
	FairPlayHWInfo_ _hardwareInfo;

}
-(BOOL)processResponseWithSignatureData:(id)arg1 data:(id)arg2 error:(id*)arg3 ;
-(BOOL)exchangeWithSAPVersion:(unsigned)arg1 data:(id)arg2 returningData:(id*)arg3 exchangeStatus:(char*)arg4 error:(id*)arg5 ;
-(BOOL)signData:(id)arg1 returningSignatureData:(id*)arg2 error:(id*)arg3 ;
-(id)initReturningError:(id*)arg1 ;
-(void)dealloc;
@end

