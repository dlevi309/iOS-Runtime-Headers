/*
* Generated on Thursday, January 14, 2021 at 2:21:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(id)supplementryViewKind;
+(id)reuseIdentifier;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setMaxHeight:(double)arg1 ;
-(void)layoutSubviews;
-(void)setSeperatorView:(UIView *)arg1 ;
-(UIView *)seperatorView;
-(double)minHeight;
-(double)maxHeight;
-(void)setMinHeight:(double)arg1 ;
@end

