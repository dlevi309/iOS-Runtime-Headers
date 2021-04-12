/*
* Generated on Monday, March 1, 2021 at 2:34:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(void)dealloc;
-(void)profileConnectionDidReceiveRestrictionChangedNotification:(id)arg1 userInfo:(id)arg2 ;
-(void)_updateWristDetectSetting;
-(BOOL)_wristDetectionEnabledRestriction;
-(BOOL)_wristDetectionDisabledPreference;
-(BOOL)_isWristDetectionDisabled;
-(BOOL)isWristDetectDisabled;
@end

