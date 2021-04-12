/*
* Generated on Thursday, January 14, 2021 at 2:22:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PXSettings.h>

@interface PXRelatedSettings : PXSettings {

	BOOL _enableDiversity;
	BOOL _passKeyAsset;
	BOOL _simulateSlowFetches;
	long long _implementation;
	long long _limit;
	long long _preferredInitialNumberOfEntriesDisplayed;
	double _polaroidFadeDuration;

}

@property (assign,nonatomic) long long implementation;                                        //@synthesize implementation=_implementation - In the implementation block
@property (assign,nonatomic) long long limit;                                                 //@synthesize limit=_limit - In the implementation block
@property (assign,nonatomic) long long preferredInitialNumberOfEntriesDisplayed;              //@synthesize preferredInitialNumberOfEntriesDisplayed=_preferredInitialNumberOfEntriesDisplayed - In the implementation block
@property (assign,nonatomic) BOOL enableDiversity;                                            //@synthesize enableDiversity=_enableDiversity - In the implementation block
@property (assign,nonatomic) BOOL passKeyAsset;                                               //@synthesize passKeyAsset=_passKeyAsset - In the implementation block
@property (assign,nonatomic) BOOL simulateSlowFetches;                                        //@synthesize simulateSlowFetches=_simulateSlowFetches - In the implementation block
@property (assign,nonatomic) double polaroidFadeDuration;                                     //@synthesize polaroidFadeDuration=_polaroidFadeDuration - In the implementation block
+(id)sharedInstance;
+(id)settingsControllerModule;
-(id)parentSettings;
-(void)setLimit:(long long)arg1 ;
-(void)setDefaultValues;
-(long long)implementation;
-(double)polaroidFadeDuration;
-(long long)limit;
-(void)setPassKeyAsset:(BOOL)arg1 ;
-(BOOL)simulateSlowFetches;
-(void)setEnableDiversity:(BOOL)arg1 ;
-(void)setPreferredInitialNumberOfEntriesDisplayed:(long long)arg1 ;
-(void)setPolaroidFadeDuration:(double)arg1 ;
-(void)setImplementation:(long long)arg1 ;
-(BOOL)passKeyAsset;
-(BOOL)enableDiversity;
-(long long)preferredInitialNumberOfEntriesDisplayed;
-(void)setSimulateSlowFetches:(BOOL)arg1 ;
@end

