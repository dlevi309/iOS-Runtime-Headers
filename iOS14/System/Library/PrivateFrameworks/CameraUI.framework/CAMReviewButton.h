/*
* Generated on Thursday, January 14, 2021 at 2:26:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
*/

#import <CameraUI/CameraUI-Structs.h>
#import <UIKitCore/UIButton.h>

@interface CAMReviewButton : UIButton {

	unsigned long long __numberOfCaptures;

}

@property (assign,setter=_setNumberOfCaptures:,nonatomic) unsigned long long _numberOfCaptures;              //@synthesize _numberOfCaptures=__numberOfCaptures - In the implementation block
+(id)_sharedNumberOfCapturesFormatter;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)_localizedTitleForNumberOfCaptures;
-(void)_commonCAMReviewButtonInitialization;
-(unsigned long long)_numberOfCaptures;
-(void)_setNumberOfCaptures:(unsigned long long)arg1 ;
@end

