/*
* Generated on Monday, March 1, 2021 at 2:34:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libcoreroutine.dylib
*/

#import <libcoreroutine.dylib/libcoreroutine.dylib-Structs.h>
#import <libcoreroutine.dylib/RTService.h>

@class NSArray;

@interface RTWiFiManager : RTService {

	unsigned long long _powerStatus;
	unsigned long long _linkStatus;
	NSArray* _accessPoints;

}

@property (assign,nonatomic) unsigned long long powerStatus;               //@synthesize powerStatus=_powerStatus - In the implementation block
@property (nonatomic,readonly) unsigned long long linkStatus;              //@synthesize linkStatus=_linkStatus - In the implementation block
@property (nonatomic,retain) NSArray * accessPoints;                       //@synthesize accessPoints=_accessPoints - In the implementation block
+(id)allocWithZone:(NSZone*)arg1 ;
+(BOOL)supportsNotificationName:(id)arg1 ;
+(id)powerStatusToString:(unsigned long long)arg1 ;
+(id)linkStatusToString:(unsigned long long)arg1 ;
-(id)init;
-(NSArray *)accessPoints;
-(void)setAccessPoints:(NSArray *)arg1 ;
-(unsigned long long)powerStatus;
-(void)internalAddObserver:(id)arg1 name:(id)arg2 ;
-(void)internalRemoveObserver:(id)arg1 name:(id)arg2 ;
-(void)scheduleScan;
-(void)cancelScan;
-(void)fetchPowerStatus:(/*^block*/id)arg1 ;
-(unsigned long long)linkStatus;
-(void)_scheduleScan;
-(void)_cancelScan;
-(void)fetchLinkStatus:(/*^block*/id)arg1 ;
-(void)setPowerStatus:(unsigned long long)arg1 ;
-(void)_notifyScanResults:(id)arg1 ;
@end

