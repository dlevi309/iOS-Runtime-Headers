/*
* Generated on Thursday, January 14, 2021 at 2:28:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProxCardKit.framework/ProxCardKit
*/

#import <ProxCardKit/PRXCardContentViewController.h>

@class PRXPasscodeEntryView;

@interface PRXPasscodeEntryViewController : PRXCardContentViewController {

	PRXPasscodeEntryView* _passcodeEntryView;
	long long _numberOfDigits;
	/*^block*/id _textChangeHandler;
	/*^block*/id _textEntryCompletionHandler;

}

@property (nonatomic,readonly) PRXPasscodeEntryView * passcodeEntryView;              //@synthesize passcodeEntryView=_passcodeEntryView - In the implementation block
@property (assign,nonatomic) long long numberOfDigits;                                //@synthesize numberOfDigits=_numberOfDigits - In the implementation block
@property (nonatomic,copy) id textChangeHandler;                                      //@synthesize textChangeHandler=_textChangeHandler - In the implementation block
@property (nonatomic,copy) id textEntryCompletionHandler;                             //@synthesize textEntryCompletionHandler=_textEntryCompletionHandler - In the implementation block
-(void)viewWillAppear:(BOOL)arg1 ;
-(long long)numberOfDigits;
-(void)textDidChange:(id)arg1 ;
-(void)viewDidLoad;
-(void)_textDidChange:(id)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(id)textChangeHandler;
-(void)setTextChangeHandler:(id)arg1 ;
-(void)_updatePasscodeEntryView;
-(void)didCompleteTextEntry:(id)arg1 ;
-(void)setNumberOfDigits:(long long)arg1 ;
-(PRXPasscodeEntryView *)passcodeEntryView;
-(id)textEntryCompletionHandler;
-(void)setTextEntryCompletionHandler:(id)arg1 ;
@end

