/*
* Generated on Monday, March 1, 2021 at 2:33:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
*/


@protocol AFUIPreferencesDelegate;
@class NSUserDefaults;

@interface AFUIPreferences : NSObject {

	NSUserDefaults* _userDefaults;
	id<AFUIPreferencesDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<AFUIPreferencesDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)init;
-(void)synchronize;
-(id)objectForKey:(id)arg1 ;
-(id<AFUIPreferencesDelegate>)delegate;
-(void)setDelegate:(id<AFUIPreferencesDelegate>)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(BOOL)boolForKey:(id)arg1 ;
-(id)initWithSuiteName:(id)arg1 ;
-(id)stringForKey:(id)arg1 ;
-(long long)integerForKey:(id)arg1 ;
-(double)doubleForKey:(id)arg1 ;
-(void)setInteger:(long long)arg1 forKey:(id)arg2 ;
-(void)setDouble:(double)arg1 forKey:(id)arg2 ;
-(void)setBool:(BOOL)arg1 forKey:(id)arg2 ;
-(id)initWithDefaultsAtURL:(id)arg1 ;
-(void)_mutateValueForKey:(id)arg1 block:(/*^block*/id)arg2 ;
-(id)initWithDefaultsResource:(id)arg1 withExtension:(id)arg2 inBundle:(id)arg3 ;
@end

