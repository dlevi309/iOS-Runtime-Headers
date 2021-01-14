/*
* Generated on Thursday, January 14, 2021 at 2:29:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libacmobileshim.dylib
*/


@protocol ACMBasePreferences <NSObject>
@property (retain) id<ACMPreferencesStore> preferencesStore; 
@required
-(void)setPreferencesValue:(id)arg1 forKey:(id)arg2;
-(id)preferencesValueForKey:(id)arg1;
-(id)multiplePreferencesValuesForKeys:(id)arg1;
-(void)setMultiplePreferencesValues:(id)arg1;
-(id)multiplePreferencesValuesForKeys:(id)arg1 withOptions:(long long)arg2;
-(void)setMultiplePreferencesValues:(id)arg1 withOptions:(long long)arg2;
-(void)setPreferencesStore:(id)arg1;
-(id<ACMPreferencesStore>)preferencesStore;
-(id)preferencesValueForKey:(id)arg1 withOptions:(long long)arg2;
-(void)setPreferencesValue:(id)arg1 forKey:(id)arg2 withOptions:(long long)arg3;

@end

