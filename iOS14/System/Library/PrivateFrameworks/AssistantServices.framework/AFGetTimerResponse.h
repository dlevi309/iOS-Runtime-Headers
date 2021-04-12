/*
* Generated on Thursday, January 14, 2021 at 2:21:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
*/

#import <AssistantServices/AFSiriResponse.h>

@class STTimer;

@interface AFGetTimerResponse : AFSiriResponse {

	STTimer* _timer;

}

@property (nonatomic,retain) STTimer * timer;              //@synthesize timer=_timer - In the implementation block
+(BOOL)supportsSecureCoding;
-(STTimer *)timer;
-(void)setTimer:(STTimer *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
@end

