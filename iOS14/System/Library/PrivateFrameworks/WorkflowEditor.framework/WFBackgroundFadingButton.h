/*
* Generated on Thursday, January 14, 2021 at 2:28:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowEditor.framework/WorkflowEditor
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
-(void)tintColorDidChange;
-(void)setEnabled:(BOOL)arg1 ;
-(void)setSelected:(BOOL)arg1 ;
-(void)setBackgroundColor:(id)arg1 forState:(unsigned long long)arg2 ;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)setDerivesBackgroundColorFromTintColor:(BOOL)arg1 ;
-(void)setDerivesTitleColorFromTintColor:(BOOL)arg1 ;
-(NSMutableDictionary *)backgroundColorsByState;
-(void)updateBackgroundColorAnimated:(BOOL)arg1 ;
-(BOOL)derivesTitleColorFromTintColor;
-(BOOL)derivesBackgroundColorFromTintColor;
-(void)setBackgroundColorsByState:(NSMutableDictionary *)arg1 ;
@end

