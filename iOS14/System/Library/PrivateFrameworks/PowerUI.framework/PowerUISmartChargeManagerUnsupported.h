/*
* Generated on Thursday, January 14, 2021 at 2:26:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PowerUI.framework/PowerUI
*/

#import <libobjc.A.dylib/NSXPCListenerDelegate.h>
#import <PowerUI/PowerUISmartChargeManaging.h>

@class NSXPCListener, NSString;

@interface PowerUISmartChargeManagerUnsupported : NSObject <NSXPCListenerDelegate, PowerUISmartChargeManaging> {

	NSXPCListener* _listener;

}

@property (nonatomic,retain) NSXPCListener * listener;              //@synthesize listener=_listener - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)manager;
-(id)init;
-(void)client:(id)arg1 setState:(unsigned long long)arg2 withHandler:(/*^block*/id)arg3 ;
-(void)fullChargeDeadlineWithHandler:(/*^block*/id)arg1 ;
-(void)powerLogStatusWithHandler:(/*^block*/id)arg1 ;
-(void)resetDevelopmentMode;
-(NSXPCListener *)listener;
-(void)isOBCSupportedWithHandler:(/*^block*/id)arg1 ;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(void)simulateCurrentOutputAsOfDate:(id)arg1 overrideAllSignals:(BOOL)arg2 withHandler:(/*^block*/id)arg3 ;
-(void)setListener:(NSXPCListener *)arg1 ;
-(void)enterDevelopmentMode;
-(void)statusWithHandler:(/*^block*/id)arg1 ;
-(void)isOBCEngagedWithHandler:(/*^block*/id)arg1 ;
-(void)isSmartChargingCurrentlyEnabledWithHandler:(/*^block*/id)arg1 ;
@end

