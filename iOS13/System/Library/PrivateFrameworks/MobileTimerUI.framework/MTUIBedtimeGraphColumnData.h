/*
* Generated on Monday, March 1, 2021 at 2:35:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MobileTimerUI.framework/MobileTimerUI
*/

#import <MobileTimerUI/MobileTimerUI-Structs.h>
#import <libobjc.A.dylib/NSFastEnumeration.h>

@class NSMutableSet, NSDate;

@interface MTUIBedtimeGraphColumnData : NSObject <NSFastEnumeration> {

	NSMutableSet* _intervals;

}

@property (nonatomic,retain) NSMutableSet * intervals;               //@synthesize intervals=_intervals - In the implementation block
@property (nonatomic,readonly) long long intervalCount; 
@property (nonatomic,readonly) NSDate * startDate; 
@property (nonatomic,readonly) NSDate * endDate; 
-(id)init;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_MT3*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(NSDate *)startDate;
-(NSDate *)endDate;
-(NSMutableSet *)intervals;
-(void)setIntervals:(NSMutableSet *)arg1 ;
-(long long)intervalCount;
-(void)addInterval:(id)arg1 ;
-(id)orderedIntervals;
@end

