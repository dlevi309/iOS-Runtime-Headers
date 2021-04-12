/*
* Generated on Thursday, January 14, 2021 at 2:26:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ARKitCore.framework/ARKitCore
*/

#import <ARKitCore/ARKitCore-Structs.h>
#import <ARKitCore/ARDaemonSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface ARGeoTrackingStatus : NSObject <ARDaemonSecureCoding, NSCopying, NSSecureCoding> {

	long long _state;
	long long _accuracy;
	long long _stateReason;
	long long _failureReasons;

}

@property (nonatomic,readonly) long long failureReasons;              //@synthesize failureReasons=_failureReasons - In the implementation block
@property (nonatomic,readonly) long long state;                       //@synthesize state=_state - In the implementation block
@property (nonatomic,readonly) long long accuracy;                    //@synthesize accuracy=_accuracy - In the implementation block
@property (nonatomic,readonly) long long stateReason;                 //@synthesize stateReason=_stateReason - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)initialStatus;
-(void)encodeWithCoder:(id)arg1 ;
-(long long)accuracy;
-(long long)stateReason;
-(id)initWithCoder:(id)arg1 ;
-(long long)state;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(long long)failureReasons;
-(BOOL)isEqualPrivate:(id)arg1 ;
-(id)initWithGeoTrackingState:(long long)arg1 accuracy:(long long)arg2 stateReason:(long long)arg3 failureReasons:(long long)arg4 ;
@end

