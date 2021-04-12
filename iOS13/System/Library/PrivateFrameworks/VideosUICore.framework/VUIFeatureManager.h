/*
* Generated on Monday, March 1, 2021 at 2:35:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)setFeatureValue:(BOOL)arg1 forFeature:(id)arg2 ;
-(BOOL)isFeatureEnabled:(id)arg1 ;
-(id)_allFeatures;
-(id)availableFeatures;
@end

