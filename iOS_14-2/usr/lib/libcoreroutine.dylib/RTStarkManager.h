/*
* Generated on Thursday, January 14, 2021 at 2:26:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libcoreroutine.dylib
*/

#import <libcoreroutine.dylib/libcoreroutine.dylib-Structs.h>
#import <libcoreroutine.dylib/RTService.h>

@class RTDefaultsManager;

@interface RTStarkManager : RTService {

	RTDefaultsManager* _defaultsManager;

}

@property (nonatomic,retain) RTDefaultsManager * defaultsManager;              //@synthesize defaultsManager=_defaultsManager - In the implementation block
+(id)allocWithZone:(NSZone*)arg1 ;
+(BOOL)supportsNotificationName:(id)arg1 ;
-(void)internalRemoveObserver:(id)arg1 name:(id)arg2 ;
-(void)setDefaultsManager:(RTDefaultsManager *)arg1 ;
-(void)internalAddObserver:(id)arg1 name:(id)arg2 ;
-(id)init;
-(RTDefaultsManager *)defaultsManager;
-(id)initWithDefaultsManager:(id)arg1 ;
-(void)_fetchConnectionStateWithHandler:(/*^block*/id)arg1 ;
-(void)fetchConnectionStateWithHandler:(/*^block*/id)arg1 ;
@end

