/*
* Generated on Monday, March 1, 2021 at 2:35:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VoiceShortcutsUI.framework/VoiceShortcutsUI
*/

#import <Cards/CRBasicCard.h>

@class NSString, INIntent, INIntentResponse, NSArray;

@interface VCUIVoiceShortcutCard : CRBasicCard {

	NSString* _shortcutIdentifier;
	INIntent* _intent;
	INIntentResponse* _intentResponse;
	NSArray* _sectionCommands;

}

@property (nonatomic,readonly) NSString * shortcutIdentifier;                  //@synthesize shortcutIdentifier=_shortcutIdentifier - In the implementation block
@property (nonatomic,readonly) INIntent * intent;                              //@synthesize intent=_intent - In the implementation block
@property (nonatomic,readonly) INIntentResponse * intentResponse;              //@synthesize intentResponse=_intentResponse - In the implementation block
@property (nonatomic,readonly) NSArray * sectionCommands;                      //@synthesize sectionCommands=_sectionCommands - In the implementation block
-(INIntent *)intent;
-(INIntentResponse *)intentResponse;
-(id)cardIdentifier;
-(BOOL)asynchronous;
-(void)loadCardWithCompletion:(/*^block*/id)arg1 ;
-(NSString *)shortcutIdentifier;
-(id)initWithShortcutIdentifier:(id)arg1 intent:(id)arg2 intentResponse:(id)arg3 commands:(id)arg4 ;
-(void)loadCardWithContent:(id)arg1 completion:(/*^block*/id)arg2 ;
-(NSArray *)sectionCommands;
@end

