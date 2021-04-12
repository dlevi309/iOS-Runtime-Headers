/*
* Generated on Thursday, January 14, 2021 at 2:23:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
*/

#import <Catalyst/CATTaskResultObject.h>

@class NSArray;

@interface DMFFetchStreamEventsResultObject : CATTaskResultObject {

	NSArray* _eventStatuses;

}

@property (nonatomic,copy) NSArray * eventStatuses;              //@synthesize eventStatuses=_eventStatuses - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(NSArray *)eventStatuses;
-(void)setEventStatuses:(NSArray *)arg1 ;
@end

