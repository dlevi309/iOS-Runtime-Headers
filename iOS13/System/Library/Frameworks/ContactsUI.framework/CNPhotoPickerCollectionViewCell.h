/*
* Generated on Monday, March 1, 2021 at 2:30:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/

#import <ContactsUI/ContactsUI-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>

@class NSUUID, CAShapeLayer, UILabel, UIView;

@interface CNPhotoPickerCollectionViewCell : UICollectionViewCell {

	BOOL _displaySelection;
	unsigned long long _cellStyle;
	NSUUID* _displaySessionUUID;
	CAShapeLayer* _selectionLayer;
	UILabel* _captionLabel;
	UIView* _containerView;
	UIView* _containerContentView;
	CAShapeLayer* _clippingLayer;

}

@property (nonatomic,retain) CAShapeLayer * selectionLayer;              //@synthesize selectionLayer=_selectionLayer - In the implementation block
@property (nonatomic,retain) UILabel * captionLabel;                     //@synthesize captionLabel=_captionLabel - In the implementation block
@property (nonatomic,retain) UIView * containerView;                     //@synthesize containerView=_containerView - In the implementation block
@property (nonatomic,retain) UIView * containerContentView;              //@synthesize containerContentView=_containerContentView - In the implementation block
@property (nonatomic,retain) CAShapeLayer * clippingLayer;               //@synthesize clippingLayer=_clippingLayer - In the implementation block
@property (assign,nonatomic) BOOL displaySelection;                      //@synthesize displaySelection=_displaySelection - In the implementation block
@property (assign,nonatomic) unsigned long long cellStyle;               //@synthesize cellStyle=_cellStyle - In the implementation block
@property (nonatomic,retain) NSUUID * displaySessionUUID;                //@synthesize displaySessionUUID=_displaySessionUUID - In the implementation block
+(id)cellIdentifier;
+(CGPathRef)containerClippingPathForBounds:(CGRect)arg1 forCellStyle:(unsigned long long)arg2 ;
+(CGPathRef)selectionPathInBounds:(CGRect)arg1 forCellStyle:(unsigned long long)arg2 ;
+(double)cornerRadiusForBounds:(CGRect)arg1 forCellStyle:(unsigned long long)arg2 ;
-(void)prepareForReuse;
-(id)initWithFrame:(CGRect)arg1 ;
-(UIView *)containerView;
-(void)setContainerView:(UIView *)arg1 ;
-(void)layoutSubviews;
-(void)setSelected:(BOOL)arg1 ;
-(UILabel *)captionLabel;
-(void)setCaptionLabel:(UILabel *)arg1 ;
-(unsigned long long)cellStyle;
-(void)setCellStyle:(unsigned long long)arg1 ;
-(void)updateWithView:(id)arg1 animation:(unsigned long long)arg2 ;
-(void)updateWithCaption:(id)arg1 ;
-(void)updateCaptionFrame;
-(void)clearContainerViewAnimated:(BOOL)arg1 withCompletion:(/*^block*/id)arg2 ;
-(BOOL)displaySelection;
-(void)setDisplaySelection:(BOOL)arg1 ;
-(NSUUID *)displaySessionUUID;
-(void)setDisplaySessionUUID:(NSUUID *)arg1 ;
-(CAShapeLayer *)selectionLayer;
-(void)setSelectionLayer:(CAShapeLayer *)arg1 ;
-(UIView *)containerContentView;
-(void)setContainerContentView:(UIView *)arg1 ;
-(CAShapeLayer *)clippingLayer;
-(void)setClippingLayer:(CAShapeLayer *)arg1 ;
@end

