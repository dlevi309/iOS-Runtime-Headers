/*
* Generated on Thursday, January 14, 2021 at 2:20:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>

@class NSArray, UIFont, NSString, UIColor, NSIndexPath, UIView;

@interface UIKeyboardEmojiWellView : UIView {

	BOOL _selected;
	BOOL _activeSelection;
	NSArray* _compositeImageRepresentation;
	UIFont* _labelFont;
	NSString* _stringRepresentation;
	UIColor* _selectionBackgroundColor;
	NSIndexPath* _associatedIndexPath;
	UIView* _wellContentView;
	UIView* _backgroundView;
	CGSize _compositeImageSize;

}

@property (nonatomic,retain) UIView * wellContentView;                                   //@synthesize wellContentView=_wellContentView - In the implementation block
@property (nonatomic,retain) UIView * backgroundView;                                    //@synthesize backgroundView=_backgroundView - In the implementation block
@property (assign,nonatomic) CGSize compositeImageSize;                                  //@synthesize compositeImageSize=_compositeImageSize - In the implementation block
@property (nonatomic,retain) NSArray * compositeImageRepresentation;                     //@synthesize compositeImageRepresentation=_compositeImageRepresentation - In the implementation block
@property (nonatomic,retain) UIFont * labelFont;                                         //@synthesize labelFont=_labelFont - In the implementation block
@property (nonatomic,retain) NSString * stringRepresentation;                            //@synthesize stringRepresentation=_stringRepresentation - In the implementation block
@property (assign,getter=isSelected,nonatomic) BOOL selected;                            //@synthesize selected=_selected - In the implementation block
@property (assign,getter=isActiveSelection,nonatomic) BOOL activeSelection;              //@synthesize activeSelection=_activeSelection - In the implementation block
@property (nonatomic,retain) UIColor * selectionBackgroundColor;                         //@synthesize selectionBackgroundColor=_selectionBackgroundColor - In the implementation block
@property (nonatomic,retain) NSIndexPath * associatedIndexPath;                          //@synthesize associatedIndexPath=_associatedIndexPath - In the implementation block
-(UIFont *)labelFont;
-(NSString *)stringRepresentation;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setLabelFont:(UIFont *)arg1 ;
-(void)setBackgroundView:(UIView *)arg1 ;
-(UIView *)backgroundView;
-(BOOL)isSelected;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)setSelected:(BOOL)arg1 ;
-(void)layoutSubviews;
-(UIView *)wellContentView;
-(CGSize)compositeImageSize;
-(void)setWellContentView:(UIView *)arg1 ;
-(void)setCompositeImageSize:(CGSize)arg1 ;
-(void)setSelectionBackgroundColor:(UIColor *)arg1 ;
-(void)setCompositeImageRepresentation:(NSArray *)arg1 ;
-(void)setStringRepresentation:(NSString *)arg1 ;
-(void)setActiveSelection:(BOOL)arg1 ;
-(NSArray *)compositeImageRepresentation;
-(BOOL)isActiveSelection;
-(UIColor *)selectionBackgroundColor;
-(NSIndexPath *)associatedIndexPath;
-(void)setAssociatedIndexPath:(NSIndexPath *)arg1 ;
@end

