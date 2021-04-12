/*
* Generated on Thursday, January 14, 2021 at 2:26:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
*/

#import <ContentKit/WFEvent.h>

@class NSString;

@interface WFPersonalAutomationSuggestionEvent : WFEvent {

	BOOL _visible;
	BOOL _interacted;
	BOOL _completed;
	NSString* _key;
	NSString* _intentType;
	NSString* _source;
	NSString* _appBundleIdentifier;
	NSString* _activityType;
	NSString* _triggerType;

}

@property (nonatomic,copy) NSString * key;                              //@synthesize key=_key - In the implementation block
@property (nonatomic,copy) NSString * intentType;                       //@synthesize intentType=_intentType - In the implementation block
@property (nonatomic,copy) NSString * source;                           //@synthesize source=_source - In the implementation block
@property (assign,nonatomic) BOOL visible;                              //@synthesize visible=_visible - In the implementation block
@property (assign,nonatomic) BOOL interacted;                           //@synthesize interacted=_interacted - In the implementation block
@property (assign,nonatomic) BOOL completed;                            //@synthesize completed=_completed - In the implementation block
@property (nonatomic,copy) NSString * appBundleIdentifier;              //@synthesize appBundleIdentifier=_appBundleIdentifier - In the implementation block
@property (nonatomic,copy) NSString * activityType;                     //@synthesize activityType=_activityType - In the implementation block
@property (nonatomic,copy) NSString * triggerType;                      //@synthesize triggerType=_triggerType - In the implementation block
+(Class)codableEventClass;
-(void)setTriggerType:(NSString *)arg1 ;
-(void)setActivityType:(NSString *)arg1 ;
-(NSString *)activityType;
-(void)setIntentType:(NSString *)arg1 ;
-(BOOL)completed;
-(void)setVisible:(BOOL)arg1 ;
-(NSString *)appBundleIdentifier;
-(BOOL)visible;
-(void)setSource:(NSString *)arg1 ;
-(void)setCompleted:(BOOL)arg1 ;
-(NSString *)intentType;
-(NSString *)key;
-(void)setAppBundleIdentifier:(NSString *)arg1 ;
-(NSString *)triggerType;
-(void)setKey:(NSString *)arg1 ;
-(NSString *)source;
-(void)setInteracted:(BOOL)arg1 ;
-(BOOL)interacted;
@end

