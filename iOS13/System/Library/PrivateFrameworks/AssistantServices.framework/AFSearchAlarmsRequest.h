/*
* Generated on Monday, March 1, 2021 at 2:31:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
*/

#import <AssistantServices/AFSiriRequest.h>

@class STAlarm;

@interface AFSearchAlarmsRequest : AFSiriRequest {

	long long _options;
	STAlarm* _criteria;

}

@property (assign,nonatomic) long long options;               //@synthesize options=_options - In the implementation block
@property (nonatomic,retain) STAlarm * criteria;              //@synthesize criteria=_criteria - In the implementation block
+(BOOL)supportsSecureCoding;
-(long long)options;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setOptions:(long long)arg1 ;
-(STAlarm *)criteria;
-(void)setCriteria:(STAlarm *)arg1 ;
-(id)createResponse;
@end

