/*
* Generated on Thursday, January 14, 2021 at 2:28:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TVRemoteCore.framework/TVRemoteCore
*/

#import <TVRemoteCore/TVRMSDAAPControlSessionDelegate.h>
#import <TVRemoteCore/TVRMSPairingSessionDelegate.h>
#import <TVRemoteCore/_TVRCRMSDeviceKeyboardImplDelegate.h>

@protocol _TVRCRMSDeviceWrapperDelegate, TVRMSDAAPControlSession;
@class TVRMSService, TVRMSPairingSession, _TVRXKeyboardController, _TVRCRMSDeviceKeyboardImpl, NSMutableSet, _TVRCRMSNowPlayingState, NSString, NSDictionary;

@interface _TVRCRMSDeviceWrapper : NSObject <TVRMSDAAPControlSessionDelegate, TVRMSPairingSessionDelegate, _TVRCRMSDeviceKeyboardImplDelegate> {

	BOOL _authenticationAllowed;
	BOOL _connected;
	id<_TVRCRMSDeviceWrapperDelegate> _delegate;
	TVRMSService* _device;
	TVRMSPairingSession* _pairingSession;
	id<TVRMSDAAPControlSession> _controlSession;
	_TVRXKeyboardController* _keyboardController;
	_TVRCRMSDeviceKeyboardImpl* _keyboardImpl;
	NSMutableSet* _mediaButtons;
	_TVRCRMSNowPlayingState* _nowPlayingState;

}

@property (assign,nonatomic) BOOL connected;                                                 //@synthesize connected=_connected - In the implementation block
@property (nonatomic,retain) TVRMSService * device;                                          //@synthesize device=_device - In the implementation block
@property (nonatomic,retain) TVRMSPairingSession * pairingSession;                           //@synthesize pairingSession=_pairingSession - In the implementation block
@property (nonatomic,retain) id<TVRMSDAAPControlSession> controlSession;                     //@synthesize controlSession=_controlSession - In the implementation block
@property (nonatomic,retain) _TVRXKeyboardController * keyboardController;                   //@synthesize keyboardController=_keyboardController - In the implementation block
@property (nonatomic,retain) _TVRCRMSDeviceKeyboardImpl * keyboardImpl;                      //@synthesize keyboardImpl=_keyboardImpl - In the implementation block
@property (nonatomic,retain) NSMutableSet * mediaButtons;                                    //@synthesize mediaButtons=_mediaButtons - In the implementation block
@property (nonatomic,retain) _TVRCRMSNowPlayingState * nowPlayingState;                      //@synthesize nowPlayingState=_nowPlayingState - In the implementation block
@property (nonatomic,copy,readonly) NSString * name; 
@property (nonatomic,copy,readonly) NSString * identifier; 
@property (nonatomic,copy,readonly) NSDictionary * alternateIdentifiers; 
@property (nonatomic,copy,readonly) NSString * model; 
@property (assign,nonatomic) BOOL authenticationAllowed;                                     //@synthesize authenticationAllowed=_authenticationAllowed - In the implementation block
@property (assign,nonatomic,__weak) id<_TVRCRMSDeviceWrapperDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)wrapperWithDevice:(id)arg1 ;
-(BOOL)isPaired;
-(BOOL)connected;
-(id)initWithDevice:(id)arg1 ;
-(void)disconnect;
-(void)setConnected:(BOOL)arg1 ;
-(NSString *)model;
-(long long)connectionType;
-(id<_TVRCRMSDeviceWrapperDelegate>)delegate;
-(void)connect;
-(id)supportedButtons;
-(TVRMSService *)device;
-(NSString *)name;
-(void)setDelegate:(id<_TVRCRMSDeviceWrapperDelegate>)arg1 ;
-(_TVRXKeyboardController *)keyboardController;
-(void)setPairingSession:(TVRMSPairingSession *)arg1 ;
-(void)_seekToTime:(double)arg1 ;
-(void)setDevice:(TVRMSService *)arg1 ;
-(void)sendButtonEvent:(id)arg1 ;
-(NSString *)identifier;
-(void)disconnectWithError:(id)arg1 ;
-(void)dealloc;
-(TVRMSPairingSession *)pairingSession;
-(_TVRCRMSNowPlayingState *)nowPlayingState;
-(void)_disconnectWithError:(id)arg1 ;
-(NSMutableSet *)mediaButtons;
-(void)setMediaButtons:(NSMutableSet *)arg1 ;
-(void)pairingSessionDidFail:(id)arg1 ;
-(void)pairingSession:(id)arg1 didPairWithServiceNetworkName:(id)arg2 pairingGUID:(id)arg3 ;
-(void)pairingSession:(id)arg1 didBeginPairingWithPasscode:(id)arg2 ;
-(void)controlSession:(id)arg1 didUpdateNowPlayingInfo:(id)arg2 ;
-(void)controlSession:(id)arg1 artworkDataDidBecomeAvailable:(id)arg2 identifier:(id)arg3 ;
-(void)controlSession:(id)arg1 didUpdateAudioRoutes:(id)arg2 ;
-(void)controlSession:(id)arg1 didUpdateVolume:(float)arg2 ;
-(void)controlSessionDidEnd:(id)arg1 ;
-(void)setNowPlayingState:(_TVRCRMSNowPlayingState *)arg1 ;
-(void)_cancelPairing;
-(void)_connectWithPairingGUID:(id)arg1 ;
-(void)_initiatePairing;
-(long long)_touchDirectionForButtonEvent:(id)arg1 ;
-(long long)_navigationCommandForButtonEvent:(id)arg1 ;
-(void)_skipSeconds:(double)arg1 ;
-(id<TVRMSDAAPControlSession>)controlSession;
-(void)_setupKeyboardController;
-(void)controlSession:(id)arg1 keyboardEditingDidBegin:(id)arg2 ;
-(void)controlSession:(id)arg1 keyboardEditingDidEnd:(id)arg2 ;
-(void)controlSession:(id)arg1 didUpdateKeyboardEditingInfo:(id)arg2 ;
-(void)keyboardImpl:(id)arg1 updatedText:(id)arg2 ;
-(void)keyboardImplRequestsSendingReturnKey:(id)arg1 ;
-(NSDictionary *)alternateIdentifiers;
-(BOOL)supportsTouchEvents;
-(void)sendTouchEvent:(id)arg1 ;
-(BOOL)authenticationAllowed;
-(void)setAuthenticationAllowed:(BOOL)arg1 ;
-(void)setControlSession:(id<TVRMSDAAPControlSession>)arg1 ;
-(void)setKeyboardController:(_TVRXKeyboardController *)arg1 ;
-(_TVRCRMSDeviceKeyboardImpl *)keyboardImpl;
-(void)setKeyboardImpl:(_TVRCRMSDeviceKeyboardImpl *)arg1 ;
@end

