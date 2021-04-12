/*
* Generated on Monday, March 1, 2021 at 2:34:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
*/


@class _HKAuthorizationRecord;

@interface WDAuthorizationRecord : NSObject {

	_HKAuthorizationRecord* _internalAuthorizationRecord;
	long long _status;

}

@property (assign) long long status;              //@synthesize status=_status - In the implementation block
-(id)init;
-(long long)status;
-(void)setStatus:(long long)arg1 ;
-(BOOL)requestedSharing;
-(BOOL)requestedReading;
-(id)initWithInternalAuthorizationRecord:(id)arg1 ;
@end

