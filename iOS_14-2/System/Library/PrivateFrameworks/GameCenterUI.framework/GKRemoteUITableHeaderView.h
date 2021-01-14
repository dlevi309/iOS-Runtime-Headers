/*
* Generated on Thursday, January 14, 2021 at 2:23:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
*/

#import <GameCenterUI/GameCenterUI-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/RUIPageAccessory.h>

@protocol GKRemoteUIAuxiliaryViewDelegate;
@class GKLabel, GKButton, NSDictionary, NSArray, NSString;

@interface GKRemoteUITableHeaderView : UIView <RUIPageAccessory> {

	int _layoutStyle;
	id<GKRemoteUIAuxiliaryViewDelegate> _delegate;
	double _height;
	GKLabel* _label;
	GKLabel* _subLabel;
	GKButton* _button;
	NSDictionary* _attributes;
	NSArray* _replaceableConstraints;

}

@property (assign,nonatomic) double height;                                                    //@synthesize height=_height - In the implementation block
@property (nonatomic,retain) GKLabel * label;                                                  //@synthesize label=_label - In the implementation block
@property (nonatomic,retain) GKLabel * subLabel;                                               //@synthesize subLabel=_subLabel - In the implementation block
@property (nonatomic,retain) GKButton * button;                                                //@synthesize button=_button - In the implementation block
@property (nonatomic,retain) NSDictionary * attributes;                                        //@synthesize attributes=_attributes - In the implementation block
@property (nonatomic,retain) NSArray * replaceableConstraints;                                 //@synthesize replaceableConstraints=_replaceableConstraints - In the implementation block
@property (assign,nonatomic) int layoutStyle;                                                  //@synthesize layoutStyle=_layoutStyle - In the implementation block
@property (assign,nonatomic,__weak) id<GKRemoteUIAuxiliaryViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setHeight:(double)arg1 ;
-(void)setLayoutStyle:(int)arg1 ;
-(GKButton *)button;
-(void)buttonTapped:(id)arg1 ;
-(CGSize)intrinsicContentSize;
-(id<GKRemoteUIAuxiliaryViewDelegate>)delegate;
-(void)setAttributes:(NSDictionary *)arg1 ;
-(int)layoutStyle;
-(void)setButton:(GKButton *)arg1 ;
-(double)height;
-(id)initWithAttributes:(id)arg1 ;
-(double)leftMargin;
-(NSDictionary *)attributes;
-(void)createLabelWithAttributes:(id)arg1 ;
-(void)createSubLabelWithAttributes:(id)arg1 ;
-(void)applyConstraints;
-(double)labelBaselineOffset;
-(double)labelBaselineToSubLabelTopOffset;
-(double)labelBaselineToButtonBaselineOffset;
-(double)labelTopOffset;
-(void)setSubLabel:(GKLabel *)arg1 ;
-(void)setDelegate:(id<GKRemoteUIAuxiliaryViewDelegate>)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(GKLabel *)subLabel;
-(double)bottomMargin;
-(void)setLabel:(GKLabel *)arg1 ;
-(double)rightMargin;
-(void)createButtonWithAttributes:(id)arg1 ;
-(GKLabel *)label;
-(void)objectModelDidChange:(id)arg1 ;
-(NSArray *)replaceableConstraints;
-(void)setReplaceableConstraints:(NSArray *)arg1 ;
@end

