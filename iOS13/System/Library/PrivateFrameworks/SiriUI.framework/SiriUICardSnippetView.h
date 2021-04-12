/*
* Generated on Monday, March 1, 2021 at 2:33:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
*/

#import <SiriUI/SiriUI-Structs.h>
#import <UIKitCore/UIView.h>

@protocol SiriUICardSnippetViewDataSource, SiriUICardSnippetViewDelegate;
@class UIView, SiriUISashView;

@interface SiriUICardSnippetView : UIView {

	UIView* _cardView;
	SiriUISashView* _sashView;
	id<SiriUICardSnippetViewDataSource> _dataSource;
	id<SiriUICardSnippetViewDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<SiriUICardSnippetViewDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (assign,nonatomic,__weak) id<SiriUICardSnippetViewDelegate> delegate;                  //@synthesize delegate=_delegate - In the implementation block
-(id<SiriUICardSnippetViewDelegate>)delegate;
-(void)setDelegate:(id<SiriUICardSnippetViewDelegate>)arg1 ;
-(id<SiriUICardSnippetViewDataSource>)dataSource;
-(void)setDataSource:(id<SiriUICardSnippetViewDataSource>)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)accessibilityIdentifier;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(void)reloadData;
-(void)setCardView:(id)arg1 ;
-(void)_sashViewRecognizedTapGestureWithGestureRecognizer:(id)arg1 ;
@end

