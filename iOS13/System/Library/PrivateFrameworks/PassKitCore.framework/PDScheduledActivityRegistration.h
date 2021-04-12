/*
* Generated on Monday, March 1, 2021 at 2:31:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol NSObjectNSSecureCoding;
@class PDScheduledActivityCriteria;

@interface PDScheduledActivityRegistration : NSObject <NSSecureCoding> {

	PDScheduledActivityCriteria* _activityCriteria;
	id<NSObject><NSSecureCoding> _activityContext;

}

@property (nonatomic,readonly) PDScheduledActivityCriteria * activityCriteria;              //@synthesize activityCriteria=_activityCriteria - In the implementation block
@property (nonatomic,readonly) id<NSObject><NSSecureCoding> activityContext;                //@synthesize activityContext=_activityContext - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isEqualToScheduledActivityRegistration:(id)arg1 ;
-(id)initWithActivityCriteria:(id)arg1 activityContext:(id)arg2 ;
-(PDScheduledActivityCriteria *)activityCriteria;
-(id<NSObject><NSSecureCoding>)activityContext;
@end

