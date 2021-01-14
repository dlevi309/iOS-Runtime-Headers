/*
* Generated on Thursday, January 14, 2021 at 2:28:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TVRemoteCore.framework/TVRemoteCore
*/

#import <TVRemoteCore/TVRemoteCore-Structs.h>
#import <TVRemoteCore/TVRMSTouchRemoteSocketDelegate.h>

@protocol TVRMSDAAPTouchRemoteManagerDelegate;
@class TVRMSDAAPRequestManager, TVRMSFairPlayKeyboardEncryption, TVRMSTouchRemoteSocket, TVRMSKeyboardInfo, NSString;

@interface TVRMSDAAPTouchRemoteManager : NSObject <TVRMSTouchRemoteSocketDelegate> {

	TVRMSDAAPRequestManager* _requestManager;
	TVRMSFairPlayKeyboardEncryption* _keyboardEncryption;
	TVRMSTouchRemoteSocket* _socket;
	long long _controlPromptRevision;
	int _encryptionKey;
	int _portSecret;
	int _port;
	float _touchDistanceMin;
	float _touchDistanceMax;
	unsigned _touchTimeMin;
	unsigned _touchTimeMax;
	BOOL _keyboardEditingSessionActive;
	TVRMSKeyboardInfo* _keyboardInfo;
	long long _keyboardEditingSessionID;
	id<TVRMSDAAPTouchRemoteManagerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<TVRMSDAAPTouchRemoteManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<TVRMSDAAPTouchRemoteManagerDelegate>)delegate;
-(void)setDelegate:(id<TVRMSDAAPTouchRemoteManagerDelegate>)arg1 ;
-(void)touchRemoteSocketDidConnect:(id)arg1 ;
-(void)touchRemoteSocketDidDisconnect:(id)arg1 ;
-(id)initWithRequestManager:(id)arg1 ;
-(void)sendTouchMoveWithDirection:(long long)arg1 repeatCount:(int)arg2 ;
-(void)sendTouchEndWithDirection:(long long)arg1 repeatCount:(int)arg2 ;
-(void)sendNavigationCommand:(long long)arg1 ;
-(void)initiateControlWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_createSocket;
-(void)_requestPromptUpdate:(/*^block*/id)arg1 ;
-(CGPoint)_locationForDirection:(long long)arg1 repeatCount:(int)arg2 ;
-(unsigned)_timeForDirection:(long long)arg1 repeatCount:(int)arg2 ;
-(void)_parsePortInfoItems:(id)arg1 ;
-(void)_requestPortInfo;
-(void)sendKeyboardReturnCommand;
-(void)setKeyboardText:(id)arg1 ;
-(id)keyboardInfo;
-(void)clearKeyboardText;
-(void)_requestKeyboardStatus;
-(id)_encryptString:(id)arg1 ;
-(void)_processKeyboardMessageItems:(id)arg1 ;
-(void)_processAuthenticationUpdateForItems:(id)arg1 ;
-(BOOL)keyboardEditingSessionActive;
@end

