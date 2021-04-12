/*
* Generated on Monday, March 1, 2021 at 2:35:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKitCore/UIView.h>

@class SBSeparatorNubView;

@interface SBSeparatorView : UIView {

	unsigned long long _nubStyle;
	SBSeparatorNubView* _nubView;

}

@property (nonatomic,retain) SBSeparatorNubView * nubView;              //@synthesize nubView=_nubView - In the implementation block
@property (assign,nonatomic) unsigned long long nubStyle;               //@synthesize nubStyle=_nubStyle - In the implementation block
@property (nonatomic,readonly) CGRect nubRect; 
-(void)setBounds:(CGRect)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(SBSeparatorNubView *)nubView;
-(void)setNubStyle:(unsigned long long)arg1 ;
-(CGRect)nubRect;
-(void)_updateNubViewFrame;
-(unsigned long long)nubStyle;
-(void)setNubView:(SBSeparatorNubView *)arg1 ;
@end

