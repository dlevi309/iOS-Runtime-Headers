/*
* Generated on Monday, March 1, 2021 at 2:33:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
*/

#import <CameraUI/CameraUI-Structs.h>
#import <UIKitCore/UIButton.h>

@interface CAMReviewButton : UIButton {

	unsigned long long __numberOfCaptures;

}

@property (assign,setter=_setNumberOfCaptures:,nonatomic) unsigned long long _numberOfCaptures;              //@synthesize _numberOfCaptures=__numberOfCaptures - In the implementation block
+(id)_sharedNumberOfCapturesFormatter;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)_localizedTitleForNumberOfCaptures;
-(void)_commonCAMReviewButtonInitialization;
-(unsigned long long)_numberOfCaptures;
-(void)_setNumberOfCaptures:(unsigned long long)arg1 ;
@end

