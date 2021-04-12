/*
* Generated on Monday, March 1, 2021 at 2:35:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

