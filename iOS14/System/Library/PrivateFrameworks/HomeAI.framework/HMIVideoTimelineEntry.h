/*
* Generated on Thursday, January 14, 2021 at 2:27:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
*/

#import <HomeAI/HomeAI-Structs.h>
#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMIVideoEvent.h>

@class NSDate, NSString;

@interface HMIVideoTimelineEntry : HMFObject <HMIVideoEvent> {

	NSDate* _date;
	SCD_Struct_HM3 _time;

}

@property (readonly) SCD_Struct_HM3 time;                           //@synthesize time=_time - In the implementation block
@property (readonly) NSDate * date;                                 //@synthesize date=_date - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(SCD_Struct_HM3)time;
-(NSString *)description;
-(NSDate *)date;
-(id)initWithTime:(SCD_Struct_HM3)arg1 date:(id)arg2 ;
@end

