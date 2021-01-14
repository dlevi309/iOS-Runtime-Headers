/*
* Generated on Thursday, January 14, 2021 at 2:24:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DoNotDisturb.framework/DoNotDisturb
*/

#import <DoNotDisturb/DoNotDisturb-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class DNDClientEventDetails;

@interface DNDClientEventBehavior : NSObject <NSCopying, NSSecureCoding> {

	DNDClientEventDetails* _eventDetails;
	unsigned long long _interruptionSuppression;

}

@property (nonatomic,copy,readonly) DNDClientEventDetails * eventDetails;               //@synthesize eventDetails=_eventDetails - In the implementation block
@property (nonatomic,readonly) unsigned long long interruptionSuppression;              //@synthesize interruptionSuppression=_interruptionSuppression - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(unsigned long long)interruptionSuppression;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(DNDClientEventDetails *)eventDetails;
-(id)initWithEventDetails:(id)arg1 interruptionSuppression:(unsigned long long)arg2 ;
@end

