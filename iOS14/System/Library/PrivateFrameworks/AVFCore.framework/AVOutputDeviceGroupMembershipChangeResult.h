/*
* Generated on Thursday, January 14, 2021 at 2:21:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
*/


@class NSString;

@interface AVOutputDeviceGroupMembershipChangeResult : NSObject {

	long long _status;
	NSString* _cancellationReason;

}

@property (readonly) long long status; 
@property (readonly) NSString * cancellationReason; 
-(NSString *)cancellationReason;
-(id)initWithStatus:(long long)arg1 cancellationReason:(id)arg2 ;
-(long long)status;
-(void)dealloc;
@end

