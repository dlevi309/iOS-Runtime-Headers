/*
* Generated on Monday, March 1, 2021 at 2:33:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
*/

#import <HMFoundation/HMFObject.h>

@class NSNumber, NSDate;

@interface MovingAverageEntry : HMFObject {

	NSNumber* _value;
	NSDate* _date;

}

@property (readonly) NSNumber * value;              //@synthesize value=_value - In the implementation block
@property (readonly) NSDate * date;                 //@synthesize date=_date - In the implementation block
-(NSDate *)date;
-(NSNumber *)value;
-(id)initWithValue:(id)arg1 ;
@end

