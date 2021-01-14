/*
* Generated on Thursday, January 14, 2021 at 2:21:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithFrame:(CGRect)arg1 ;
-(UIImageView *)plusLView;
-(void)setPlusLView:(UIImageView *)arg1 ;
-(void)setPlusDView:(UIImageView *)arg1 ;
-(id)initWithLabelAccessoryType:(unsigned long long)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(UIImageView *)plusDView;
-(id)initWithCoder:(id)arg1 ;
@end

