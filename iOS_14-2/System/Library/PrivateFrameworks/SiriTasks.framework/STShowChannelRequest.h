/*
* Generated on Thursday, January 14, 2021 at 2:28:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SiriTasks.framework/SiriTasks
*/

#import <AssistantServices/AFSiriRequest.h>

@class STMediaChannel;

@interface STShowChannelRequest : AFSiriRequest {

	STMediaChannel* _channel;

}

@property (nonatomic,readonly) STMediaChannel * channel;              //@synthesize channel=_channel - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(STMediaChannel *)channel;
-(id)initWithCoder:(id)arg1 ;
-(id)_initWithChannel:(id)arg1 ;
@end

