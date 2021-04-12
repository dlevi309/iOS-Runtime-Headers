/*
* Generated on Monday, March 1, 2021 at 2:35:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NTKRichComplicationView.h>

@protocol NTKRichComplicationRectangularBaseViewDelegate;
@interface NTKRichComplicationRectangularBaseView : NTKRichComplicationView {

	id<NTKRichComplicationRectangularBaseViewDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<NTKRichComplicationRectangularBaseViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)viewWithLegacyComplicationType:(unsigned long long)arg1 ;
+(void)updateCustomDataAnimationFromEarlierView:(id)arg1 laterView:(id)arg2 isForward:(BOOL)arg3 animationType:(unsigned long long)arg4 animationDuration:(double)arg5 animationFraction:(float)arg6 ;
-(id)init;
-(id<NTKRichComplicationRectangularBaseViewDelegate>)delegate;
-(void)setDelegate:(id<NTKRichComplicationRectangularBaseViewDelegate>)arg1 ;
-(id)_createAndAddColoringLabelWithFontSize:(double)arg1 weight:(double)arg2 usesTextProviderTintColoring:(BOOL)arg3 ;
-(id)initWithFamily:(long long)arg1 ;
-(void)_transitToHighlightState:(BOOL)arg1 fraction:(double)arg2 ;
@end

