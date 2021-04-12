/*
* Generated on Monday, March 1, 2021 at 2:33:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libAppletTranslationLibrary.dylib
*/

#import <libobjc.A.dylib/ATLStatefulDecoder.h>

@interface WuluDecoder : NSObject <ATLStatefulDecoder> {

	unsigned long long decoderState;
	BOOL debug;

}
+(id)getInstance;
-(id)init;
-(void)cleanup;
-(id)getState:(id)arg1 ;
-(id)getAppletStateAndHistory:(id)arg1 withApplet:(id)arg2 withPackage:(id)arg3 withModule:(id)arg4 withError:(id*)arg5 ;
-(id)getAppletStateAndHistory:(id)arg1 withError:(id*)arg2 ;
-(void)setTimer:(id)arg1 history:(id)arg2 error:(id*)arg3 ;
-(id)getHistory:(id)arg1 error:(id*)arg2 ;
-(id)adjustHistory:(id)arg1 ;
-(void)adjustState:(id)arg1 latestTransaction:(id)arg2 ;
-(void)removeEnRouteForSingleTapBusGuangdong:(id)arg1 history:(id)arg2 cityCode:(id)arg3 ;
-(void)removeDoubleMetroTapGuangdong:(id)arg1 history:(id)arg2 cityCode:(id)arg3 ;
-(void)addFakeBusTxnGuangdong:(id)arg1 history:(id)arg2 cityCode:(id)arg3 ;
-(unsigned short)convertWalletSNtoAppletSN:(id)arg1 ;
-(id)parseFile18:(id)arg1 ;
-(void)parseTransit:(id)arg1 file1E:(id)arg2 file1A:(id)arg3 into:(id)arg4 ;
-(unsigned)convertAppletSNtoWalletSN:(unsigned short)arg1 txnTypeIdentifier:(unsigned)arg2 ;
-(id)resolveTransitModality:(unsigned char)arg1 ;
-(void)parseTransitApollo:(id)arg1 file1E:(id)arg2 file1A:(id)arg3 into:(id)arg4 ;
-(void)parseTransitKepler:(id)arg1 file1E:(id)arg2 file1A:(id)arg3 into:(id)arg4 ;
-(void)parseTransitPioneer:(id)arg1 file1E:(id)arg2 file1A:(id)arg3 into:(id)arg4 ;
-(void)parseTransitGalileo:(id)arg1 file1E:(id)arg2 file1A:(id)arg3 into:(id)arg4 ;
-(id)parseStartEvent:(id)arg1 withApplet:(id)arg2 withError:(id*)arg3 ;
-(id)parseEndEvent:(id)arg1 withApplet:(id)arg2 withError:(id*)arg3 ;
-(id)parseHCIEvent:(id)arg1 withApplet:(id)arg2 withPackage:(id)arg3 withModule:(id)arg4 withTransceiver:(id)arg5 withError:(id*)arg6 ;
-(id)GetAppletProperties:(id)arg1 withPackage:(id)arg2 withModule:(id)arg3 withTransceiver:(id)arg4 withError:(id*)arg5 ;
-(id)processEndOfTransaction:(id)arg1 withApplet:(id)arg2 withPackage:(id)arg3 withModule:(id)arg4 withError:(id*)arg5 ;
@end
