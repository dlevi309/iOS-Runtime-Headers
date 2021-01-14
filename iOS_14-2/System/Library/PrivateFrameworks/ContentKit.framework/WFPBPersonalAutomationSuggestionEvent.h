/*
* Generated on Thursday, January 14, 2021 at 2:26:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
*/

#import <ContentKit/ContentKit-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface WFPBPersonalAutomationSuggestionEvent : PBCodable <NSCopying> {

	NSString* _activityType;
	NSString* _appBundleIdentifier;
	NSString* _intentType;
	NSString* _key;
	NSString* _source;
	NSString* _triggerType;
	BOOL _completed;
	BOOL _interacted;
	BOOL _visible;
	SCD_Struct_WF9 _has;

}

@property (nonatomic,readonly) BOOL hasKey; 
@property (nonatomic,retain) NSString * key;                              //@synthesize key=_key - In the implementation block
@property (nonatomic,readonly) BOOL hasIntentType; 
@property (nonatomic,retain) NSString * intentType;                       //@synthesize intentType=_intentType - In the implementation block
@property (nonatomic,readonly) BOOL hasSource; 
@property (nonatomic,retain) NSString * source;                           //@synthesize source=_source - In the implementation block
@property (assign,nonatomic) BOOL hasVisible; 
@property (assign,nonatomic) BOOL visible;                                //@synthesize visible=_visible - In the implementation block
@property (assign,nonatomic) BOOL hasInteracted; 
@property (assign,nonatomic) BOOL interacted;                             //@synthesize interacted=_interacted - In the implementation block
@property (assign,nonatomic) BOOL hasCompleted; 
@property (assign,nonatomic) BOOL completed;                              //@synthesize completed=_completed - In the implementation block
@property (nonatomic,readonly) BOOL hasAppBundleIdentifier; 
@property (nonatomic,retain) NSString * appBundleIdentifier;              //@synthesize appBundleIdentifier=_appBundleIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL hasActivityType; 
@property (nonatomic,retain) NSString * activityType;                     //@synthesize activityType=_activityType - In the implementation block
@property (nonatomic,readonly) BOOL hasTriggerType; 
@property (nonatomic,retain) NSString * triggerType;                      //@synthesize triggerType=_triggerType - In the implementation block
-(BOOL)hasKey;
-(id)dictionaryRepresentation;
-(void)setTriggerType:(NSString *)arg1 ;
-(BOOL)hasSource;
-(void)setActivityType:(NSString *)arg1 ;
-(NSString *)activityType;
-(BOOL)hasIntentType;
-(void)setIntentType:(NSString *)arg1 ;
-(BOOL)completed;
-(void)setVisible:(BOOL)arg1 ;
-(NSString *)appBundleIdentifier;
-(BOOL)visible;
-(void)mergeFrom:(id)arg1 ;
-(void)setSource:(NSString *)arg1 ;
-(id)description;
-(void)setCompleted:(BOOL)arg1 ;
-(BOOL)hasCompleted;
-(void)setHasCompleted:(BOOL)arg1 ;
-(NSString *)intentType;
-(NSString *)key;
-(unsigned long long)hash;
-(void)setAppBundleIdentifier:(NSString *)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(NSString *)triggerType;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)hasVisible;
-(void)setHasVisible:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setKey:(NSString *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)hasAppBundleIdentifier;
-(BOOL)hasActivityType;
-(NSString *)source;
-(BOOL)hasTriggerType;
-(void)setInteracted:(BOOL)arg1 ;
-(void)setHasInteracted:(BOOL)arg1 ;
-(BOOL)hasInteracted;
-(BOOL)interacted;
@end

