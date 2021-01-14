/*
* Generated on Thursday, January 14, 2021 at 2:28:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TelephonyPreferences.framework/TelephonyPreferences
*/


@class NSString;

@interface TPSPreferences : NSObject {

	NSString* _domain;

}

@property (nonatomic,copy,readonly) NSString * domain;                 //@synthesize domain=_domain - In the implementation block
@property (nonatomic,readonly) BOOL showSubscriptionList; 
+(id)sharedInstance;
-(BOOL)boolForKey:(id)arg1 defaultValue:(BOOL)arg2 ;
-(id)stringForKey:(id)arg1 defaultValue:(id)arg2 ;
-(void)setPreferencesValue:(id)arg1 forKey:(id)arg2 ;
-(void)setString:(id)arg1 forKey:(id)arg2 ;
-(id)init;
-(id)preferencesValueForKey:(id)arg1 ;
-(void)setPreferencesValue:(id)arg1 forKey:(id)arg2 domain:(id)arg3 ;
-(NSString *)domain;
-(void)setNumber:(id)arg1 forKey:(id)arg2 ;
-(void)setInteger:(long long)arg1 forKey:(id)arg2 ;
-(unsigned long long)unsignedIntegerForKey:(id)arg1 defaultValue:(unsigned long long)arg2 ;
-(id)preferencesValueForKey:(id)arg1 domain:(id)arg2 ;
-(void)setUnsignedInteger:(unsigned long long)arg1 forKey:(id)arg2 ;
-(long long)integerForKey:(id)arg1 defaultValue:(long long)arg2 ;
-(void)setBool:(BOOL)arg1 forKey:(id)arg2 ;
-(id)numberForKey:(id)arg1 defaultValue:(id)arg2 ;
-(BOOL)showSubscriptionList;
@end

