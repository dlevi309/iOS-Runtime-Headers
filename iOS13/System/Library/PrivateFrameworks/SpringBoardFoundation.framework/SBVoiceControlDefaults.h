/*
* Generated on Monday, March 1, 2021 at 2:32:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
*/

#import <SpringBoardFoundation/SBAbstractSpringBoardDefaultDomain.h>

@interface SBVoiceControlDefaults : SBAbstractSpringBoardDefaultDomain

@property (nonatomic,readonly) BOOL disableVoiceControlForBluetoothRequests; 
@property (nonatomic,readonly) BOOL disableHandlerActions; 
@property (getter=isVoiceControlLoggingEnabled,nonatomic,readonly) BOOL voiceControlLoggingEnabled; 
-(void)setDisableVoiceControlForBluetoothRequests:(BOOL)arg1 ;
-(BOOL)disableVoiceControlForBluetoothRequests;
-(void)setDisableHandlerActions:(BOOL)arg1 ;
-(BOOL)disableHandlerActions;
-(void)setVoiceControlLoggingEnabled:(BOOL)arg1 ;
-(BOOL)isVoiceControlLoggingEnabled;
-(void)_bindAndRegisterDefaults;
@end

