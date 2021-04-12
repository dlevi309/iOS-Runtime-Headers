/*
* Generated on Monday, March 1, 2021 at 2:31:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SetupAssistant.framework/SetupAssistant
*/


@class NSString, NSMutableDictionary;

@interface BYPreferencesController : NSObject {

	NSString* _domain;
	NSMutableDictionary* _preferences;

}

@property (nonatomic,retain) NSString * domain;                              //@synthesize domain=_domain - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * preferences;              //@synthesize preferences=_preferences - In the implementation block
+(void)flushEverything;
+(id)buddyPreferences;
+(id)buddyPreferencesExcludedFromBackup;
+(void)persistEverything;
-(NSString *)domain;
-(id)objectForKey:(id)arg1 ;
-(void)removeObjectForKey:(id)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(BOOL)boolForKey:(id)arg1 ;
-(void)reset;
-(id)initWithDomain:(id)arg1 ;
-(void)setDomain:(NSString *)arg1 ;
-(void)flush;
-(void)setPreferences:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)preferences;
-(void)persist;
-(void)setObject:(id)arg1 forKey:(id)arg2 persistImmediately:(BOOL)arg3 ;
-(void)removeObjectForKey:(id)arg1 onlyFromMemory:(BOOL)arg2 ;
@end

