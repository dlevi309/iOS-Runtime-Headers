/*
* Generated on Thursday, January 14, 2021 at 2:28:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
*/

#import <PhotoImaging/PIAdjustmentController.h>

@class NSString;

@interface PIEffectAdjustmentController : PIAdjustmentController

@property (nonatomic,copy) NSString * kind; 
@property (assign,nonatomic) long long version; 
@property (assign,nonatomic) double intensity; 
+(id)intensityKey;
+(id)versionKey;
+(id)kindKey;
-(double)intensity;
-(void)setIntensity:(double)arg1 ;
-(NSString *)kind;
-(void)setKind:(NSString *)arg1 ;
-(void)setVersion:(long long)arg1 ;
-(long long)version;
-(BOOL)isSettingEqual:(id)arg1 forKey:(id)arg2 ;
@end

