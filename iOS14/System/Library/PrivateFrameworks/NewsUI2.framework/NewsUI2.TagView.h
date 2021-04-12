/*
* Generated on Thursday, January 14, 2021 at 2:24:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsUI2.framework/NewsUI2
*/

#import <NewsUI2/NewsUI2-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/TSAXCustomReorderMessaging.h>

@class NSString;

@interface NewsUI2.TagView : UIView <TSAXCustomReorderMessaging> {

	 titleLabel;
	 imageView;
	 subtitleLabel;
	 badgeView;
	 accessoryView;
	 _notificationSwitch;
	 _likeButton;
	 _dislikeButton;
	 isEditing;
	 keyCommandBlocks;
	 tsaxAccessibilityLabelForReordering;

}

@property (copy,nonatomic) NSString * tsaxAccessibilityLabelForReordering; 
@property (readonly,nonatomic) NSString * title; 
-(id)initWithFrame:(CGRect)arg1 ;
-(NSString *)tsaxAccessibilityLabelForReordering;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)title;
-(void)setTsaxAccessibilityLabelForReordering:(NSString *)arg1 ;
@end

