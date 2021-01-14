/*
* Generated on Thursday, January 14, 2021 at 2:24:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RTTUtilities.framework/RTTUtilities
*/

#import <libobjc.A.dylib/AVCVirtualTTYDeviceDelegate.h>

@protocol OS_dispatch_queue, RTTCallDelegate;
@class NSObject, NSMutableString, AXDispatchTimer, RTTConversation, TUCall, AVCVirtualTTYDevice, NSDictionary, NSString;

@interface RTTCall : NSObject <AVCVirtualTTYDeviceDelegate> {

	long long _ttyMode;
	NSObject*<OS_dispatch_queue> _callQueue;
	NSMutableString* _garbageCollection;
	AXDispatchTimer* _garbageCharacterStripperTimer;
	BOOL _isViewControllerVisible;
	id<RTTCallDelegate> _delegate;
	RTTConversation* _conversation;
	TUCall* _call;
	AVCVirtualTTYDevice* _ttyDevice;
	NSDictionary* _substitutions;

}

@property (nonatomic,retain) AVCVirtualTTYDevice * ttyDevice;                       //@synthesize ttyDevice=_ttyDevice - In the implementation block
@property (nonatomic,retain) RTTConversation * conversation;                        //@synthesize conversation=_conversation - In the implementation block
@property (nonatomic,retain) TUCall * call;                                         //@synthesize call=_call - In the implementation block
@property (nonatomic,retain) NSDictionary * substitutions;                          //@synthesize substitutions=_substitutions - In the implementation block
@property (assign,nonatomic,__weak) id<RTTCallDelegate> delegate;                   //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> callQueue;              //@synthesize callQueue=_callQueue - In the implementation block
@property (assign,nonatomic) BOOL isViewControllerVisible;                          //@synthesize isViewControllerVisible=_isViewControllerVisible - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(TUCall *)call;
-(id<RTTCallDelegate>)delegate;
-(void)start;
-(void)setConversation:(RTTConversation *)arg1 ;
-(void)stop;
-(void)mediaServerDied;
-(void)setDelegate:(id<RTTCallDelegate>)arg1 ;
-(RTTConversation *)conversation;
-(NSString *)description;
-(NSDictionary *)substitutions;
-(void)setSubstitutions:(NSDictionary *)arg1 ;
-(void)registerNotifications;
-(id)initWithCall:(id)arg1 ;
-(void)setCall:(TUCall *)arg1 ;
-(void)dealloc;
-(BOOL)isLocallyHosted;
-(BOOL)isViewControllerVisible;
-(void)setIsViewControllerVisible:(BOOL)arg1 ;
-(void)toggleSystemOutputMute:(BOOL)arg1 ;
-(void)sendString:(id)arg1 ;
-(void)recreateTTYDevice:(id)arg1 ;
-(void)audioSessionWasInterrupted:(id)arg1 ;
-(AVCVirtualTTYDevice *)ttyDevice;
-(void)setTtyDevice:(AVCVirtualTTYDevice *)arg1 ;
-(void)device:(id)arg1 didReceiveText:(id)arg2 ;
-(BOOL)_handleInitialGarbageTextFromTTY:(id)arg1 device:(id)arg2 ;
-(id)_processText:(id)arg1 withDevice:(id)arg2 ;
-(void)callDidReceiveText:(id)arg1 forUtterance:(id)arg2 ;
-(void)device:(id)arg1 didStart:(BOOL)arg2 error:(id)arg3 ;
-(void)deviceDidStop:(id)arg1 ;
-(void)device:(id)arg1 didReceiveCharacter:(unsigned short)arg2 ;
-(NSObject*<OS_dispatch_queue>)callQueue;
@end

