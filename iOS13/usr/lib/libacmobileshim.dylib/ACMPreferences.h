/*
* Generated on Monday, March 1, 2021 at 2:35:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libacmobileshim.dylib
*/

#import <libobjc.A.dylib/ACMBasePreferences.h>

@protocol ACMPreferencesStore;
@class NSString;

@interface ACMPreferences : NSObject <ACMBasePreferences> {

	id<ACMPreferencesStore> _preferencesStore;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (retain) id<ACMPreferencesStore> preferencesStore;              //@synthesize preferencesStore=_preferencesStore - In the implementation block
-(void)dealloc;
-(id)preferencesValueForKey:(id)arg1 ;
-(void)setPreferencesValue:(id)arg1 forKey:(id)arg2 ;
-(id)multiplePreferencesValuesForKeys:(id)arg1 ;
-(void)setMultiplePreferencesValues:(id)arg1 ;
-(id)multiplePreferencesValuesForKeys:(id)arg1 withOptions:(long long)arg2 ;
-(void)setMultiplePreferencesValues:(id)arg1 withOptions:(long long)arg2 ;
-(void)setPreferencesStore:(id<ACMPreferencesStore>)arg1 ;
-(id<ACMPreferencesStore>)preferencesStore;
-(id)preferencesValueForKey:(id)arg1 withOptions:(long long)arg2 ;
-(void)setPreferencesValue:(id)arg1 forKey:(id)arg2 withOptions:(long long)arg3 ;
@end

