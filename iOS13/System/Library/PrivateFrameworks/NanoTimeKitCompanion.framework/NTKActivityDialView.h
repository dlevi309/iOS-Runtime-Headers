/*
* Generated on Monday, March 1, 2021 at 2:35:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <UIKitCore/UIView.h>

@class NTKFaceColorScheme, CLKDevice, NSArray;

@interface NTKActivityDialView : UIView {

	BOOL _shouldRasterize;
	NTKFaceColorScheme* _colorScheme;
	double _zoomFraction;
	CLKDevice* _device;
	NSArray* _segments;

}

@property (nonatomic,readonly) CLKDevice * device;                          //@synthesize device=_device - In the implementation block
@property (nonatomic,readonly) NSArray * segments;                          //@synthesize segments=_segments - In the implementation block
@property (nonatomic,retain) NTKFaceColorScheme * colorScheme;              //@synthesize colorScheme=_colorScheme - In the implementation block
@property (assign,nonatomic) BOOL shouldRasterize;                          //@synthesize shouldRasterize=_shouldRasterize - In the implementation block
@property (assign,nonatomic) double zoomFraction;                           //@synthesize zoomFraction=_zoomFraction - In the implementation block
-(CLKDevice *)device;
-(void)setShouldRasterize:(BOOL)arg1 ;
-(BOOL)shouldRasterize;
-(NSArray *)segments;
-(void)setZoomFraction:(double)arg1 ;
-(double)zoomFraction;
-(NTKFaceColorScheme *)colorScheme;
-(void)setColorScheme:(NTKFaceColorScheme *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 forDevice:(id)arg2 ;
-(double)_handAlphaForEditMode:(long long)arg1 ;
-(void)applyTransitionFromScheme:(id)arg1 toScheme:(id)arg2 fraction:(double)arg3 ;
-(double)_segmentAlphaForEditMode:(long long)arg1 ;
@end

