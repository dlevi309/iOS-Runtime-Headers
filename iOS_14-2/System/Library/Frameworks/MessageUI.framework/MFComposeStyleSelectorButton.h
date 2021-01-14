/*
* Generated on Thursday, January 14, 2021 at 2:23:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
*/

#import <MessageUI/MessageUI-Structs.h>
#import <UIKitCore/UIButton.h>

@interface MFComposeStyleSelectorButton : UIButton {

	long long _styleType;

}

@property (nonatomic,readonly) long long styleType;              //@synthesize styleType=_styleType - In the implementation block
+(id)buttonWithStyleType:(long long)arg1 target:(id)arg2 action:(SEL)arg3 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setSelected:(BOOL)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)styleType;
-(void)_commonInit;
-(id)_imageForTextStyleType:(long long)arg1 ;
@end

