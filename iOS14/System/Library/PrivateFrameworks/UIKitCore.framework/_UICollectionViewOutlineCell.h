/*
* Generated on Thursday, January 14, 2021 at 2:20:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/_UICollectionViewListCell.h>

@class UIView, UILabel, UIImageView, _UICollectionViewOutlineCellDisclosureConfiguration;

@interface _UICollectionViewOutlineCell : _UICollectionViewListCell {

	BOOL _automaticallyTogglesExpansionState;
	BOOL _selectionFollowsTintColor;
	UIView* _outlineContentView;
	UILabel* _textLabel;
	UIImageView* _imageView;
	_UICollectionViewOutlineCellDisclosureConfiguration* _disclosureConfiguration;
	double _highlightCornerRadius;

}

@property (nonatomic,retain) id identifier; 
@property (nonatomic,retain) UIView * outlineContentView;                                                              //@synthesize outlineContentView=_outlineContentView - In the implementation block
@property (nonatomic,readonly) UILabel * textLabel;                                                                    //@synthesize textLabel=_textLabel - In the implementation block
@property (nonatomic,readonly) UIImageView * imageView;                                                                //@synthesize imageView=_imageView - In the implementation block
@property (assign,nonatomic) BOOL automaticallyTogglesExpansionState;                                                  //@synthesize automaticallyTogglesExpansionState=_automaticallyTogglesExpansionState - In the implementation block
@property (nonatomic,copy) _UICollectionViewOutlineCellDisclosureConfiguration * disclosureConfiguration;              //@synthesize disclosureConfiguration=_disclosureConfiguration - In the implementation block
@property (nonatomic,copy) id disclosureWasTappedHandler; 
@property (assign,nonatomic) double highlightCornerRadius;                                                             //@synthesize highlightCornerRadius=_highlightCornerRadius - In the implementation block
@property (assign,nonatomic) BOOL selectionFollowsTintColor;                                                           //@synthesize selectionFollowsTintColor=_selectionFollowsTintColor - In the implementation block
-(UIImageView *)imageView;
-(void)setAutomaticallyTogglesExpansionState:(BOOL)arg1 ;
-(void)setIdentifier:(id)arg1 ;
-(id)identifier;
-(UIView *)outlineContentView;
-(UILabel *)textLabel;
-(void)setOutlineContentView:(UIView *)arg1 ;
-(BOOL)automaticallyTogglesExpansionState;
-(_UICollectionViewOutlineCellDisclosureConfiguration *)disclosureConfiguration;
-(void)setDisclosureConfiguration:(_UICollectionViewOutlineCellDisclosureConfiguration *)arg1 ;
-(double)highlightCornerRadius;
-(void)setHighlightCornerRadius:(double)arg1 ;
-(BOOL)selectionFollowsTintColor;
-(void)setSelectionFollowsTintColor:(BOOL)arg1 ;
@end

