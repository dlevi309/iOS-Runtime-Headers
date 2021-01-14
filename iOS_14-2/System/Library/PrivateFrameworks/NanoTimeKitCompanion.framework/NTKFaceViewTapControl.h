/*
* Generated on Thursday, January 14, 2021 at 2:26:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setHighlighted:(BOOL)arg1 ;
-(UIImageView *)highlightImageView;
-(BOOL)shouldCancelTouchesInScrollview;
-(void)setHighlightImageView:(UIImageView *)arg1 ;
@end

