/*
* Generated on Monday, March 1, 2021 at 2:31:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <UIKitCore/UIImageView.h>
#import <libobjc.A.dylib/CKActionMenuItemView.h>

@class UIColor, NSString;

@interface CKActionMenuItemImageView : UIImageView <CKActionMenuItemView> {

	UIColor* _unhighlightedTintColor;
	UIColor* _highlightedTintColor;
	BOOL _enabled;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setHighlighted:(BOOL)arg1 ;
-(void)setEnabled:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)updateTintColor;
-(id)initWithImage:(id)arg1 tintColor:(id)arg2 highlightedTintColor:(id)arg3 ;
@end

