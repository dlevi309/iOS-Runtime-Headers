/*
* Generated on Thursday, January 14, 2021 at 2:21:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
*/

#import <AssistantServices/AFSiriRequest.h>

@class NSArray;

@interface AFDeleteAlarmRequest : AFSiriRequest {

	NSArray* _alarmIdentifiers;

}

@property (nonatomic,copy) NSArray * alarmIdentifiers;              //@synthesize alarmIdentifiers=_alarmIdentifiers - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)createResponse;
-(id)initWithCoder:(id)arg1 ;
-(void)setAlarmIdentifiers:(NSArray *)arg1 ;
-(NSArray *)alarmIdentifiers;
@end

