/*
* Generated on Thursday, January 14, 2021 at 2:22:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppAnalytics.framework/AppAnalytics
*/

#import <libobjc.A.dylib/AADataEventType.h>

@class NSDate;

@interface AATimedData : NSObject <AADataEventType> {

	 duration;

}

@property (readonly,nonatomic) NSDate * startDate; 
@property (readonly,nonatomic) NSDate * endDate; 
@property (readonly,nonatomic) double duration; 
+(id)dataName;
-(NSDate *)endDate;
-(id)toDict;
-(id)init;
-(NSDate *)startDate;
-(double)duration;
@end

