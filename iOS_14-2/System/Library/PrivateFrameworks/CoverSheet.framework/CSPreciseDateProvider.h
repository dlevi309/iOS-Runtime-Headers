/*
* Generated on Thursday, January 14, 2021 at 2:26:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoverSheet.framework/CoverSheet
*/

#import <libobjc.A.dylib/SBFDateProviding.h>

@class SBUIPreciseClockTimer, NSString;

@interface CSPreciseDateProvider : NSObject <SBFDateProviding> {

	SBUIPreciseClockTimer* _preciseClockTimer;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id)observeMinuteUpdatesWithHandler:(/*^block*/id)arg1 ;
-(void)removeMinuteUpdateHandler:(id)arg1 ;
-(id)date;
@end

