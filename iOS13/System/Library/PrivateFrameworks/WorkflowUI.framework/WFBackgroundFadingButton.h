/*
* Generated on Monday, March 1, 2021 at 2:34:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/

#import <UIKitCore/UIButton.h>

@class NSMutableDictionary;

@interface WFBackgroundFadingButton : UIButton {

	BOOL _derivesTitleColorFromTintColor;
	BOOL _derivesBackgroundColorFromTintColor;
	NSMutableDictionary* _backgroundColorsByState;

}

@property (nonatomic,retain) NSMutableDictionary * backgroundColorsByState;              //@synthesize backgroundColorsByState=_backgroundColorsByState - In the implementation block
@property (assign,nonatomic) BOOL derivesTitleColorFromTintColor;                        //@synthesize derivesTitleColorFromTintColor=_derivesTitleColorFromTintColor - In the implementation block
@property (assign,nonatomic) BOOL derivesBackgroundColorFromTintColor;                   //@synthesize derivesBackgroundColorFromTintColor=_derivesBackgroundColorFromTintColor - In the implementation block
-(void)setEnabled:(BOOL)arg1 ;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)tintColorDidChange;
-(void)setSelected:(BOOL)arg1 ;
-(void)setBackgroundColor:(id)arg1 forState:(unsigned long long)arg2 ;
-(NSMutableDictionary *)backgroundColorsByState;
-(void)setDerivesTitleColorFromTintColor:(BOOL)arg1 ;
-(void)setDerivesBackgroundColorFromTintColor:(BOOL)arg1 ;
-(void)updateBackgroundColorAnimated:(BOOL)arg1 ;
-(BOOL)derivesTitleColorFromTintColor;
-(BOOL)derivesBackgroundColorFromTintColor;
-(void)setBackgroundColorsByState:(NSMutableDictionary *)arg1 ;
@end

