/*
* Generated on Monday, March 1, 2021 at 2:34:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libcoreroutine.dylib
*/

#import <libcoreroutine.dylib/RTService.h>

@protocol RTUserDefaults;
@interface RTDefaultsManager : RTService {

	id<RTUserDefaults> _userDefaults;

}
-(id)init;
-(id)objectForKey:(id)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(void)registerDefaults:(id)arg1 ;
-(void)shutdown;
-(void)addDomain:(id)arg1 ;
-(void)internalAddObserver:(id)arg1 name:(id)arg2 ;
-(void)internalRemoveObserver:(id)arg1 name:(id)arg2 ;
-(id)initWithUserDefaults:(id)arg1 customDomain:(id)arg2 ;
-(void)notifyUpdatedKeys:(id)arg1 ;
-(void)registerDefault:(id)arg1 forKey:(id)arg2 ;
-(id)objectForKey:(id)arg1 domain:(id)arg2 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 domain:(id)arg3 ;
@end

