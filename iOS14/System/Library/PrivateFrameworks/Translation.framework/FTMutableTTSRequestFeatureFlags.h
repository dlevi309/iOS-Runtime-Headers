/*
* Generated on Thursday, January 14, 2021 at 2:23:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Translation.framework/Translation
*/

#import <Translation/Translation-Structs.h>
#import <Translation/FTTTSRequestFeatureFlags.h>

@interface FTMutableTTSRequestFeatureFlags : FTTTSRequestFeatureFlags

@property (assign,nonatomic) BOOL fe_feature; 
@property (assign,nonatomic) BOOL fe_feature_only; 
@property (assign,nonatomic) BOOL disable_prompts; 
-(id)init;
-(BOOL)fe_feature;
-(void)setFe_feature:(BOOL)arg1 ;
-(BOOL)fe_feature_only;
-(void)setFe_feature_only:(BOOL)arg1 ;
-(BOOL)disable_prompts;
-(void)setDisable_prompts:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

