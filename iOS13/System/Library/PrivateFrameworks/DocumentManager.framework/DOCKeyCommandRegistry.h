/*
* Generated on Monday, March 1, 2021 at 2:31:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DocumentManager.framework/DocumentManager
*/


@interface DOCKeyCommandRegistry : NSObject {

	BOOL _singleCharKeyCommandsEnabled;

}

@property (getter=areSingleCharKeyCommandsEnabled) BOOL singleCharKeyCommandsEnabled;              //@synthesize singleCharKeyCommandsEnabled=_singleCharKeyCommandsEnabled - In the implementation block
+(id)sharedInstance;
+(id)_defaultIdentifiersAndKeyCommands;
+(id)_reversedDefaultIdentifiersAndKeyCommands;
+(id)_inputsOfAlwaysEnabledSingleCharKeyCommands;
-(id)init;
-(id)dismissingKeyCommands;
-(id)defaultKeyCommandsByExcludingKeyCommandsWithIdentifiers:(id)arg1 ;
-(BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2 defaultBehavior:(BOOL)arg3 ;
-(void)keyCommandWasPerformed:(id)arg1 ;
-(BOOL)_shouldOfferKeyCommand:(id)arg1 ;
-(id)dismissingKeyCommandsWithAction:(SEL)arg1 ;
-(void)_postNotificationForKeyCommandIdentifier:(id)arg1 modifierFlags:(long long)arg2 ;
-(void)_registerForKeyCommandWithIdentifier:(id)arg1 viewController:(id)arg2 withHandler:(/*^block*/id)arg3 ;
-(BOOL)areSingleCharKeyCommandsEnabled;
-(void)registerForKeyCommandWithIdentifiers:(id)arg1 viewController:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)setSingleCharKeyCommandsEnabled:(BOOL)arg1 ;
@end

