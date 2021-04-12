/*
* Generated on Monday, March 1, 2021 at 2:35:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <libobjc.A.dylib/BSInvalidatable.h>

@class SBHIDInterface, NSString;

@interface SBHIDUILockAssertion : NSObject <BSInvalidatable> {

	BOOL _suspendProximitySensor;
	BOOL _suspendMultitouch;
	BOOL _pocketTouchesExpected;
	BOOL _disableTapToWake;
	long long _source;
	SBHIDInterface* _HIDInterface;
	NSString* _reason;

}

@property (assign,nonatomic) BOOL suspendProximitySensor;                       //@synthesize suspendProximitySensor=_suspendProximitySensor - In the implementation block
@property (assign,nonatomic) BOOL suspendMultitouch;                            //@synthesize suspendMultitouch=_suspendMultitouch - In the implementation block
@property (assign,nonatomic) BOOL pocketTouchesExpected;                        //@synthesize pocketTouchesExpected=_pocketTouchesExpected - In the implementation block
@property (assign,nonatomic) BOOL disableTapToWake;                             //@synthesize disableTapToWake=_disableTapToWake - In the implementation block
@property (assign,nonatomic) long long source;                                  //@synthesize source=_source - In the implementation block
@property (assign,nonatomic,__weak) SBHIDInterface * HIDInterface;              //@synthesize HIDInterface=_HIDInterface - In the implementation block
@property (nonatomic,copy) NSString * reason;                                   //@synthesize reason=_reason - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)description;
-(void)invalidate;
-(void)setSource:(long long)arg1 ;
-(NSString *)reason;
-(long long)source;
-(void)setReason:(NSString *)arg1 ;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(BOOL)suspendMultitouch;
-(BOOL)suspendProximitySensor;
-(BOOL)pocketTouchesExpected;
-(BOOL)disableTapToWake;
-(void)setHIDInterface:(SBHIDInterface *)arg1 ;
-(void)setSuspendMultitouch:(BOOL)arg1 ;
-(void)setSuspendProximitySensor:(BOOL)arg1 ;
-(void)setDisableTapToWake:(BOOL)arg1 ;
-(void)setPocketTouchesExpected:(BOOL)arg1 ;
-(void)invalidateForSource:(long long)arg1 ;
-(SBHIDInterface *)HIDInterface;
@end

