/*
* Generated on Thursday, January 14, 2021 at 2:23:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
*/

#import <GameCenterUI/GameCenterUI-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/RUIPageAccessory.h>
#import <libobjc.A.dylib/RemoteUITableFooter.h>

@protocol GKRemoteUIAuxiliaryViewDelegate;
@class GKButton, NSDictionary, NSArray, NSString;

@interface GKRemoteUITableFooterView : UIView <RUIPageAccessory, RemoteUITableFooter> {

	BOOL _pinToBottom;
	int _layoutStyle;
	id<GKRemoteUIAuxiliaryViewDelegate> _delegate;
	GKButton* _button;
	NSDictionary* _attributes;
	NSArray* _replaceableConstraints;
	double _buttonBaselineOffset;

}

@property (nonatomic,retain) GKButton * button;                                                //@synthesize button=_button - In the implementation block
@property (nonatomic,retain) NSDictionary * attributes;                                        //@synthesize attributes=_attributes - In the implementation block
@property (assign,nonatomic) BOOL pinToBottom;                                                 //@synthesize pinToBottom=_pinToBottom - In the implementation block
@property (nonatomic,retain) NSArray * replaceableConstraints;                                 //@synthesize replaceableConstraints=_replaceableConstraints - In the implementation block
@property (assign,nonatomic) double buttonBaselineOffset;                                      //@synthesize buttonBaselineOffset=_buttonBaselineOffset - In the implementation block
@property (assign,nonatomic) int layoutStyle;                                                  //@synthesize layoutStyle=_layoutStyle - In the implementation block
@property (assign,nonatomic,__weak) id<GKRemoteUIAuxiliaryViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setLayoutStyle:(int)arg1 ;
-(GKButton *)button;
-(void)buttonTapped:(id)arg1 ;
-(id<GKRemoteUIAuxiliaryViewDelegate>)delegate;
-(void)setAttributes:(NSDictionary *)arg1 ;
-(int)layoutStyle;
-(void)setButton:(GKButton *)arg1 ;
-(void)didMoveToSuperview;
-(id)initWithAttributes:(id)arg1 ;
-(NSDictionary *)attributes;
-(void)setDelegate:(id<GKRemoteUIAuxiliaryViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)createButtonWithAttributes:(id)arg1 ;
-(BOOL)pinToBottom;
-(double)buttonBaselineOffset;
-(void)adjustSizeToFillSuperview:(id)arg1 ;
-(void)objectModelDidChange:(id)arg1 ;
-(void)tableViewDidUpdateContentInset:(id)arg1 ;
-(double)footerHeightForWidth:(double)arg1 inTableView:(id)arg2 ;
-(void)setPinToBottom:(BOOL)arg1 ;
-(NSArray *)replaceableConstraints;
-(void)setReplaceableConstraints:(NSArray *)arg1 ;
-(void)setButtonBaselineOffset:(double)arg1 ;
@end

