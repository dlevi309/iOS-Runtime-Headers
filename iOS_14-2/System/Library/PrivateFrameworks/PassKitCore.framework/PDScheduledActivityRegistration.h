/*
* Generated on Thursday, January 14, 2021 at 2:21:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)encodeWithCoder:(id)arg1 ;
-(id<NSObject><NSSecureCoding>)activityContext;
-(PDScheduledActivityCriteria *)activityCriteria;
-(unsigned long long)hash;
-(BOOL)isEqualToScheduledActivityRegistration:(id)arg1 ;
-(id)initWithActivityCriteria:(id)arg1 activityContext:(id)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

