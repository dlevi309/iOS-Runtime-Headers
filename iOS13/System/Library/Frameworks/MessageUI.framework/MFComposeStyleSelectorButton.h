/*
* Generated on Monday, March 1, 2021 at 2:32:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
*/

#import <MessageUI/MessageUI-Structs.h>
#import <UIKitCore/UIButton.h>

@interface MFComposeStyleSelectorButton : UIButton {

	long long _styleType;

}

@property (nonatomic,readonly) long long styleType;              //@synthesize styleType=_styleType - In the implementation block
+(id)buttonWithStyleType:(long long)arg1 target:(id)arg2 action:(SEL)arg3 ;
-(id)initWithCoder:(id)arg1 ;
-(void)_commonInit;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setSelected:(BOOL)arg1 ;
-(long long)styleType;
-(id)_imageForTextStyleType:(long long)arg1 ;
@end

