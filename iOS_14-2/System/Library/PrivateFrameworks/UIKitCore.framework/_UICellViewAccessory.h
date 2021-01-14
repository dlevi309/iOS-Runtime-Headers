/*
* Generated on Thursday, January 14, 2021 at 2:20:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UICellAccessory.h>

@class UIView;

@interface _UICellViewAccessory : _UICellAccessory {

	long long _options;

}

@property (assign,nonatomic) long long options;              //@synthesize options=_options - In the implementation block
@property (nonatomic,retain) UIView * view; 
+(id)accessoryWithIdentifier:(id)arg1 view:(id)arg2 options:(long long)arg3 reservedLayoutWidth:(double)arg4 ;
+(id)accessoryWithIdentifier:(id)arg1 view:(id)arg2 options:(long long)arg3 ;
-(BOOL)alwaysNeedsLayout;
-(long long)options;
-(void)setOptions:(long long)arg1 ;
-(void)setView:(UIView *)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

