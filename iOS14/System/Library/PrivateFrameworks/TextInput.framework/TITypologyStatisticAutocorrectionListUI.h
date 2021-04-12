/*
* Generated on Thursday, January 14, 2021 at 2:20:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)visitRecordAutocorrections:(id)arg1 ;
-(void)visitRecordKeyboardInput:(id)arg1 ;
-(void)addInputCount;
-(long long)inputsWhileHidden;
-(long long)inputsWhileDisplayed;
-(long long)hiddenToDisplayed;
-(long long)displayedToHidden;
-(void)visitRecordSync:(id)arg1 ;
-(id)structuredReport;
@end

