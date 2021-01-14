/*
* Generated on Thursday, January 14, 2021 at 2:21:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/ChatKit-Structs.h>
#import <UIKitCore/UIView.h>

@class NSArray;

@interface CKLargeTitleAccessoryView : UIView {

	NSArray* _accessoryButtons;

}

@property (nonatomic,retain) NSArray * accessoryButtons;              //@synthesize accessoryButtons=_accessoryButtons - In the implementation block
+(id)newComposeButton;
+(id)newOptionsButton;
-(CGSize)_intrinsicSizeWithinSize:(CGSize)arg1 ;
-(void)setAccessoryButtons:(NSArray *)arg1 ;
-(NSArray *)accessoryButtons;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
@end

