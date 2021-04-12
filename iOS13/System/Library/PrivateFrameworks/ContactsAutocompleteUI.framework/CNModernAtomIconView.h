/*
* Generated on Monday, March 1, 2021 at 2:32:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ContactsAutocompleteUI.framework/ContactsAutocompleteUI
*/

#import <ContactsAutocompleteUI/ContactsAutocompleteUI-Structs.h>
#import <UIKitCore/UIView.h>

@class NSArray, NUIContainerStackView;

@interface CNModernAtomIconView : UIView {

	NSArray* _iconImages;
	NUIContainerStackView* _stackView;
	CGPoint _drawingOffset;

}

@property (nonatomic,retain) NSArray * iconImages;                           //@synthesize iconImages=_iconImages - In the implementation block
@property (nonatomic,retain) NUIContainerStackView * stackView;              //@synthesize stackView=_stackView - In the implementation block
@property (assign,nonatomic) double iconPadding; 
@property (assign,nonatomic) CGPoint drawingOffset;                          //@synthesize drawingOffset=_drawingOffset - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(NUIContainerStackView *)stackView;
-(NSArray *)iconImages;
-(double)preferredWidth;
-(void)setStackView:(NUIContainerStackView *)arg1 ;
-(void)setDrawingOffset:(CGPoint)arg1 ;
-(void)setIconPadding:(double)arg1 ;
-(void)setIconImages:(NSArray *)arg1 ;
-(CGPoint)drawingOffset;
-(double)iconPadding;
@end

