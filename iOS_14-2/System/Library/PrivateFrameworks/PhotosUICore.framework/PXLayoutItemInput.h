/*
* Generated on Thursday, January 14, 2021 at 2:22:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/


@protocol PXLayoutItemInput <NSObject>
@property (nonatomic,readonly) CGSize size; 
@property (nonatomic,readonly) double weight; 
@property (nonatomic,readonly) CGAffineTransform transform; 
@property (nonatomic,readonly) CGPoint positionOffset; 
@property (nonatomic,readonly) CGRect preferredCropRect; 
@property (nonatomic,readonly) CGRect acceptableCropRect; 
@required
-(double)weightUsingCriterion:(long long)arg1;
-(CGPoint)positionOffset;
-(CGRect)preferredCropRect;
-(CGSize)size;
-(double)weight;
-(CGAffineTransform)transform;
-(CGRect)acceptableCropRect;

@end

