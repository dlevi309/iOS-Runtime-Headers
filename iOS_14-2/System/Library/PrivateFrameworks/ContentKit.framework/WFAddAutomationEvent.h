/*
* Generated on Thursday, January 14, 2021 at 2:26:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
*/

#import <ContentKit/WFEvent.h>

@class NSString;

@interface WFAddAutomationEvent : WFEvent {

	unsigned _actionCount;
	NSString* _key;
	NSString* _triggerType;
	NSString* _intentType;
	NSString* _source;
	NSString* _appBundleIdentifier;
	NSString* _activityType;
	NSString* _automationSuggestionsTrialIdentifier;
	NSString* _shortcutIdentifier;

}

@property (nonatomic,copy) NSString * key;                                               //@synthesize key=_key - In the implementation block
@property (nonatomic,copy) NSString * triggerType;                                       //@synthesize triggerType=_triggerType - In the implementation block
@property (nonatomic,copy) NSString * intentType;                                        //@synthesize intentType=_intentType - In the implementation block
@property (nonatomic,copy) NSString * source;                                            //@synthesize source=_source - In the implementation block
@property (assign,nonatomic) unsigned actionCount;                                       //@synthesize actionCount=_actionCount - In the implementation block
@property (nonatomic,copy) NSString * appBundleIdentifier;                               //@synthesize appBundleIdentifier=_appBundleIdentifier - In the implementation block
@property (nonatomic,copy) NSString * activityType;                                      //@synthesize activityType=_activityType - In the implementation block
@property (nonatomic,copy) NSString * automationSuggestionsTrialIdentifier;              //@synthesize automationSuggestionsTrialIdentifier=_automationSuggestionsTrialIdentifier - In the implementation block
@property (nonatomic,copy) NSString * shortcutIdentifier;                                //@synthesize shortcutIdentifier=_shortcutIdentifier - In the implementation block
+(Class)codableEventClass;
-(void)setTriggerType:(NSString *)arg1 ;
-(void)setActivityType:(NSString *)arg1 ;
-(NSString *)activityType;
-(void)setIntentType:(NSString *)arg1 ;
-(NSString *)appBundleIdentifier;
-(void)setSource:(NSString *)arg1 ;
-(NSString *)intentType;
-(void)setShortcutIdentifier:(NSString *)arg1 ;
-(NSString *)key;
-(void)setAppBundleIdentifier:(NSString *)arg1 ;
-(NSString *)triggerType;
-(NSString *)shortcutIdentifier;
-(void)setKey:(NSString *)arg1 ;
-(NSString *)source;
-(void)setActionCount:(unsigned)arg1 ;
-(unsigned)actionCount;
-(void)setAutomationSuggestionsTrialIdentifier:(NSString *)arg1 ;
-(NSString *)automationSuggestionsTrialIdentifier;
@end

