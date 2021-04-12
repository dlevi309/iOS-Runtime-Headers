/*
* Generated on Thursday, January 14, 2021 at 2:22:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXSettings.h>

@interface PXOneUpSettings : PXSettings {

	double _maximumWhitespaceWidthForInitialZoomToFill;

}

@property (assign,nonatomic) double maximumWhitespaceWidthForInitialZoomToFill;              //@synthesize maximumWhitespaceWidthForInitialZoomToFill=_maximumWhitespaceWidthForInitialZoomToFill - In the implementation block
+(id)sharedInstance;
+(id)settingsControllerModule;
-(id)parentSettings;
-(void)setDefaultValues;
-(BOOL)shouldInitiallyZoomContentWithSize:(CGSize)arg1 toFillViewWithSize:(CGSize)arg2 ;
-(void)setMaximumWhitespaceWidthForInitialZoomToFill:(double)arg1 ;
-(double)maximumWhitespaceWidthForInitialZoomToFill;
-(double)zoomFactorForContentWithSize:(CGSize)arg1 toFillViewWithSize:(CGSize)arg2 ;
@end

