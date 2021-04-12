/*
* Generated on Monday, March 1, 2021 at 2:31:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)initWithCoder:(id)arg1 ;
-(STAlarm *)alarm;
-(id)createResponse;
-(void)setAlarm:(STAlarm *)arg1 ;
@end

