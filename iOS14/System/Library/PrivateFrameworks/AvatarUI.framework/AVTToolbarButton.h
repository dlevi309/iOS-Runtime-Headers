/*
* Generated on Thursday, January 14, 2021 at 2:23:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
*/

#import <UIKitCore/UIButton.h>

@class NSString;

@interface AVTToolbarButton : UIButton {

	BOOL _isDefault;
	NSString* _title;

}

@property (nonatomic,copy,readonly) NSString * title;              //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) BOOL isDefault;                     //@synthesize isDefault=_isDefault - In the implementation block
-(BOOL)isDefault;
-(id)initWithTitle:(id)arg1 isDefault:(BOOL)arg2 ;
-(NSString *)title;
@end

