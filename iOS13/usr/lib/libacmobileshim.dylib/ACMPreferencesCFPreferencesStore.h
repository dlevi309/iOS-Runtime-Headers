/*
* Generated on Monday, March 1, 2021 at 2:35:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libacmobileshim.dylib
*/

#import <libacmobileshim.dylib/libacmobileshim.dylib-Structs.h>
#import <libobjc.A.dylib/ACMPreferencesCFPreferencesBasedStore.h>

@class NSString;

@interface ACMPreferencesCFPreferencesStore : NSObject <ACMPreferencesCFPreferencesBasedStore>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)preferencesStoreWithCFPreferences;
-(void)clearCache;
-(id)allValues;
-(void)removeAllValues;
-(id)preferencesValueForKey:(id)arg1 ;
-(void)setPreferencesValue:(id)arg1 forKey:(id)arg2 ;
-(CFStringRef)preferenceID;
-(id)multiplePreferencesValuesForKeys:(id)arg1 ;
-(void)setMultiplePreferencesValues:(id)arg1 ;
-(id)multiplePreferencesValuesForKeys:(id)arg1 withOptions:(long long)arg2 ;
-(void)setMultiplePreferencesValues:(id)arg1 withOptions:(long long)arg2 ;
-(id)allValuesWithOptions:(long long)arg1 ;
-(void)replaceAllValues:(id)arg1 withOptions:(long long)arg2 ;
-(void)removeAllValuesWithOptions:(long long)arg1 ;
-(void)savePreferencesIfNeeded;
-(id)preferencesValueForKey:(id)arg1 withOptions:(long long)arg2 ;
-(void)setPreferencesValue:(id)arg1 forKey:(id)arg2 withOptions:(long long)arg3 ;
-(void)cleanupOnMemoryWarning;
@end

