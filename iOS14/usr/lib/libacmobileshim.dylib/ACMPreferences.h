/*
* Generated on Thursday, January 14, 2021 at 2:29:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libacmobileshim.dylib
*/

#import <libobjc.A.dylib/ACMBasePreferences.h>

@protocol ACMPreferencesStore;
@class NSString;

@interface ACMPreferences : NSObject <ACMBasePreferences> {

	id<ACMPreferencesStore> _preferencesStore;

}

@property (retain) id<ACMPreferencesStore> preferencesStore;              //@synthesize preferencesStore=_preferencesStore - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setPreferencesValue:(id)arg1 forKey:(id)arg2 ;
-(id)preferencesValueForKey:(id)arg1 ;
-(void)dealloc;
-(id)multiplePreferencesValuesForKeys:(id)arg1 ;
-(void)setMultiplePreferencesValues:(id)arg1 ;
-(id)multiplePreferencesValuesForKeys:(id)arg1 withOptions:(long long)arg2 ;
-(void)setMultiplePreferencesValues:(id)arg1 withOptions:(long long)arg2 ;
-(void)setPreferencesStore:(id<ACMPreferencesStore>)arg1 ;
-(id<ACMPreferencesStore>)preferencesStore;
-(id)preferencesValueForKey:(id)arg1 withOptions:(long long)arg2 ;
-(void)setPreferencesValue:(id)arg1 forKey:(id)arg2 withOptions:(long long)arg3 ;
@end

