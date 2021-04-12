/*
* Generated on Thursday, January 14, 2021 at 2:21:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
*/

#import <AssistantServices/AFSiriResponse.h>

@class NSString;

@interface AFCreateAlarmResponse : AFSiriResponse {

	NSString* _alarmIdentifier;

}

@property (nonatomic,copy) NSString * alarmIdentifier;              //@synthesize alarmIdentifier=_alarmIdentifier - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)alarmIdentifier;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setAlarmIdentifier:(NSString *)arg1 ;
@end

