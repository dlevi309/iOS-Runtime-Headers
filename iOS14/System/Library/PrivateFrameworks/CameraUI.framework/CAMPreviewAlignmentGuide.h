/*
* Generated on Thursday, January 14, 2021 at 2:26:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
*/

#import <CameraUI/CameraUI-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/CAMPreviewAlignmentModelObserver.h>

@class CAMPreviewAlignmentModel, CAMLevelCrosshair, NSString;

@interface CAMPreviewAlignmentGuide : UIView <CAMPreviewAlignmentModelObserver> {

	CAMPreviewAlignmentModel* _alignmentModel;
	CAMLevelCrosshair* __targetCrosshair;
	CAMLevelCrosshair* __guidanceCrosshair;

}

@property (nonatomic,readonly) CAMLevelCrosshair * _targetCrosshair;                   //@synthesize _targetCrosshair=__targetCrosshair - In the implementation block
@property (nonatomic,readonly) CAMLevelCrosshair * _guidanceCrosshair;                 //@synthesize _guidanceCrosshair=__guidanceCrosshair - In the implementation block
@property (nonatomic,readonly) CAMPreviewAlignmentModel * alignmentModel;              //@synthesize alignmentModel=_alignmentModel - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CAMPreviewAlignmentModel *)alignmentModel;
-(void)previewAlignmentModelDidChangeOpacity:(id)arg1 ;
-(void)previewAlignmentModelDidChangeAlignmentTransform:(id)arg1 ;
-(CAMLevelCrosshair *)_guidanceCrosshair;
-(CAMLevelCrosshair *)_targetCrosshair;
@end

