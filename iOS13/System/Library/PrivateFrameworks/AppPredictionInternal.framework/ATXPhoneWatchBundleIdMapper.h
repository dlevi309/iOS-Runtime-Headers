/*
* Generated on Monday, March 1, 2021 at 2:33:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
*/


@class NSSet, NSDictionary, LSApplicationProxy;

@interface ATXPhoneWatchBundleIdMapper : NSObject {

	NSSet* _blackListedWatchApps;
	NSSet* _sameBundleIdApps;
	NSDictionary* _phoneToWatch;
	NSDictionary* _watchToPhone;
	LSApplicationProxy* _mockApplicationProxy;

}

@property (nonatomic,retain) LSApplicationProxy * mockApplicationProxy;              //@synthesize mockApplicationProxy=_mockApplicationProxy - In the implementation block
-(id)init;
-(id)watchBundleIdForPhoneBundleId:(id)arg1 ;
-(id)phoneBundleIdForWatchBundleId:(id)arg1 ;
-(id)initWithAssetClass:(Class)arg1 ;
-(LSApplicationProxy *)mockApplicationProxy;
-(void)setMockApplicationProxy:(LSApplicationProxy *)arg1 ;
@end

