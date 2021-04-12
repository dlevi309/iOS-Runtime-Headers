/*
* Generated on Monday, March 1, 2021 at 2:33:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libAppletTranslationLibrary.dylib
*/

#import <libobjc.A.dylib/ATLDecoder.h>
#import <libobjc.A.dylib/ATLStatefulDecoder.h>

@class NSString;

@interface CopernicusDecoder : NSObject <ATLDecoder, ATLStatefulDecoder> {

	unsigned char _state;
	NSString* _readerIdentifier;
	NSString* _endPointIdentifier;

}

@property (nonatomic,retain) NSString * readerIdentifier;                //@synthesize readerIdentifier=_readerIdentifier - In the implementation block
@property (nonatomic,retain) NSString * endPointIdentifier;              //@synthesize endPointIdentifier=_endPointIdentifier - In the implementation block
@property (assign,nonatomic) unsigned char state;                        //@synthesize state=_state - In the implementation block
+(id)getInstance;
+(BOOL)isCopernicus:(id)arg1 ;
-(id)init;
-(unsigned char)state;
-(void)setState:(unsigned char)arg1 ;
-(void)cleanup;
-(NSString *)readerIdentifier;
-(id)getAppletStateAndHistory:(id)arg1 withApplet:(id)arg2 withPackage:(id)arg3 withModule:(id)arg4 withError:(id*)arg5 ;
-(id)parseHCIEvent:(id)arg1 withApplet:(id)arg2 withPackage:(id)arg3 withModule:(id)arg4 withTransceiver:(id)arg5 withError:(id*)arg6 ;
-(id)GetAppletProperties:(id)arg1 withPackage:(id)arg2 withModule:(id)arg3 withTransceiver:(id)arg4 withError:(id*)arg5 ;
-(id)processEndOfTransaction:(id)arg1 withApplet:(id)arg2 withPackage:(id)arg3 withModule:(id)arg4 withError:(id*)arg5 ;
-(void)setEndPointIdentifier:(NSString *)arg1 ;
-(void)setReaderIdentifier:(NSString *)arg1 ;
-(id)handleEventInIdle:(unsigned char)arg1 eventData:(id)arg2 appletAID:(id)arg3 error:(id*)arg4 ;
-(id)handleEventInStandard:(unsigned char)arg1 eventData:(id)arg2 appletAID:(id)arg3 error:(id*)arg4 ;
-(id)handleEventInFast:(unsigned char)arg1 eventData:(id)arg2 appletAID:(id)arg3 error:(id*)arg4 ;
-(id)handleUserAuthRequired:(id)arg1 appletAID:(id)arg2 error:(id*)arg3 ;
-(NSString *)endPointIdentifier;
-(id)handleFailure:(unsigned char)arg1 eventData:(id)arg2 appletAID:(id)arg3 error:(id*)arg4 ;
-(id)handleControlFlow:(id)arg1 appletAID:(id)arg2 error:(id*)arg3 ;
@end

