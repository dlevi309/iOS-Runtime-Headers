/*
* Generated on Thursday, January 14, 2021 at 2:26:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libcoreroutine.dylib
*/

#import <libcoreroutine.dylib/libcoreroutine.dylib-Structs.h>
#import <libcoreroutine.dylib/RTService.h>

@interface RTBluetoothManager : RTService
+(id)allocWithZone:(NSZone*)arg1 ;
+(BOOL)supportsNotificationName:(id)arg1 ;
+(id)carKitConnectionStateToString:(long long)arg1 ;
-(void)internalRemoveObserver:(id)arg1 name:(id)arg2 ;
-(void)internalAddObserver:(id)arg1 name:(id)arg2 ;
-(void)_fetchCarKitConnectedStateWithHandler:(/*^block*/id)arg1 ;
-(void)fetchCarKitConnectedStateWithHandler:(/*^block*/id)arg1 ;
@end

