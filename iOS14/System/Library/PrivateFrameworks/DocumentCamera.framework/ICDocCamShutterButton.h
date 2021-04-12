/*
* Generated on Thursday, January 14, 2021 at 2:27:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DocumentCamera.framework/DocumentCamera
*/

#import <DocumentCamera/DocumentCamera-Structs.h>
#import <UIKitCore/UIButton.h>

@interface ICDocCamShutterButton : UIButton {

	BOOL _pseudoDisabled;

}

@property (assign,getter=isPseudoDisabled,nonatomic) BOOL pseudoDisabled;              //@synthesize pseudoDisabled=_pseudoDisabled - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(id)innerCircle;
-(void)commonInit;
-(id)initWithCoder:(id)arg1 ;
-(id)outerRingImage;
-(void)setPseudoDisabled:(BOOL)arg1 ;
-(BOOL)isPseudoDisabled;
@end

