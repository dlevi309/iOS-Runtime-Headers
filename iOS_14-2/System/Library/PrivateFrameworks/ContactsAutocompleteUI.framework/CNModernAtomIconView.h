/*
* Generated on Thursday, January 14, 2021 at 2:23:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(double)preferredWidth;
-(id)initWithFrame:(CGRect)arg1 ;
-(NUIContainerStackView *)stackView;
-(NSArray *)iconImages;
-(void)setIconImages:(NSArray *)arg1 ;
-(void)setDrawingOffset:(CGPoint)arg1 ;
-(double)iconPadding;
-(CGPoint)drawingOffset;
-(void)setIconPadding:(double)arg1 ;
-(void)setStackView:(NUIContainerStackView *)arg1 ;
@end

