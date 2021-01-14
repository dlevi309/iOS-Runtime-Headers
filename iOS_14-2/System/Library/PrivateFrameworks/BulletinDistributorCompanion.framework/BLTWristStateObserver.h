/*
* Generated on Thursday, January 14, 2021 at 2:27:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
*/

#import <libobjc.A.dylib/MCProfileConnectionObserver.h>

@class NSString;

@interface BLTWristStateObserver : NSObject <MCProfileConnectionObserver> {

	BOOL _isWristDetectDisabled;

}

@property (nonatomic,readonly) BOOL isWristDetectDisabled;              //@synthesize isWristDetectDisabled=_isWristDetectDisabled - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)profileConnectionDidReceiveRestrictionChangedNotification:(id)arg1 userInfo:(id)arg2 ;
-(id)init;
-(void)dealloc;
-(void)_updateWristDetectSetting;
-(BOOL)_wristDetectionEnabledRestriction;
-(BOOL)_wristDetectionDisabledPreference;
-(BOOL)_isWristDetectionDisabled;
-(BOOL)isWristDetectDisabled;
@end

