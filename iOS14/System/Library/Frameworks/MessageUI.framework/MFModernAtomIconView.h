/*
* Generated on Thursday, January 14, 2021 at 2:23:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(double)preferredWidth;
-(void)drawRect:(CGRect)arg1 ;
-(NSArray *)iconImages;
-(void)setIconImages:(NSArray *)arg1 ;
-(void)setDrawingOffset:(CGPoint)arg1 ;
-(double)iconPadding;
-(CGPoint)drawingOffset;
-(void)setIconPadding:(double)arg1 ;
@end

