/*
* Generated on Thursday, January 14, 2021 at 2:28:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RemoteMediaServices.framework/RemoteMediaServices
*/

#import <RemoteMediaServices/RemoteMediaServices-Structs.h>
#import <libobjc.A.dylib/RMSTouchRemoteSocketDelegate.h>

@protocol RMSDAAPTouchRemoteManagerDelegate;
@class RMSDAAPRequestManager, RMSTouchRemoteSocket, NSString;

@interface RMSDAAPTouchRemoteManager : NSObject <RMSTouchRemoteSocketDelegate> {

	RMSDAAPRequestManager* _requestManager;
	RMSTouchRemoteSocket* _socket;
	long long _controlPromptRevision;
	int _encryptionKey;
	int _portSecret;
	int _port;
	float _touchDistanceMin;
	float _touchDistanceMax;
	unsigned _touchTimeMin;
	unsigned _touchTimeMax;
	BOOL _shouldWriteTimestampsForPPT;
	id<RMSDAAPTouchRemoteManagerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<RMSDAAPTouchRemoteManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<RMSDAAPTouchRemoteManagerDelegate>)delegate;
-(void)setDelegate:(id<RMSDAAPTouchRemoteManagerDelegate>)arg1 ;
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
@end

