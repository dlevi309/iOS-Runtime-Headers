/*
* Generated on Thursday, January 14, 2021 at 2:26:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libcoreroutine.dylib
*/

#import <libcoreroutine.dylib/RTNotification.h>

@class NSArray;

@interface RTWiFiManagerNotificationScanResults : RTNotification {

	NSArray* _scanResults;

}

@property (nonatomic,readonly) NSArray * scanResults;              //@synthesize scanResults=_scanResults - In the implementation block
-(id)initWithScanResults:(id)arg1 ;
-(NSArray *)scanResults;
@end

