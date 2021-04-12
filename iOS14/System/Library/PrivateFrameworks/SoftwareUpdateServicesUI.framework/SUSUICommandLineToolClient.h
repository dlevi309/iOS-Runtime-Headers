/*
* Generated on Thursday, January 14, 2021 at 2:28:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id<SUSUICommandLineToolClientDelegate>)delegate;
-(void)_noteConnectionDropped;
-(void)setDelegate:(id<SUSUICommandLineToolClientDelegate>)arg1 ;
-(id)initWithDelegate:(id)arg1 ;
-(void)setPasscodePolicy:(unsigned long long)arg1 ;
-(id)_remoteInterface;
-(id)_remoteInterfaceWithErrorHandler:(/*^block*/id)arg1 ;
-(void)_connectToServerIfNecessary;
-(void)_invalidateConnection;
-(void)invalidate;
-(void)reboot:(BOOL)arg1 ;
-(void)dealloc;
-(void)showMiniAlert:(unsigned long long)arg1 usingFakeData:(BOOL)arg2 errorCode:(id)arg3 ;
-(void)showFollowUp:(unsigned long long)arg1 ;
-(void)showAuthenticationUIWithOptions:(unsigned long long)arg1 result:(/*^block*/id)arg2 ;
-(void)showEmergencyCallUIWithOptions:(unsigned long long)arg1 result:(/*^block*/id)arg2 ;
-(void)toggleSettingsBadge:(BOOL)arg1 ;
-(void)simulateComingFromOTAUpdate;
-(void)downloadDidFinish;
-(void)_noteServerExiting;
@end

