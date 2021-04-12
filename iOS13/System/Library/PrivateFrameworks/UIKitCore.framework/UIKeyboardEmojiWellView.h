/*
* Generated on Monday, March 1, 2021 at 2:30:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>

@class NSArray, UIFont, NSString, UIColor, NSIndexPath, UIView;

@interface UIKeyboardEmojiWellView : UIView {

	BOOL _selected;
	NSArray* _compositeImageRepresentation;
	UIFont* _labelFont;
	NSString* _stringRepresentation;
	UIColor* _selectionBackgroundColor;
	NSIndexPath* _associatedIndexPath;
	UIView* _wellContentView;
	UIView* _backgroundView;
	CGSize _compositeImageSize;

}

@property (nonatomic,retain) UIView * wellContentView;                            //@synthesize wellContentView=_wellContentView - In the implementation block
@property (nonatomic,retain) UIView * backgroundView;                             //@synthesize backgroundView=_backgroundView - In the implementation block
@property (assign,nonatomic) CGSize compositeImageSize;                           //@synthesize compositeImageSize=_compositeImageSize - In the implementation block
@property (nonatomic,retain) NSArray * compositeImageRepresentation;              //@synthesize compositeImageRepresentation=_compositeImageRepresentation - In the implementation block
@property (nonatomic,retain) UIFont * labelFont;                                  //@synthesize labelFont=_labelFont - In the implementation block
@property (nonatomic,retain) NSString * stringRepresentation;                     //@synthesize stringRepresentation=_stringRepresentation - In the implementation block
@property (assign,getter=isSelected,nonatomic) BOOL selected;                     //@synthesize selected=_selected - In the implementation block
@property (nonatomic,retain) UIColor * selectionBackgroundColor;                  //@synthesize selectionBackgroundColor=_selectionBackgroundColor - In the implementation block
@property (nonatomic,retain) NSIndexPath * associatedIndexPath;                   //@synthesize associatedIndexPath=_associatedIndexPath - In the implementation block
-(NSString *)stringRepresentation;
-(BOOL)isSelected;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(UIView *)backgroundView;
-(void)layoutSubviews;
-(void)setSelected:(BOOL)arg1 ;
-(void)setBackgroundView:(UIView *)arg1 ;
-(void)setLabelFont:(UIFont *)arg1 ;
-(void)setCompositeImageSize:(CGSize)arg1 ;
-(CGSize)compositeImageSize;
-(void)setWellContentView:(UIView *)arg1 ;
-(UIFont *)labelFont;
-(UIView *)wellContentView;
-(void)setCompositeImageRepresentation:(NSArray *)arg1 ;
-(void)setStringRepresentation:(NSString *)arg1 ;
-(void)setSelectionBackgroundColor:(UIColor *)arg1 ;
-(NSArray *)compositeImageRepresentation;
-(UIColor *)selectionBackgroundColor;
-(NSIndexPath *)associatedIndexPath;
-(void)setAssociatedIndexPath:(NSIndexPath *)arg1 ;
@end

