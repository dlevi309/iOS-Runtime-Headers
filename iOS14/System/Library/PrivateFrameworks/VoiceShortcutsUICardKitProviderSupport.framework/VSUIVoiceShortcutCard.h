/*
* Generated on Thursday, January 14, 2021 at 2:28:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VoiceShortcutsUICardKitProviderSupport.framework/VoiceShortcutsUICardKitProviderSupport
*/

#import <VoiceShortcutsUICardKitProviderSupport/VSUIAsyncLoadingCard.h>

@class NSString, INIntent, INIntentResponse, NSArray;

@interface VSUIVoiceShortcutCard : VSUIAsyncLoadingCard {

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
-(id)initWithCard:(id)arg1 ;
-(INIntentResponse *)intentResponse;
-(id)cardIdentifier;
-(NSString *)shortcutIdentifier;
-(void)loadCardWithCompletion:(/*^block*/id)arg1 ;
-(void)_configureWithCard:(id)arg1 ;
-(void)loadCardWithContent:(id)arg1 completion:(/*^block*/id)arg2 ;
-(NSArray *)sectionCommands;
@end

