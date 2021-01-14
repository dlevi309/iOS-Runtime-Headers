/*
* Generated on Thursday, January 14, 2021 at 2:22:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/LoggingSupport.framework/LoggingSupport
*/


@class NSString, OSLogPreferencesSubsystem;

@interface OSLogPreferencesCategory : NSObject {

	NSString* _name;
	OSLogPreferencesSubsystem* _subsystem;

}

@property (nonatomic,readonly) NSString * name;                                    //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) OSLogPreferencesSubsystem * subsystem;              //@synthesize subsystem=_subsystem - In the implementation block
@property (nonatomic,readonly) BOOL isLocked; 
@property (nonatomic,readonly) long long effectiveEnabledLevel; 
@property (nonatomic,readonly) long long effectivePersistedLevel; 
@property (assign,nonatomic) long long enabledLevel; 
@property (assign,nonatomic) long long persistedLevel; 
@property (assign,nonatomic) BOOL signpostEnabled; 
@property (assign,nonatomic) BOOL signpostPersisted; 
-(BOOL)isLocked;
-(OSLogPreferencesSubsystem *)subsystem;
-(long long)enabledLevel;
-(long long)persistedLevel;
-(void)setEnabledLevel:(long long)arg1 ;
-(void)setPersistedLevel:(long long)arg1 ;
-(long long)effectiveEnabledLevel;
-(long long)effectivePersistedLevel;
-(long long)defaultEnabledLevel;
-(long long)defaultPersistedLevel;
-(BOOL)signpostEnabled;
-(id)initWithName:(id)arg1 subsystem:(id)arg2 ;
-(BOOL)signpostPersisted;
-(void)setSignpostEnabled:(BOOL)arg1 ;
-(void)setSignpostPersisted:(BOOL)arg1 ;
-(NSString *)name;
-(void)reset;
@end

