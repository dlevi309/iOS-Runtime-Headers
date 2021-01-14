/*
* Generated on Thursday, January 14, 2021 at 2:28:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TVRemoteCore.framework/TVRemoteCore
*/

#import <libobjc.A.dylib/RTIInputSystemSessionDelegate.h>
#import <libobjc.A.dylib/RTIInputSystemPayloadDelegate.h>
#import <TVRemoteCore/_TVRXKeyboardImpl.h>

@class _TVRXKeyboardController, _TVRCRPCompanionLinkClientWrapper, RTIInputSystemSourceSession, TVRCKeyboardAttributes, NSString;

@interface _TVRCRapportRemoteTextInputKeyboardImpl : NSObject <RTIInputSystemSessionDelegate, RTIInputSystemPayloadDelegate, _TVRXKeyboardImpl> {

	BOOL _editing;
	_TVRXKeyboardController* _keyboardController;
	_TVRCRPCompanionLinkClientWrapper* _companionLinkWrapper;
	RTIInputSystemSourceSession* _currentSession;
	TVRCKeyboardAttributes* _currentAttributes;

}

@property (assign,nonatomic) BOOL editing;                                                          //@synthesize editing=_editing - In the implementation block
@property (nonatomic,retain) RTIInputSystemSourceSession * currentSession;                          //@synthesize currentSession=_currentSession - In the implementation block
@property (nonatomic,retain) TVRCKeyboardAttributes * currentAttributes;                            //@synthesize currentAttributes=_currentAttributes - In the implementation block
@property (assign,nonatomic,__weak) _TVRXKeyboardController * keyboardController;                   //@synthesize keyboardController=_keyboardController - In the implementation block
@property (nonatomic,retain) _TVRCRPCompanionLinkClientWrapper * companionLinkWrapper;              //@synthesize companionLinkWrapper=_companionLinkWrapper - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)handleTextActionPayload:(id)arg1 ;
-(void)setText:(id)arg1 ;
-(BOOL)isEditing;
-(id)attributes;
-(id)text;
-(_TVRXKeyboardController *)keyboardController;
-(void)setCurrentSession:(RTIInputSystemSourceSession *)arg1 ;
-(void)inputSessionDidDie:(id)arg1 ;
-(void)inputSessionDidBegin:(id)arg1 ;
-(void)setEditing:(BOOL)arg1 ;
-(TVRCKeyboardAttributes *)currentAttributes;
-(RTIInputSystemSourceSession *)currentSession;
-(BOOL)editing;
-(void)inputSessionDidEnd:(id)arg1 ;
-(void)setKeyboardController:(_TVRXKeyboardController *)arg1 ;
-(void)sendReturnKey;
-(void)setTextActionPayload:(id)arg1 ;
-(void)setCurrentAttributes:(TVRCKeyboardAttributes *)arg1 ;
-(void)_stopObservingTelevisionEditingSession;
-(void)_receivedInputSourceSession:(id)arg1 ;
-(void)setCompanionLinkWrapper:(_TVRCRPCompanionLinkClientWrapper *)arg1 ;
-(_TVRCRPCompanionLinkClientWrapper *)companionLinkWrapper;
@end

