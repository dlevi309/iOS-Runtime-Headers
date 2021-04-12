/*
* Generated on Thursday, January 14, 2021 at 2:24:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AssistantUI.framework/AssistantUI
*/


@protocol AFUIPreferencesDelegate;
@class NSUserDefaults;

@interface AFUIPreferences : NSObject {

	NSUserDefaults* _userDefaults;
	id<AFUIPreferencesDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<AFUIPreferencesDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)initWithSuiteName:(id)arg1 ;
-(id)init;
-(id<AFUIPreferencesDelegate>)delegate;
-(void)setDouble:(double)arg1 forKey:(id)arg2 ;
-(double)doubleForKey:(id)arg1 ;
-(void)setInteger:(long long)arg1 forKey:(id)arg2 ;
-(void)setDelegate:(id<AFUIPreferencesDelegate>)arg1 ;
-(void)synchronize;
-(id)objectForKey:(id)arg1 ;
-(BOOL)boolForKey:(id)arg1 ;
-(void)setBool:(BOOL)arg1 forKey:(id)arg2 ;
-(long long)integerForKey:(id)arg1 ;
-(id)stringForKey:(id)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(id)initWithDefaultsAtURL:(id)arg1 ;
-(void)_mutateValueForKey:(id)arg1 block:(/*^block*/id)arg2 ;
-(id)initWithDefaultsResource:(id)arg1 withExtension:(id)arg2 inBundle:(id)arg3 ;
@end

