/*
* Generated on Thursday, January 14, 2021 at 2:27:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSDate *)endDate;
-(void)addInterval:(id)arg1 ;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_MT3*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(id)init;
-(NSDate *)startDate;
-(NSMutableSet *)intervals;
-(void)setIntervals:(NSMutableSet *)arg1 ;
-(long long)intervalCount;
-(id)orderedIntervals;
@end

