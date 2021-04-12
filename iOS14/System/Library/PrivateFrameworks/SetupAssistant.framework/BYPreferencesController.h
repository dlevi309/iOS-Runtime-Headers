/*
* Generated on Thursday, January 14, 2021 at 2:22:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SetupAssistant.framework/SetupAssistant
*/


@class NSString, NSMutableDictionary;

@interface BYPreferencesController : NSObject {

	NSString* _domain;
	NSMutableDictionary* _preferences;

}

@property (nonatomic,retain) NSString * domain;                              //@synthesize domain=_domain - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * preferences;              //@synthesize preferences=_preferences - In the implementation block
+(id)buddyPreferencesInternal;
+(void)flushEverything;
+(void)persistEverything;
+(id)buddyPreferences;
+(id)buddyPreferencesEphemeral;
+(id)buddyPreferencesExcludedFromBackup;
-(void)flush;
-(id)init;
-(id)initWithDomain:(id)arg1 ;
-(NSMutableDictionary *)preferences;
-(void)removeObjectForKey:(id)arg1 onlyFromMemory:(BOOL)arg2 ;
-(void)setPreferences:(NSMutableDictionary *)arg1 ;
-(void)setDomain:(NSString *)arg1 ;
-(void)removeObjectForKey:(id)arg1 ;
-(NSString *)domain;
-(id)objectForKey:(id)arg1 includeCache:(BOOL)arg2 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 persistImmediately:(BOOL)arg3 ;
-(id)objectForKey:(id)arg1 ;
-(BOOL)boolForKey:(id)arg1 ;
-(void)reset;
-(void)persist;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
@end

