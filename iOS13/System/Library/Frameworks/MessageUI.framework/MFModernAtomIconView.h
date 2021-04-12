/*
* Generated on Monday, March 1, 2021 at 2:32:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
*/

#import <MessageUI/MessageUI-Structs.h>
#import <UIKitCore/UIView.h>

@class NSArray;

@interface MFModernAtomIconView : UIView {

	NSArray* _iconImages;
	double _iconPadding;
	CGPoint _drawingOffset;

}

@property (nonatomic,retain) NSArray * iconImages;               //@synthesize iconImages=_iconImages - In the implementation block
@property (assign,nonatomic) double iconPadding;                 //@synthesize iconPadding=_iconPadding - In the implementation block
@property (assign,nonatomic) CGPoint drawingOffset;              //@synthesize drawingOffset=_drawingOffset - In the implementation block
-(void)drawRect:(CGRect)arg1 ;
-(NSArray *)iconImages;
-(double)preferredWidth;
-(void)setDrawingOffset:(CGPoint)arg1 ;
-(void)setIconPadding:(double)arg1 ;
-(void)setIconImages:(NSArray *)arg1 ;
-(CGPoint)drawingOffset;
-(double)iconPadding;
@end

