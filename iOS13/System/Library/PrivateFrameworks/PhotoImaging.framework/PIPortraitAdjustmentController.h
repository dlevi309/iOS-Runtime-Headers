/*
* Generated on Monday, March 1, 2021 at 2:35:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
*/

#import <PhotoImaging/PIAdjustmentController.h>

@class NSDictionary, NSString;

@interface PIPortraitAdjustmentController : PIAdjustmentController {

	long long _version;

}

@property (nonatomic,copy) NSDictionary * portraitInfo; 
@property (nonatomic,copy) NSString * kind; 
@property (assign,nonatomic) long long version;                      //@synthesize version=_version - In the implementation block
@property (assign,nonatomic) double strength; 
+(id)strengthKey;
+(id)kindKey;
+(id)portraitInfoKey;
-(long long)version;
-(void)setVersion:(long long)arg1 ;
-(NSString *)kind;
-(void)setKind:(NSString *)arg1 ;
-(void)setStrength:(double)arg1 ;
-(double)strength;
-(NSDictionary *)portraitInfo;
-(void)setPortraitInfo:(NSDictionary *)arg1 ;
-(BOOL)canRenderPortraitEffect;
-(id)initWithAdjustment:(id)arg1 ;
@end

