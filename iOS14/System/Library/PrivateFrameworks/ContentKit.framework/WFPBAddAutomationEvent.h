/*
* Generated on Thursday, January 14, 2021 at 2:26:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
*/

#import <ContentKit/ContentKit-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface WFPBAddAutomationEvent : PBCodable <NSCopying> {

	unsigned _actionCount;
	NSString* _activityType;
	NSString* _appBundleIdentifier;
	NSString* _automationSuggestionsTrialIdentifier;
	NSString* _intentType;
	NSString* _key;
	NSString* _shortcutIdentifier;
	NSString* _source;
	NSString* _triggerType;
	SCD_Struct_WF8 _has;

}

@property (nonatomic,readonly) BOOL hasKey; 
@property (nonatomic,retain) NSString * key;                                               //@synthesize key=_key - In the implementation block
@property (nonatomic,readonly) BOOL hasTriggerType; 
@property (nonatomic,retain) NSString * triggerType;                                       //@synthesize triggerType=_triggerType - In the implementation block
@property (nonatomic,readonly) BOOL hasIntentType; 
@property (nonatomic,retain) NSString * intentType;                                        //@synthesize intentType=_intentType - In the implementation block
@property (nonatomic,readonly) BOOL hasSource; 
@property (nonatomic,retain) NSString * source;                                            //@synthesize source=_source - In the implementation block
@property (assign,nonatomic) BOOL hasActionCount; 
@property (assign,nonatomic) unsigned actionCount;                                         //@synthesize actionCount=_actionCount - In the implementation block
@property (nonatomic,readonly) BOOL hasShortcutIdentifier; 
@property (nonatomic,retain) NSString * shortcutIdentifier;                                //@synthesize shortcutIdentifier=_shortcutIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL hasAppBundleIdentifier; 
@property (nonatomic,retain) NSString * appBundleIdentifier;                               //@synthesize appBundleIdentifier=_appBundleIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL hasActivityType; 
@property (nonatomic,retain) NSString * activityType;                                      //@synthesize activityType=_activityType - In the implementation block
@property (nonatomic,readonly) BOOL hasAutomationSuggestionsTrialIdentifier; 
@property (nonatomic,retain) NSString * automationSuggestionsTrialIdentifier;              //@synthesize automationSuggestionsTrialIdentifier=_automationSuggestionsTrialIdentifier - In the implementation block
-(BOOL)hasKey;
-(id)dictionaryRepresentation;
-(void)setTriggerType:(NSString *)arg1 ;
-(BOOL)hasSource;
-(void)setActivityType:(NSString *)arg1 ;
-(NSString *)activityType;
-(BOOL)hasIntentType;
-(void)setIntentType:(NSString *)arg1 ;
-(NSString *)appBundleIdentifier;
-(void)mergeFrom:(id)arg1 ;
-(void)setSource:(NSString *)arg1 ;
-(id)description;
-(NSString *)intentType;
-(void)setShortcutIdentifier:(NSString *)arg1 ;
-(NSString *)key;
-(unsigned long long)hash;
-(void)setAppBundleIdentifier:(NSString *)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(NSString *)triggerType;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)shortcutIdentifier;
-(void)setKey:(NSString *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)hasAppBundleIdentifier;
-(BOOL)hasActivityType;
-(NSString *)source;
-(BOOL)hasTriggerType;
-(void)setActionCount:(unsigned)arg1 ;
-(unsigned)actionCount;
-(void)setAutomationSuggestionsTrialIdentifier:(NSString *)arg1 ;
-(void)setHasActionCount:(BOOL)arg1 ;
-(BOOL)hasActionCount;
-(NSString *)automationSuggestionsTrialIdentifier;
-(BOOL)hasShortcutIdentifier;
-(BOOL)hasAutomationSuggestionsTrialIdentifier;
@end

