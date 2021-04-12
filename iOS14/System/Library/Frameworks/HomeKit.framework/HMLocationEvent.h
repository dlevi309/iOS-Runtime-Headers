/*
* Generated on Thursday, January 14, 2021 at 2:22:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
*/

#import <HomeKit/HomeKit-Structs.h>
#import <HomeKit/HMEvent.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class CLRegion, HMFLocationAuthorization;

@interface HMLocationEvent : HMEvent <NSSecureCoding, NSCopying, NSMutableCopying> {

	int _locationAuthorization;
	CLRegion* _region;
	HMFLocationAuthorization* _authorization;

}

@property (readonly) HMFLocationAuthorization * authorization;              //@synthesize authorization=_authorization - In the implementation block
@property (assign,nonatomic) int locationAuthorization;                     //@synthesize locationAuthorization=_locationAuthorization - In the implementation block
@property (nonatomic,retain) CLRegion * region;                             //@synthesize region=_region - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)createWithDictionary:(id)arg1 home:(id)arg2 ;
-(CLRegion *)region;
-(HMFLocationAuthorization *)authorization;
-(void)setRegion:(CLRegion *)arg1 ;
-(void)setLocationAuthorization:(int)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)initWithRegion:(id)arg1 ;
-(int)locationAuthorization;
-(id)initWithDict:(id)arg1 region:(id)arg2 ;
-(void)__configureWithContext:(id)arg1 eventTrigger:(id)arg2 ;
-(void)_updateRegion:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)_serializeForAdd;
-(void)_retrieveLocationEvent;
-(void)updateRegion:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_handleEventUpdatedNotification:(id)arg1 ;
-(void)__locationAuthorizationUpdated:(id)arg1 ;
-(BOOL)_mergeWithNewObject:(id)arg1 operations:(id)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
@end

