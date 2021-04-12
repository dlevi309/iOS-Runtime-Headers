/*
* Generated on Thursday, January 14, 2021 at 2:22:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

@class PXImageRequester;


@protocol PXAssetTile <NSObject>
@property (nonatomic,retain) PXImageRequester * imageRequester; 
@property (assign,nonatomic) double cornerRadius; 
@required
-(PXImageRequester *)imageRequester;
-(void)setImageRequester:(id)arg1;
-(double)cornerRadius;
-(void)setCornerRadius:(double)arg1;

@end

