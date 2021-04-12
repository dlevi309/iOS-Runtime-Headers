/*
* Generated on Thursday, January 14, 2021 at 2:28:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SidecarCore.framework/SidecarCore
*/

#import <SidecarCore/SidecarCore_Interface.h>

@protocol SidecarSessionDelegate, SidecarServicePresenterDelegate;
@interface SidecarCoreProxy : NSObject <SidecarCore_Interface> {

	id<SidecarSessionDelegate> _delegate;
	id<SidecarServicePresenterDelegate> _presenterDelegate;

}

@property (nonatomic,retain) id<SidecarSessionDelegate> delegate;                                //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) id<SidecarServicePresenterDelegate> presenterDelegate;              //@synthesize presenterDelegate=_presenterDelegate - In the implementation block
+(id)defaultProxy;
-(id<SidecarSessionDelegate>)delegate;
-(void)setDelegate:(id<SidecarSessionDelegate>)arg1 ;
-(void)setPresenterDelegate:(id<SidecarServicePresenterDelegate>)arg1 ;
-(id<SidecarServicePresenterDelegate>)presenterDelegate;
-(void)relaySession:(id)arg1 openedByDevice:(id)arg2 dataLink:(long long)arg3 service:(id)arg4 ;
-(void)relaySession:(long long)arg1 receivedOPACKData:(id)arg2 dataLink:(long long)arg3 ;
-(void)relaySession:(long long)arg1 closedWithError:(id)arg2 ;
-(void)relaySession:(long long)arg1 stream:(id)arg2 status:(unsigned long long)arg3 ;
-(void)relayPresenterStartServiceExtension:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)relayPresenterServiceExtensionReady:(id)arg1 ;
-(void)relayTerminateService;
@end

