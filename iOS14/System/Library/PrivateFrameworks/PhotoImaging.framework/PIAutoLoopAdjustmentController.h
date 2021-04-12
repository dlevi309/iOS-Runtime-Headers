/*
* Generated on Thursday, January 14, 2021 at 2:28:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
*/

#import <PhotoImaging/PhotoImaging-Structs.h>
#import <PhotoImaging/PIAdjustmentController.h>

@class NSDictionary, NSString;

@interface PIAutoLoopAdjustmentController : PIAdjustmentController

@property (nonatomic,copy) NSDictionary * recipe; 
@property (nonatomic,copy) NSString * flavor; 
@property (nonatomic,readonly) CGRect stabilizedCropRect; 
+(id)flavorKey;
+(id)recipeKey;
-(NSDictionary *)recipe;
-(void)setRecipe:(NSDictionary *)arg1 ;
-(NSString *)flavor;
-(void)setFlavor:(NSString *)arg1 ;
-(CGRect)stabilizedCropRect;
@end

