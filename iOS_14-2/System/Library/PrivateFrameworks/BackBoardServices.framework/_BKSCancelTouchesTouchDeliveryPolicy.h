/*
* Generated on Thursday, January 14, 2021 at 2:20:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(unsigned)contextId;
-(void)appendDescriptionToFormatter:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)matchSharingTouchesPolicy:(/*^block*/id)arg1 orCancelTouchesPolicy:(/*^block*/id)arg2 orCombinedPolicy:(/*^block*/id)arg3 ;
-(void)setAssertionEndpoint:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithContextId:(unsigned)arg1 initialTouchTimestamp:(double)arg2 ;
-(double)initialTouchTimestamp;
-(id)assertionEndpoint;
-(BOOL)isEqual:(id)arg1 ;
@end

