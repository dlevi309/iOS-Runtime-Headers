/*
* Generated on Monday, March 1, 2021 at 2:31:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
*/

#import <AssistantServices/AFSiriResponse.h>

@class STTimer;

@interface AFGetTimerResponse : AFSiriResponse {

	STTimer* _timer;

}

@property (nonatomic,retain) STTimer * timer;              //@synthesize timer=_timer - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(STTimer *)timer;
-(void)setTimer:(STTimer *)arg1 ;
@end

