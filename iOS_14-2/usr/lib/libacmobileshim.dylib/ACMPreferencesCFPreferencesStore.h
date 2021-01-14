/*
* Generated on Thursday, January 14, 2021 at 2:29:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setPreferencesValue:(id)arg1 forKey:(id)arg2 ;
-(id)preferencesValueForKey:(id)arg1 ;
-(void)clearCache;
-(void)removeAllValues;
-(id)allValues;
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

