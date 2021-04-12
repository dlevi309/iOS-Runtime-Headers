/*
* Generated on Monday, March 1, 2021 at 2:32:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
*/

#import <HomeKit/HomeKit-Structs.h>
#import <HomeKit/HMTimeEvent.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@interface HMDurationEvent : HMTimeEvent <NSSecureCoding, NSCopying, NSMutableCopying> {

	double _duration;

}

@property (assign,nonatomic) double duration;              //@synthesize duration=_duration - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)createWithDictionary:(id)arg1 home:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(double)duration;
-(void)setOffset:(double)arg1 ;
-(void)setDuration:(double)arg1 ;
-(id)initWithDuration:(double)arg1 ;
-(id)_serializeForAdd;
-(void)_handleEventUpdatedNotification:(id)arg1 ;
-(id)initWithDict:(id)arg1 duration:(double)arg2 ;
-(void)_updateDuration:(double)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)updateDuration:(double)arg1 completionHandler:(/*^block*/id)arg2 ;
@end

