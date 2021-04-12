/*
* Generated on Thursday, January 14, 2021 at 2:25:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setBounds:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setFrame:(CGRect)arg1 ;
-(SBSeparatorNubView *)nubView;
-(CGRect)nubRect;
-(unsigned long long)nubStyle;
-(void)setNubStyle:(unsigned long long)arg1 ;
-(void)_updateNubViewFrame;
-(void)setNubView:(SBSeparatorNubView *)arg1 ;
@end

