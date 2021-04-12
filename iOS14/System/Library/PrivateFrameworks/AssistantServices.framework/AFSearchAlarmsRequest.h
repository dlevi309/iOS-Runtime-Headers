/*
* Generated on Thursday, January 14, 2021 at 2:21:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setCriteria:(STAlarm *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(long long)options;
-(id)createResponse;
-(void)setOptions:(long long)arg1 ;
-(STAlarm *)criteria;
-(id)initWithCoder:(id)arg1 ;
@end

