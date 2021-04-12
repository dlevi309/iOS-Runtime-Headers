/*
* Generated on Monday, March 1, 2021 at 2:30:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
*/

#import <BackBoardServices/BKSTouchDeliveryPolicy.h>

@protocol OS_xpc_object;
@class NSObject;

@interface _BKSCancelTouchesTouchDeliveryPolicy : BKSTouchDeliveryPolicy {

	unsigned _contextId;
	NSObject*<OS_xpc_object> _assertionEndpoint;
	double _initialTouchTimestamp;

}

@property (nonatomic,readonly) unsigned contextId;                        //@synthesize contextId=_contextId - In the implementation block
@property (nonatomic,readonly) double initialTouchTimestamp;              //@synthesize initialTouchTimestamp=_initialTouchTimestamp - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned)contextId;
-(double)initialTouchTimestamp;
-(void)setAssertionEndpoint:(id)arg1 ;
-(id)matchSharingTouchesPolicy:(/*^block*/id)arg1 orCancelTouchesPolicy:(/*^block*/id)arg2 orCombinedPolicy:(/*^block*/id)arg3 ;
-(id)assertionEndpoint;
-(id)initWithContextId:(unsigned)arg1 initialTouchTimestamp:(double)arg2 ;
@end

