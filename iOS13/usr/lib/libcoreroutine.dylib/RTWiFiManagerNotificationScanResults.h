/*
* Generated on Monday, March 1, 2021 at 2:34:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libcoreroutine.dylib
*/

#import <libcoreroutine.dylib/RTNotification.h>

@class NSArray;

@interface RTWiFiManagerNotificationScanResults : RTNotification {

	NSArray* _scanResults;

}

@property (nonatomic,readonly) NSArray * scanResults;              //@synthesize scanResults=_scanResults - In the implementation block
-(NSArray *)scanResults;
-(id)initWithScanResults:(id)arg1 ;
@end

