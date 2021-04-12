/*
* Generated on Monday, March 1, 2021 at 2:30:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <PrototypeTools/PTSettings.h>

@interface _UISearchBarBehaviorSettings : PTSettings {

	BOOL _useGenerousPadding;
	double _buttonMinimumHeight;
	double _buttonTightPadding;
	double _buttonGenerousPadding;

}

@property (assign,nonatomic) BOOL useGenerousPadding;                   //@synthesize useGenerousPadding=_useGenerousPadding - In the implementation block
@property (assign,nonatomic) double buttonMinimumHeight;                //@synthesize buttonMinimumHeight=_buttonMinimumHeight - In the implementation block
@property (assign,nonatomic) double buttonTightPadding;                 //@synthesize buttonTightPadding=_buttonTightPadding - In the implementation block
@property (assign,nonatomic) double buttonGenerousPadding;              //@synthesize buttonGenerousPadding=_buttonGenerousPadding - In the implementation block
+(id)settingsControllerModule;
-(void)setDefaultValues;
-(double)buttonMinimumHeight;
-(BOOL)useGenerousPadding;
-(double)buttonGenerousPadding;
-(double)buttonTightPadding;
-(void)setButtonMinimumHeight:(double)arg1 ;
-(void)setButtonTightPadding:(double)arg1 ;
-(void)setButtonGenerousPadding:(double)arg1 ;
-(void)setUseGenerousPadding:(BOOL)arg1 ;
@end

