/*
* Generated on Monday, March 1, 2021 at 2:31:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/ChatKit-Structs.h>
#import <UIKitCore/UIView.h>

@class UIImageView;

@interface CKBrowserSelectionLabelAccessoryView : UIView {

	UIImageView* _plusLView;
	UIImageView* _plusDView;

}

@property (nonatomic,retain) UIImageView * plusLView;              //@synthesize plusLView=_plusLView - In the implementation block
@property (nonatomic,retain) UIImageView * plusDView;              //@synthesize plusDView=_plusDView - In the implementation block
-(id)initWithCoder:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)initWithLabelAccessoryType:(unsigned long long)arg1 ;
-(void)setPlusLView:(UIImageView *)arg1 ;
-(void)setPlusDView:(UIImageView *)arg1 ;
-(UIImageView *)plusLView;
-(UIImageView *)plusDView;
@end

