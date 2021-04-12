/*
* Generated on Thursday, January 14, 2021 at 2:24:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HomeUI-Structs.h>
#import <HomeUI/HUGridCellLayoutOptions.h>

@interface HUGridCameraCellLayoutOptions : HUGridCellLayoutOptions {

	double _headerViewHeight;
	double _cameraViewAspectRatio;
	double _headerHorizontalInnerMargins;
	double _cellHeight;

}

@property (assign,nonatomic) double headerViewHeight;                          //@synthesize headerViewHeight=_headerViewHeight - In the implementation block
@property (assign,nonatomic) double cameraViewAspectRatio;                     //@synthesize cameraViewAspectRatio=_cameraViewAspectRatio - In the implementation block
@property (assign,nonatomic) double headerHorizontalInnerMargins;              //@synthesize headerHorizontalInnerMargins=_headerHorizontalInnerMargins - In the implementation block
@property (assign,nonatomic) double cellHeight;                                //@synthesize cellHeight=_cellHeight - In the implementation block
+(id)defaultOptionsForCellSizeSubclass:(long long)arg1 ;
-(double)headerViewHeight;
-(void)setHeaderViewHeight:(double)arg1 ;
-(double)cellHeight;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setCellHeight:(double)arg1 ;
-(double)headerHorizontalInnerMargins;
-(double)cameraViewAspectRatio;
-(void)setCameraViewAspectRatio:(double)arg1 ;
-(void)setHeaderHorizontalInnerMargins:(double)arg1 ;
@end

