/*
* Generated on Monday, March 1, 2021 at 2:33:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SoftwareUpdateServicesUI.framework/SoftwareUpdateServicesUI
*/

#import <libobjc.A.dylib/SUSUICommandLineToolClientInterface.h>

@protocol SUSUICommandLineToolClientDelegate;
@class NSXPCConnection, NSString;

@interface SUSUICommandLineToolClient : NSObject <SUSUICommandLineToolClientInterface> {

	NSXPCConnection* _serverConnection;
	id<SUSUICommandLineToolClientDelegate> _delegate;
	BOOL _connected;
	BOOL _serverIsExiting;

}

@property (assign,nonatomic,__weak) id<SUSUICommandLineToolClientDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(void)invalidate;
-(id<SUSUICommandLineToolClientDelegate>)delegate;
-(void)setDelegate:(id<SUSUICommandLineToolClientDelegate>)arg1 ;
-(id)_remoteInterface;
-(id)initWithDelegate:(id)arg1 ;
-(void)setPasscodePolicy:(unsigned long long)arg1 ;
-(void)_invalidateConnection;
-(id)_remoteInterfaceWithErrorHandler:(/*^block*/id)arg1 ;
-(void)_connectToServerIfNecessary;
-(void)_noteConnectionDropped;
-(void)showMiniAlert:(unsigned long long)arg1 usingFakeData:(BOOL)arg2 errorCode:(id)arg3 ;
-(void)showFollowUp:(unsigned long long)arg1 ;
-(void)showAuthenticationUIWithOptions:(unsigned long long)arg1 result:(/*^block*/id)arg2 ;
-(void)showEmergencyCallUIWithOptions:(unsigned long long)arg1 result:(/*^block*/id)arg2 ;
-(void)toggleSettingsBadge:(BOOL)arg1 ;
-(void)reboot:(BOOL)arg1 ;
-(void)simulateComingFromOTAUpdate;
-(void)downloadDidFinish;
-(void)_noteServerExiting;
@end

