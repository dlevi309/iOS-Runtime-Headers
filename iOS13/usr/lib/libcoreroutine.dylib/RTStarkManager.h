/*
* Generated on Monday, March 1, 2021 at 2:34:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(RTDefaultsManager *)defaultsManager;
-(void)internalAddObserver:(id)arg1 name:(id)arg2 ;
-(void)internalRemoveObserver:(id)arg1 name:(id)arg2 ;
-(id)initWithDefaultsManager:(id)arg1 ;
-(void)setDefaultsManager:(RTDefaultsManager *)arg1 ;
-(void)_fetchConnectionStateWithHandler:(/*^block*/id)arg1 ;
-(void)fetchConnectionStateWithHandler:(/*^block*/id)arg1 ;
@end

