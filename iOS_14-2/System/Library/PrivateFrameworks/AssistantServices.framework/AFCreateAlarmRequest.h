/*
* Generated on Thursday, January 14, 2021 at 2:21:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
*/

#import <AssistantServices/AFSiriRequest.h>

@class STAlarm;

@interface AFCreateAlarmRequest : AFSiriRequest {

	STAlarm* _alarm;

}

@property (nonatomic,retain) STAlarm * alarm;              //@synthesize alarm=_alarm - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setAlarm:(STAlarm *)arg1 ;
-(id)createResponse;
-(id)initWithCoder:(id)arg1 ;
-(STAlarm *)alarm;
@end

