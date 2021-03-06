/*
* Generated on Thursday, January 14, 2021 at 2:21:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UserActivity.framework/UserActivity
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSUUID, NSDictionary, NSString, NSDate;

@interface UABestAppSuggestion : NSObject <NSSecureCoding> {

	BOOL _isActive;
	unsigned long long _type;
	NSUUID* _uniqueIdentifier;
	NSDictionary* _options;
	NSString* _bundleIdentifier;
	NSString* _activityType;
	NSString* _dynamicIdentifier;
	NSDate* _lastUpdateTime;
	double _confidence;
	NSString* _originatingDeviceIdentifier;
	NSString* _originatingDeviceName;
	NSString* _originatingDeviceType;
	NSDate* _lastActiveTime;

}

@property (copy,readonly) NSString * userActivityTypeIdentifier; 
@property (copy) NSUUID * uniqueIdentifier;                                    //@synthesize uniqueIdentifier=_uniqueIdentifier - In the implementation block
@property (copy) NSString * activityType;                                      //@synthesize activityType=_activityType - In the implementation block
@property (readonly) unsigned long long type;                                  //@synthesize type=_type - In the implementation block
@property (copy,readonly) NSString * bundleIdentifier;                         //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (copy,readonly) NSString * dynamicIdentifier;                        //@synthesize dynamicIdentifier=_dynamicIdentifier - In the implementation block
@property (copy,readonly) NSDate * lastUpdateTime;                             //@synthesize lastUpdateTime=_lastUpdateTime - In the implementation block
@property (copy,readonly) NSDate * lastActiveTime;                             //@synthesize lastActiveTime=_lastActiveTime - In the implementation block
@property (copy,readonly) NSDate * when; 
@property (copy,readonly) NSDictionary * options;                              //@synthesize options=_options - In the implementation block
@property (readonly) double confidence;                                        //@synthesize confidence=_confidence - In the implementation block
@property (copy,readonly) NSString * originatingDeviceIdentifier;              //@synthesize originatingDeviceIdentifier=_originatingDeviceIdentifier - In the implementation block
@property (copy,readonly) NSString * originatingDeviceName;                    //@synthesize originatingDeviceName=_originatingDeviceName - In the implementation block
@property (copy,readonly) NSString * originatingDeviceType;                    //@synthesize originatingDeviceType=_originatingDeviceType - In the implementation block
@property (readonly) BOOL isActive;                                            //@synthesize isActive=_isActive - In the implementation block
+(BOOL)supportsSecureCoding;
-(double)confidence;
-(void)setUniqueIdentifier:(NSUUID *)arg1 ;
-(void)setActivityType:(NSString *)arg1 ;
-(id)initWithBundleIdentifier:(id)arg1 uuid:(id)arg2 activityType:(id)arg3 dynamicIdentifier:(id)arg4 lastUpdateTime:(id)arg5 lastActiveTime:(id)arg6 type:(unsigned long long)arg7 deviceName:(id)arg8 deviceIdentifier:(id)arg9 deviceType:(id)arg10 options:(id)arg11 isActive:(BOOL)arg12 ;
-(NSString *)activityType;
-(NSDate *)lastUpdateTime;
-(BOOL)isActive;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)bundleIdentifier;
-(NSUUID *)uniqueIdentifier;
-(id)debugDescription;
-(NSDictionary *)options;
-(NSString *)dynamicIdentifier;
-(id)description;
-(unsigned long long)type;
-(NSString *)originatingDeviceName;
-(NSString *)originatingDeviceIdentifier;
-(NSString *)originatingDeviceType;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(NSDate *)when;
-(NSDate *)lastActiveTime;
-(NSString *)userActivityTypeIdentifier;
-(BOOL)isEqual:(id)arg1 ;
@end

