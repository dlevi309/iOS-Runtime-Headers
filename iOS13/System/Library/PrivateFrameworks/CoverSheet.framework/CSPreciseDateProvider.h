/*
* Generated on Monday, March 1, 2021 at 2:33:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)date;
-(id)observeMinuteUpdatesWithHandler:(/*^block*/id)arg1 ;
-(void)removeMinuteUpdateHandler:(id)arg1 ;
@end

