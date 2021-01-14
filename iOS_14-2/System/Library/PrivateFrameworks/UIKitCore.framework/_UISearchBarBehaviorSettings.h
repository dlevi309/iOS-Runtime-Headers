/*
* Generated on Thursday, January 14, 2021 at 2:20:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setButtonMinimumHeight:(double)arg1 ;
-(void)setButtonTightPadding:(double)arg1 ;
-(void)setButtonGenerousPadding:(double)arg1 ;
-(void)setUseGenerousPadding:(BOOL)arg1 ;
-(double)buttonMinimumHeight;
-(BOOL)useGenerousPadding;
-(double)buttonGenerousPadding;
-(double)buttonTightPadding;
@end

