/*
* Generated on Monday, March 1, 2021 at 2:34:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/


@class NSString, HKObjectType;

@interface HDAppSubscription : NSObject {

	NSString* _bundleIdentifier;
	long long _dataCode;
	unsigned long long _updateFrequency;
	unsigned long long _lastAnchor;
	long long _lastAckTime;
	long long _launchTimeHysteresis;

}

@property (nonatomic,readonly) NSString * bundleIdentifier;                     //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,readonly) long long dataCode;                              //@synthesize dataCode=_dataCode - In the implementation block
@property (nonatomic,copy,readonly) HKObjectType * objectType; 
@property (nonatomic,readonly) unsigned long long updateFrequency;              //@synthesize updateFrequency=_updateFrequency - In the implementation block
@property (nonatomic,readonly) unsigned long long lastAnchor;                   //@synthesize lastAnchor=_lastAnchor - In the implementation block
@property (nonatomic,readonly) long long lastAckTime;                           //@synthesize lastAckTime=_lastAckTime - In the implementation block
@property (nonatomic,readonly) long long launchTimeHysteresis;                  //@synthesize launchTimeHysteresis=_launchTimeHysteresis - In the implementation block
-(id)init;
-(NSString *)bundleIdentifier;
-(HKObjectType *)objectType;
-(void)setLastAnchor:(unsigned long long)arg1 ;
-(unsigned long long)lastAnchor;
-(id)initWithBundleIdentifier:(id)arg1 dataCode:(long long)arg2 ;
-(void)setUpdateFrequency:(unsigned long long)arg1 ;
-(void)setLastAckTime:(long long)arg1 ;
-(void)setLaunchTimeHysteresis:(long long)arg1 ;
-(long long)dataCode;
-(unsigned long long)updateFrequency;
-(long long)lastAckTime;
-(long long)launchTimeHysteresis;
@end

