/*
* Generated on Thursday, January 14, 2021 at 2:26:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(id)titleFont;
+(id)defaultTextColor;
+(id)reuseIdentifier;
-(UIView *)separatorView;
-(id)init;
-(id)initWithStyle:(long long)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)layoutSubviews;
-(double)rowHeight;
-(BOOL)showsSeparator;
-(void)setShowsSeparator:(BOOL)arg1 ;
-(void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)dealloc;
-(void)setSeparatorView:(UIView *)arg1 ;
-(void)_fontSizeDidChange;
-(BOOL)_visibleAtPoint:(CGPoint)arg1 ;
-(id)_fontForTextLabel;
-(id)_fontForDetailTextLabel;
-(BOOL)ignoresRTLCorrection;
-(void)setIgnoresRTLCorrection:(BOOL)arg1 ;
@end

