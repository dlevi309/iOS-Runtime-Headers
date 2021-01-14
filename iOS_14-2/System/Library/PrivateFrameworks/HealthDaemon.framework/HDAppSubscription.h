/*
* Generated on Thursday, January 14, 2021 at 2:25:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

@property (nonatomic,copy,readonly) NSString * bundleIdentifier;              //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,readonly) long long dataCode;                            //@synthesize dataCode=_dataCode - In the implementation block
@property (nonatomic,copy,readonly) HKObjectType * objectType; 
@property (assign,nonatomic) unsigned long long updateFrequency;              //@synthesize updateFrequency=_updateFrequency - In the implementation block
@property (assign,nonatomic) unsigned long long lastAnchor;                   //@synthesize lastAnchor=_lastAnchor - In the implementation block
@property (assign,nonatomic) long long lastAckTime;                           //@synthesize lastAckTime=_lastAckTime - In the implementation block
@property (assign,nonatomic) long long launchTimeHysteresis;                  //@synthesize launchTimeHysteresis=_launchTimeHysteresis - In the implementation block
-(id)init;
-(HKObjectType *)objectType;
-(unsigned long long)lastAnchor;
-(NSString *)bundleIdentifier;
-(void)setLastAnchor:(unsigned long long)arg1 ;
-(long long)dataCode;
-(id)initWithBundleIdentifier:(id)arg1 dataCode:(long long)arg2 ;
-(void)setUpdateFrequency:(unsigned long long)arg1 ;
-(void)setLastAckTime:(long long)arg1 ;
-(void)setLaunchTimeHysteresis:(long long)arg1 ;
-(unsigned long long)updateFrequency;
-(long long)lastAckTime;
-(long long)launchTimeHysteresis;
@end

