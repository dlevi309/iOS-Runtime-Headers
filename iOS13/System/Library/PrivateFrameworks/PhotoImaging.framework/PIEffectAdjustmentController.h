/*
* Generated on Monday, March 1, 2021 at 2:35:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
*/

#import <PhotoImaging/PIAdjustmentController.h>

@class NSString;

@interface PIEffectAdjustmentController : PIAdjustmentController

@property (nonatomic,copy) NSString * kind; 
@property (assign,nonatomic) long long version; 
@property (assign,nonatomic) double intensity; 
+(id)versionKey;
+(id)intensityKey;
+(id)kindKey;
-(long long)version;
-(void)setVersion:(long long)arg1 ;
-(NSString *)kind;
-(void)setKind:(NSString *)arg1 ;
-(double)intensity;
-(void)setIntensity:(double)arg1 ;
-(BOOL)isSettingEqual:(id)arg1 forKey:(id)arg2 ;
@end

