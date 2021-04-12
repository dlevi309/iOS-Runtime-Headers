/*
* Generated on Monday, March 1, 2021 at 2:34:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/

#import <WorkflowKit/WFEnumerationParameter.h>
#import <libobjc.A.dylib/WFActionEventObserver.h>

@class WFAction, NSString;

@interface WFSpeakTextVoicePickerParameter : WFEnumerationParameter <WFActionEventObserver> {

	WFAction* _action;

}

@property (assign,nonatomic,__weak) WFAction * action;              //@synthesize action=_action - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)defaultVoiceForLanguageCode:(id)arg1 ;
-(WFAction *)action;
-(BOOL)isHidden;
-(void)setAction:(WFAction *)arg1 ;
-(id)possibleStates;
-(id)localizedLabelForPossibleState:(id)arg1 ;
-(id)defaultSerializedRepresentation;
-(void)action:(id)arg1 parameterStateDidChangeForKey:(id)arg2 ;
-(id)selectedLanguageCode;
-(id)sortedVoicesForLanguageCode:(id)arg1 ;
-(id)voiceForIdentifier:(id)arg1 languageCode:(id)arg2 ;
@end

