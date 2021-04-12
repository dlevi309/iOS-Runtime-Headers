/*
* Generated on Monday, March 1, 2021 at 2:34:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/VisionKit.framework/VisionKit
*/

#import <VisionKit/VisionKit-Structs.h>
#import <UIKitCore/UIButton.h>

@interface ICDocCamShutterButton : UIButton {

	BOOL _pseudoDisabled;

}

@property (assign,getter=isPseudoDisabled,nonatomic) BOOL pseudoDisabled;              //@synthesize pseudoDisabled=_pseudoDisabled - In the implementation block
-(id)initWithCoder:(id)arg1 ;
-(void)commonInit;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)outerRingImage;
-(id)innerCircle;
-(void)setPseudoDisabled:(BOOL)arg1 ;
-(BOOL)isPseudoDisabled;
@end

