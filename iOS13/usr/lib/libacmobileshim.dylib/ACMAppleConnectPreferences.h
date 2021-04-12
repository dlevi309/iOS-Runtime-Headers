/*
* Generated on Monday, March 1, 2021 at 2:35:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libacmobileshim.dylib
*/

#import <libacmobileshim.dylib/ACMPreferences.h>
#import <libobjc.A.dylib/ACMAppleConnectPreferences.h>
@class NSString;


@protocol ACMAppleConnectPreferences <ACMBasePreferences>
@property (assign,nonatomic) NSString * recentUserName; 
@property (assign,nonatomic) int logLevel; 
@property (nonatomic,copy) NSString * defaultUserName; 
@property (assign,nonatomic) BOOL shouldRememberPasswordInKeychain; 
@required
+(id)preferencesWithStore:(id)arg1;
-(void)clearCache;
-(id)UUID;
-(void)setUUID:(id)arg1;
-(int)logLevel;
-(void)setLogLevel:(int)arg1;
-(id)environmentPreferencesWithRealm:(id)arg1;
-(id)allValuesWithOptions:(long long)arg1;
-(void)replaceAllValues:(id)arg1 withOptions:(long long)arg2;
-(void)savePreferencesIfNeeded;
-(BOOL)runsOn64BitsDevice;
-(void)setRunsOn64BitsDevice:(BOOL)arg1;
-(void)purgeAllValues;
-(void)purgeAllValuesWithOptions:(long long)arg1;
-(NSString *)recentUserName;
-(void)setRecentUserName:(id)arg1;
-(NSString *)defaultUserName;
-(void)setDefaultUserName:(id)arg1;
-(BOOL)shouldRememberPasswordInKeychain;
-(void)setShouldRememberPasswordInKeychain:(BOOL)arg1;
-(id)principalPreferencesWithPrincipal:(id)arg1;
-(void)cleanupOnMemoryWarning;

@end


@class NSString, NSMutableDictionary;

@interface ACMAppleConnectPreferences : ACMPreferences <ACMAppleConnectPreferences> {

	NSMutableDictionary* _environmentsContainer;

}

@property (retain,readonly) NSMutableDictionary * environmentsContainer;              //@synthesize environmentsContainer=_environmentsContainer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (retain) id<ACMPreferencesStore> preferencesStore; 
@property (assign,nonatomic) NSString * recentUserName; 
@property (assign,nonatomic) int logLevel; 
@property (nonatomic,copy) NSString * defaultUserName; 
@property (assign,nonatomic) BOOL shouldRememberPasswordInKeychain; 
+(id)preferencesWithStore:(id)arg1 ;
-(void)dealloc;
-(void)clearCache;
-(id)UUID;
-(void)setUUID:(id)arg1 ;
-(int)logLevel;
-(void)setLogLevel:(int)arg1 ;
-(id)environmentPreferencesWithRealm:(id)arg1 ;
-(id)allValuesWithOptions:(long long)arg1 ;
-(void)replaceAllValues:(id)arg1 withOptions:(long long)arg2 ;
-(void)savePreferencesIfNeeded;
-(id)initWithPreferencesStore:(id)arg1 ;
-(NSMutableDictionary *)environmentsContainer;
-(BOOL)runsOn64BitsDevice;
-(void)setRunsOn64BitsDevice:(BOOL)arg1 ;
-(void)purgeAllValues;
-(void)purgeAllValuesWithOptions:(long long)arg1 ;
-(NSString *)recentUserName;
-(void)setRecentUserName:(NSString *)arg1 ;
-(NSString *)defaultUserName;
-(void)setDefaultUserName:(NSString *)arg1 ;
-(BOOL)shouldRememberPasswordInKeychain;
-(void)setShouldRememberPasswordInKeychain:(BOOL)arg1 ;
-(id)principalPreferencesWithPrincipal:(id)arg1 ;
-(id)createEnvironmentWithRealm:(id)arg1 ;
-(void)cleanupOnMemoryWarning;
@end

