/*
* Generated on Thursday, January 14, 2021 at 2:20:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol OS_xpc_object;
@class NSObject;

@interface _DKSyncType : NSObject <NSSecureCoding> {

	BOOL _isSingleDevice;
	BOOL _forceSync;
	BOOL _isInitialSync;
	BOOL _isPeriodicSync;
	BOOL _isTriggeredSync;
	BOOL _didActivatePeer;
	BOOL _didReceivePush;
	BOOL _didAddSyncedEvents;
	BOOL _didDeleteSyncedEvents;
	unsigned long long _urgency;
	double _periodicSyncInterval;
	NSObject*<OS_xpc_object> _xpcActivity;

}
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
@end

