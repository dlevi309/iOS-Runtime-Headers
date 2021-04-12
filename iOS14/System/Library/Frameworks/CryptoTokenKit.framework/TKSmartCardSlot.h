/*
* Generated on Thursday, January 14, 2021 at 2:23:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CryptoTokenKit.framework/CryptoTokenKit
*/


@class NSXPCConnection, TKSmartCardATR, NSString, TKSmartCardSlotProxy;

@interface TKSmartCardSlot : NSObject {

	NSXPCConnection* _connection;
	long long _powerState;
	long long _shareState;
	BOOL _securePINVerificationSupported;
	BOOL _securePINChangeSupported;
	long long _state;
	TKSmartCardATR* _ATR;
	NSString* _name;
	long long _maxInputLength;
	long long _maxOutputLength;
	TKSmartCardSlotProxy* _proxy;
	long long _previousState;

}

@property (assign) long long state;                                       //@synthesize state=_state - In the implementation block
@property (retain) TKSmartCardATR * ATR;                                  //@synthesize ATR=_ATR - In the implementation block
@property (nonatomic,readonly) TKSmartCardSlotProxy * proxy;              //@synthesize proxy=_proxy - In the implementation block
@property (readonly) NSObject*<OS_dispatch_queue> queue; 
@property (assign) long long previousState;                               //@synthesize previousState=_previousState - In the implementation block
@property (assign) long long shareState;                                  //@synthesize shareState=_shareState - In the implementation block
@property (assign) long long powerState;                                  //@synthesize powerState=_powerState - In the implementation block
@property (assign) BOOL securePINVerificationSupported;                   //@synthesize securePINVerificationSupported=_securePINVerificationSupported - In the implementation block
@property (assign) BOOL securePINChangeSupported;                         //@synthesize securePINChangeSupported=_securePINChangeSupported - In the implementation block
@property (nonatomic,readonly) NSString * name;                           //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) long long maxInputLength;                  //@synthesize maxInputLength=_maxInputLength - In the implementation block
@property (nonatomic,readonly) long long maxOutputLength;                 //@synthesize maxOutputLength=_maxOutputLength - In the implementation block
-(TKSmartCardATR *)ATR;
-(long long)powerState;
-(long long)previousState;
-(TKSmartCardSlotProxy *)proxy;
-(void)setPreviousState:(long long)arg1 ;
-(void)setPowerState:(long long)arg1 ;
-(NSString *)name;
-(void)setATR:(TKSmartCardATR *)arg1 ;
-(id)description;
-(void)connectToEndpoint:(id)arg1 synchronous:(BOOL)arg2 reply:(/*^block*/id)arg3 ;
-(id)initWithEndpoint:(id)arg1 error:(id*)arg2 ;
-(long long)shareState;
-(void)setShareState:(long long)arg1 ;
-(void)getAttrib:(unsigned)arg1 reply:(/*^block*/id)arg2 ;
-(void)setAttrib:(unsigned)arg1 data:(id)arg2 reply:(/*^block*/id)arg3 ;
-(id)synchronous:(BOOL)arg1 remoteSlotWithErrorHandler:(/*^block*/id)arg2 ;
-(id)makeSmartCard;
-(void)control:(id)arg1 data:(id)arg2 expectedLength:(unsigned)arg3 reply:(/*^block*/id)arg4 ;
-(id)userInteractionForConfirmation;
-(id)userInteractionForStringEntry;
-(long long)maxInputLength;
-(long long)maxOutputLength;
-(BOOL)securePINVerificationSupported;
-(void)setSecurePINVerificationSupported:(BOOL)arg1 ;
-(BOOL)securePINChangeSupported;
-(void)setSecurePINChangeSupported:(BOOL)arg1 ;
-(void)setState:(long long)arg1 ;
-(long long)state;
-(void)invalidate;
-(id)screen;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)dealloc;
@end

