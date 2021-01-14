/*
* Generated on Thursday, January 14, 2021 at 2:28:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideosUICore.framework/VideosUICore
*/


@class NSDictionary;

@interface VUIFeatureManager : NSObject {

	NSDictionary* _features;

}

@property (nonatomic,retain) NSDictionary * features;              //@synthesize features=_features - In the implementation block
+(id)sharedInstance;
-(id)init;
-(NSDictionary *)features;
-(void)setFeatures:(NSDictionary *)arg1 ;
-(BOOL)isFeatureEnabled:(id)arg1 ;
-(id)osFeatureFlagsJSON;
-(void)setFeatureValue:(BOOL)arg1 forFeature:(id)arg2 ;
-(id)_allFeatures;
-(id)availableFeatures;
@end

