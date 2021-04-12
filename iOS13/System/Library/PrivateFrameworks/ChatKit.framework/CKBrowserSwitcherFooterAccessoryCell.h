/*
* Generated on Monday, March 1, 2021 at 2:31:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/ChatKit-Structs.h>
#import <UIKitCore/UICollectionReusableView.h>

@class UIView;

@interface CKBrowserSwitcherFooterAccessoryCell : UICollectionReusableView {

	double _minHeight;
	double _maxHeight;
	UIView* _seperatorView;

}

@property (nonatomic,retain) UIView * seperatorView;              //@synthesize seperatorView=_seperatorView - In the implementation block
@property (assign,nonatomic) double minHeight;                    //@synthesize minHeight=_minHeight - In the implementation block
@property (assign,nonatomic) double maxHeight;                    //@synthesize maxHeight=_maxHeight - In the implementation block
+(id)reuseIdentifier;
+(id)supplementryViewKind;
-(double)minHeight;
-(void)setMinHeight:(double)arg1 ;
-(double)maxHeight;
-(void)setMaxHeight:(double)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setSeperatorView:(UIView *)arg1 ;
-(UIView *)seperatorView;
@end

