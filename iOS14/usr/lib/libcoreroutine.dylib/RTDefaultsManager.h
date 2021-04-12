/*
* Generated on Thursday, January 14, 2021 at 2:26:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libcoreroutine.dylib
*/

#import <libcoreroutine.dylib/RTService.h>

@protocol RTUserDefaults;
@interface RTDefaultsManager : RTService {

	id<RTUserDefaults> _userDefaults;

}
-(void)internalRemoveObserver:(id)arg1 name:(id)arg2 ;
-(void)registerDefaults:(id)arg1 ;
-(void)internalAddObserver:(id)arg1 name:(id)arg2 ;
-(id)objectForKey:(id)arg1 domain:(id)arg2 ;
-(void)shutdown;
-(void)addDomain:(id)arg1 ;
-(id)init;
-(id)initWithUserDefaults:(id)arg1 customDomain:(id)arg2 ;
-(id)objectForKey:(id)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 domain:(id)arg3 ;
-(void)registerDefault:(id)arg1 forKey:(id)arg2 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(void)notifyUpdatedKeys:(id)arg1 ;
@end

