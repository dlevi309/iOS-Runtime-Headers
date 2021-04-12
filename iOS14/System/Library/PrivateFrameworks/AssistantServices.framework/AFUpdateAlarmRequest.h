/*
* Generated on Thursday, January 14, 2021 at 2:21:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
*/

#import <AssistantServices/AFSiriRequest.h>

@class NSArray;

@interface AFUpdateAlarmRequest : AFSiriRequest {

	NSArray* _alarms;

}

@property (nonatomic,copy) NSArray * alarms;              //@synthesize alarms=_alarms - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSArray *)alarms;
-(void)encodeWithCoder:(id)arg1 ;
-(id)createResponse;
-(void)setAlarms:(NSArray *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)alarm;
@end

