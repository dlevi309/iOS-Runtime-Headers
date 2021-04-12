/*
* Generated on Thursday, January 14, 2021 at 2:22:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <libobjc.A.dylib/PXLayoutItemInput.h>

@class NSString;

@interface PXGPPTLayoutTesterItemInput : NSObject <PXLayoutItemInput> {

	CGSize _size;
	double _weight;
	CGRect _preferredCropRect;
	CGRect _acceptableCropRect;

}

@property (nonatomic,readonly) CGSize size; 
@property (nonatomic,readonly) double weight; 
@property (nonatomic,readonly) CGAffineTransform transform; 
@property (nonatomic,readonly) CGPoint positionOffset; 
@property (nonatomic,readonly) CGRect preferredCropRect; 
@property (nonatomic,readonly) CGRect acceptableCropRect; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)createItemInputsForCount:(long long)arg1 ;
-(double)weightUsingCriterion:(long long)arg1 ;
-(CGPoint)positionOffset;
-(CGRect)preferredCropRect;
-(CGSize)size;
-(double)weight;
-(CGAffineTransform)transform;
-(CGRect)acceptableCropRect;
@end

