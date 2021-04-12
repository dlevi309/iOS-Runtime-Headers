/*
* Generated on Thursday, January 14, 2021 at 2:22:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/


#import <PhotosUICore/PhotosUICore-Structs.h>
@interface PXTimelineCrop : NSObject {

	double _cropScore;
	CGRect _cropRect;

}

@property (nonatomic,readonly) double cropScore;              //@synthesize cropScore=_cropScore - In the implementation block
@property (nonatomic,readonly) CGRect cropRect;               //@synthesize cropRect=_cropRect - In the implementation block
+(id)cropForAsset:(id)arg1 withTargetSize:(CGSize)arg2 ;
-(CGRect)cropRect;
-(double)cropScore;
-(id)initWithCrop:(CGRect)arg1 score:(double)arg2 ;
-(id)description;
@end

