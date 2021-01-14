/*
* Generated on Thursday, January 14, 2021 at 2:25:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libAppletTranslationLibrary.dylib
*/

#import <libobjc.A.dylib/ATLDecoder.h>
#import <libobjc.A.dylib/ATLStatefulDecoder.h>

@class NSString;

@interface CopernicusDecoder : NSObject <ATLDecoder, ATLStatefulDecoder> {

	unsigned char _state;
	unsigned _transactionType;
	NSString* _endPointIdentifier;

}

@property (nonatomic,retain) NSString * endPointIdentifier;              //@synthesize endPointIdentifier=_endPointIdentifier - In the implementation block
@property (assign,nonatomic) unsigned char state;                        //@synthesize state=_state - In the implementation block
@property (assign,nonatomic) unsigned transactionType;                   //@synthesize transactionType=_transactionType - In the implementation block
+(id)getInstance;
+(BOOL)isCopernicus:(id)arg1 ;
-(id)init;
-(void)setTransactionType:(unsigned)arg1 ;
-(id)parseHCIEvent:(id)arg1 withApplet:(id)arg2 withPackage:(id)arg3 withModule:(id)arg4 withTransceiver:(id)arg5 withError:(id*)arg6 ;
-(id)GetAppletProperties:(id)arg1 withPackage:(id)arg2 withModule:(id)arg3 withTransceiver:(id)arg4 withError:(id*)arg5 ;
-(void)cleanup;
-(void)setState:(unsigned char)arg1 ;
-(unsigned char)state;
-(unsigned)transactionType;
-(id)getAppletStateAndHistory:(id)arg1 withApplet:(id)arg2 withPackage:(id)arg3 withModule:(id)arg4 withError:(id*)arg5 ;
-(id)processEndOfTransaction:(id)arg1 withApplet:(id)arg2 withPackage:(id)arg3 withModule:(id)arg4 withError:(id*)arg5 ;
-(void)setEndPointIdentifier:(NSString *)arg1 ;
-(id)handleEventInIdle:(unsigned char)arg1 eventData:(id)arg2 appletAID:(id)arg3 error:(id*)arg4 ;
-(id)handleEventInStandard:(unsigned char)arg1 eventData:(id)arg2 appletAID:(id)arg3 error:(id*)arg4 ;
-(id)handleEventInFast:(unsigned char)arg1 eventData:(id)arg2 appletAID:(id)arg3 error:(id*)arg4 ;
-(id)handleEventInDummy:(unsigned char)arg1 eventData:(id)arg2 appletAID:(id)arg3 error:(id*)arg4 ;
-(NSString *)endPointIdentifier;
-(id)handleFailureWithImmediateExit:(unsigned char)arg1 appletAID:(id)arg2 error:(id*)arg3 ;
-(id)handleFailure:(unsigned char)arg1 appletAID:(id)arg2 error:(id*)arg3 ;
-(id)handleControlFlow:(id)arg1 appletAID:(id)arg2 error:(id*)arg3 ;
@end

