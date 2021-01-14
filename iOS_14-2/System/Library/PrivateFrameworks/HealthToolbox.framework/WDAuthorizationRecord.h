/*
* Generated on Thursday, January 14, 2021 at 2:27:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
*/


@class _HKAuthorizationRecord;

@interface WDAuthorizationRecord : NSObject {

	_HKAuthorizationRecord* _internalAuthorizationRecord;
	long long _status;

}

@property (assign) long long status;              //@synthesize status=_status - In the implementation block
-(id)init;
-(BOOL)requestedSharing;
-(BOOL)requestedReading;
-(id)initWithInternalAuthorizationRecord:(id)arg1 ;
-(void)setStatus:(long long)arg1 ;
-(long long)status;
@end

