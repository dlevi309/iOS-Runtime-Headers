/*
* Generated on Thursday, January 14, 2021 at 2:22:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
*/

#import <HomeKit/HMAccessoryProfile.h>
#import <libobjc.A.dylib/HMFLogging.h>

@protocol HMLightProfileDelegate;
@class NSString, _HMLightProfile, HMLightProfileSettings;

@interface HMLightProfile : HMAccessoryProfile <HMFLogging> {

	id<HMLightProfileDelegate> _delegate;
	NSString* _logIdentifier;

}

@property (readonly) NSString * logIdentifier;                       //@synthesize logIdentifier=_logIdentifier - In the implementation block
@property (readonly) _HMLightProfile * lightProfile; 
@property (__weak) id<HMLightProfileDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) HMLightProfileSettings * settings; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(id)initWithLightProfile:(id)arg1 ;
-(id<HMLightProfileDelegate>)delegate;
-(NSString *)logIdentifier;
-(void)setDelegate:(id<HMLightProfileDelegate>)arg1 ;
-(HMLightProfileSettings *)settings;
-(BOOL)_mergeWithNewObject:(id)arg1 operations:(id)arg2 ;
-(_HMLightProfile *)lightProfile;
-(void)updateSettings:(id)arg1 withReason:(id)arg2 ;
-(void)setNaturalLightingEnabled:(BOOL)arg1 shouldRetryOnFailure:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)setNaturalLightingEnabled:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)fetchNaturalLightColorTemperatureForBrightness:(long long)arg1 completion:(/*^block*/id)arg2 ;
-(void)fetchSettingsWithCompletion:(/*^block*/id)arg1 ;
@end

