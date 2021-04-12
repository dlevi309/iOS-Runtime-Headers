/*
* Generated on Monday, March 1, 2021 at 2:31:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
*/

#import <TextInput/TITypologyStatistic.h>

@interface TITypologyStatisticAutocorrectionListUI : TITypologyStatistic {

	BOOL _didSetListUIDisplayed;
	BOOL _listUIDisplayed;
	long long _inputsWhileHidden;
	long long _inputsWhileDisplayed;
	long long _hiddenToDisplayed;
	long long _displayedToHidden;

}

@property (nonatomic,readonly) long long inputsWhileHidden;                 //@synthesize inputsWhileHidden=_inputsWhileHidden - In the implementation block
@property (nonatomic,readonly) long long inputsWhileDisplayed;              //@synthesize inputsWhileDisplayed=_inputsWhileDisplayed - In the implementation block
@property (nonatomic,readonly) long long hiddenToDisplayed;                 //@synthesize hiddenToDisplayed=_hiddenToDisplayed - In the implementation block
@property (nonatomic,readonly) long long displayedToHidden;                 //@synthesize displayedToHidden=_displayedToHidden - In the implementation block
-(void)setListUIDisplayed:(BOOL)arg1 ;
-(void)visitRecordSync:(id)arg1 ;
-(void)visitRecordKeyboardInput:(id)arg1 ;
-(void)visitRecordAutocorrections:(id)arg1 ;
-(id)structuredReport;
-(void)addInputCount;
-(long long)inputsWhileHidden;
-(long long)inputsWhileDisplayed;
-(long long)hiddenToDisplayed;
-(long long)displayedToHidden;
@end

