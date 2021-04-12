/*
* Generated on Monday, March 1, 2021 at 2:30:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UICellAccessory.h>

@class UIView;

@interface UICellViewAccessory : UICellAccessory {

	long long _options;

}

@property (assign,nonatomic) long long options;              //@synthesize options=_options - In the implementation block
@property (nonatomic,retain) UIView * view; 
+(id)accessoryWithIdentifier:(id)arg1 view:(id)arg2 options:(long long)arg3 ;
-(BOOL)isEqual:(id)arg1 ;
-(long long)options;
-(void)setOptions:(long long)arg1 ;
-(void)setView:(UIView *)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(BOOL)requestsHuggingLayoutWidth;
-(BOOL)alwaysNeedsLayout;
@end

