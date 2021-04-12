/*
* Generated on Thursday, January 14, 2021 at 2:20:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
*/

#import <BackBoardServices/BKSTouchDeliveryPolicy.h>

@protocol OS_xpc_object;
@class NSObject;

@interface _BKSShareTouchesTouchDeliveryPolicy : BKSTouchDeliveryPolicy {

	unsigned _childContextId;
	unsigned _hostContextId;
	NSObject*<OS_xpc_object> _assertionEndpoint;

}

@property (nonatomic,readonly) unsigned childContextId;              //@synthesize childContextId=_childContextId - In the implementation block
@property (nonatomic,readonly) unsigned hostContextId;               //@synthesize hostContextId=_hostContextId - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)appendDescriptionToFormatter:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithChildContextId:(unsigned)arg1 hostContextId:(unsigned)arg2 ;
-(unsigned)hostContextId;
-(id)matchSharingTouchesPolicy:(/*^block*/id)arg1 orCancelTouchesPolicy:(/*^block*/id)arg2 orCombinedPolicy:(/*^block*/id)arg3 ;
-(void)setAssertionEndpoint:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(unsigned)childContextId;
-(id)assertionEndpoint;
-(BOOL)isEqual:(id)arg1 ;
@end

