/*
* Generated on Monday, March 1, 2021 at 2:34:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MobileMailUI.framework/MobileMailUI
*/

#import <MobileMailUI/MobileMailUI-Structs.h>
#import <UIKitCore/UIButton.h>

@class NSString;

@interface MFConversationItemRoundButton : UIButton {

	NSString* _imageName;

}

@property (nonatomic,copy) NSString * imageName;              //@synthesize imageName=_imageName - In the implementation block
-(void)update;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setImageName:(NSString *)arg1 ;
-(NSString *)imageName;
-(void)_setImage;
@end

