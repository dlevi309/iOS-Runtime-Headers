/*
* Generated on Thursday, January 14, 2021 at 2:25:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFLogging.h>

@protocol HMDLightProfileDataSource;
@class HMDHome, NSString;

@interface HMDHomeNaturalLightingCurveWriter : HMFObject <HMFLogging> {

	HMDHome* _home;
	id<HMDLightProfileDataSource> _dataSource;

}

@property (__weak,readonly) HMDHome * home;                                 //@synthesize home=_home - In the implementation block
@property (readonly) id<HMDLightProfileDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (copy,readonly) NSString * logIdentifier; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(id<HMDLightProfileDataSource>)dataSource;
-(NSString *)logIdentifier;
-(id)initWithHome:(id)arg1 ;
-(HMDHome *)home;
-(void)setNaturalLightingEnabled:(BOOL)arg1 forLightProfiles:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)initWithHome:(id)arg1 dataSource:(id)arg2 ;
@end

