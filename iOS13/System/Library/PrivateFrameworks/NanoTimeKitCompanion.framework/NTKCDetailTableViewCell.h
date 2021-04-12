/*
* Generated on Monday, March 1, 2021 at 2:35:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <UIKitCore/UITableViewCell.h>

@class UIView;

@interface NTKCDetailTableViewCell : UITableViewCell {

	BOOL _showsSeparator;
	BOOL _ignoresRTLCorrection;
	UIView* _separatorView;

}

@property (nonatomic,retain) UIView * separatorView;                 //@synthesize separatorView=_separatorView - In the implementation block
@property (assign,nonatomic) BOOL ignoresRTLCorrection;              //@synthesize ignoresRTLCorrection=_ignoresRTLCorrection - In the implementation block
@property (assign,nonatomic) BOOL showsSeparator;                    //@synthesize showsSeparator=_showsSeparator - In the implementation block
+(id)defaultTextColor;
+(id)reuseIdentifier;
+(id)titleFont;
-(id)init;
-(void)dealloc;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 ;
-(UIView *)separatorView;
-(void)setShowsSeparator:(BOOL)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(double)rowHeight;
-(void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setSeparatorView:(UIView *)arg1 ;
-(BOOL)showsSeparator;
-(void)_fontSizeDidChange;
-(BOOL)_visibleAtPoint:(CGPoint)arg1 ;
-(id)_fontForTextLabel;
-(id)_fontForDetailTextLabel;
-(BOOL)ignoresRTLCorrection;
-(void)setIgnoresRTLCorrection:(BOOL)arg1 ;
@end

