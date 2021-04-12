/*
* Generated on Thursday, January 14, 2021 at 2:21:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
*/

#import <AssistantServices/AFSiriRequest.h>

@class NSArray;

@interface AFDismissAlarmRequest : AFSiriRequest {

	NSArray* _alarmURLs;

}

@property (nonatomic,copy) NSArray * alarmURLs;              //@synthesize alarmURLs=_alarmURLs - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)createResponse;
-(void)setAlarmURLs:(NSArray *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSArray *)alarmURLs;
@end

