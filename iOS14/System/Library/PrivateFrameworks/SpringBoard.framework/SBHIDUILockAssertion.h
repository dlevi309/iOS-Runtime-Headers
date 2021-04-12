/*
* Generated on Thursday, January 14, 2021 at 2:25:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)succinctDescription;
-(BOOL)suspendProximitySensor;
-(void)setDisableTapToWake:(BOOL)arg1 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(void)setSource:(long long)arg1 ;
-(void)setPocketTouchesExpected:(BOOL)arg1 ;
-(NSString *)description;
-(BOOL)pocketTouchesExpected;
-(NSString *)reason;
-(void)setSuspendProximitySensor:(BOOL)arg1 ;
-(void)invalidate;
-(SBHIDInterface *)HIDInterface;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(void)setSuspendMultitouch:(BOOL)arg1 ;
-(BOOL)suspendMultitouch;
-(id)succinctDescriptionBuilder;
-(void)setReason:(NSString *)arg1 ;
-(void)invalidateForSource:(long long)arg1 ;
-(BOOL)disableTapToWake;
-(void)setHIDInterface:(SBHIDInterface *)arg1 ;
-(long long)source;
@end

