/*
* Generated on Monday, March 1, 2021 at 2:35:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <UIKitCore/UIControl.h>
#import <libobjc.A.dylib/NTKControl.h>

@class UIImageView, NSString;

@interface NTKFaceViewTapControl : UIControl <NTKControl> {

	UIImageView* _highlightImageView;

}

@property (nonatomic,retain) UIImageView * highlightImageView;              //@synthesize highlightImageView=_highlightImageView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(void)setHighlighted:(BOOL)arg1 ;
-(UIImageView *)highlightImageView;
-(BOOL)shouldCancelTouchesInScrollview;
-(void)setHighlightImageView:(UIImageView *)arg1 ;
@end

