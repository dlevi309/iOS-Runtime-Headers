/*
* Generated on Thursday, January 14, 2021 at 2:28:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
*/

#import <PhotoImaging/PIAdjustmentController.h>

@class NSDictionary, NSString, NSNumber;

@interface PIPortraitAdjustmentController : PIAdjustmentController {

	long long _version;

}

@property (nonatomic,copy) NSDictionary * portraitInfo; 
@property (nonatomic,copy) NSString * kind; 
@property (assign,nonatomic) long long version;                       //@synthesize version=_version - In the implementation block
@property (assign,nonatomic) double strength; 
@property (nonatomic,copy) NSNumber * spillMatteAllowed; 
+(id)kindKey;
+(id)strengthKey;
+(id)spillMatteAllowedKey;
+(id)portraitInfoKey;
-(double)strength;
-(void)setStrength:(double)arg1 ;
-(NSNumber *)spillMatteAllowed;
-(BOOL)canRenderPortraitEffect;
-(NSString *)kind;
-(void)setKind:(NSString *)arg1 ;
-(void)setVersion:(long long)arg1 ;
-(long long)version;
-(NSDictionary *)portraitInfo;
-(void)setSpillMatteAllowed:(NSNumber *)arg1 ;
-(void)setPortraitInfo:(NSDictionary *)arg1 ;
-(id)initWithAdjustment:(id)arg1 ;
-(BOOL)isSettingEqual:(id)arg1 forKey:(id)arg2 ;
@end

