/*
* Generated on Monday, March 1, 2021 at 2:31:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
*/

#import <AssistantServices/AFSiriResponse.h>

@class NSString;

@interface AFCreateAlarmResponse : AFSiriResponse {

	NSString* _alarmIdentifier;

}

@property (nonatomic,copy) NSString * alarmIdentifier;              //@synthesize alarmIdentifier=_alarmIdentifier - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setAlarmIdentifier:(NSString *)arg1 ;
-(NSString *)alarmIdentifier;
@end

