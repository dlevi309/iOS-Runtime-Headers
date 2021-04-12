/*
* Generated on Monday, March 1, 2021 at 2:34:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AirPortAssistant.framework/AirPortAssistant
*/

#import <AirPortAssistant/AirPortAssistant-Structs.h>
#import <libobjc.A.dylib/AssistantCallbackUIDelegateResult.h>

@interface AssistantCallbackController : NSObject <AssistantCallbackUIDelegateResult> {

	BOOL _saveScanState;
	id _uiDelegate;
	AssistantCallbackContext* _callbackContext;

}

@property (nonatomic,retain) id<AssistantCallbackUIDelegate> uiDelegate;              //@synthesize uiDelegate=_uiDelegate - In the implementation block
+(int)updateKeychainNetworkPassword:(id)arg1 forNetworkNamed:(id)arg2 ;
+(int)updateKeychainBasePassword:(id)arg1 forMACAddress:(id)arg2 withBaseName:(id)arg3 ;
+(id)keychainPasswordForBaseStation:(id)arg1 ;
+(void)keychainPasswordForBaseStation:(id)arg1 delegate:(id)arg2 ;
+(int)removeKeychainPasswordForBaseStation:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(void)setUiDelegate:(id<AssistantCallbackUIDelegate>)arg1 ;
-(id<AssistantCallbackUIDelegate>)uiDelegate;
-(/*function pointer*/void*)assistantCallback;
-(void)userResponseToJoinNetwork:(int)arg1 ;
-(void)userResponseToWarning:(int)arg1 ;
-(void)userResponseToPPPoECredsFailed:(int)arg1 ;
-(void)callbackAskUserForPasswordResult:(int)arg1 password:(id)arg2 remember:(int)arg3 ;
-(void)callbackAskUserToChooseFromStringListResult:(int)arg1 selectedString:(id)arg2 ;
-(void)callbackAskUserAQuestionResult:(int)arg1 result:(int)arg2 ;
-(int)subclassAssistantCallback:(AssistantCallbackContext*)arg1 ;
-(int)startScanForNetworks:(id)arg1 wifiType:(int)arg2 mergeResults:(BOOL)arg3 maxAge:(unsigned long long)arg4 ;
-(int)startJoinNetwork:(id)arg1 password:(id)arg2 rememberChoice:(int)arg3 ;
-(void)joinNetworkDone:(id)arg1 ;
-(void)scanForNetworksDone:(id)arg1 ;
-(int)assistantCallback:(AssistantCallbackContext*)arg1 withSelector:(int)arg2 ;
@end

