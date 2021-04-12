/*
* Generated on Thursday, January 14, 2021 at 2:26:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfigurationUI.framework/ManagedConfigurationUI
*/

#import <UIKitCore/UIViewController.h>

@class NSString, UIActivityIndicatorView, UIImageView, UILabel;

@interface MCActivityViewController : UIViewController {

	BOOL _isInProgress;
	NSString* _inProgresText;
	NSString* _completionText;
	NSString* _longWaitingWarningText;
	double _longWaitingWarningThreshold;
	UIActivityIndicatorView* _spinnerView;
	UIImageView* _completionIconImageView;
	UILabel* _textLabel;
	UILabel* _longWaitingWarningLabel;

}

@property (nonatomic,retain) UIActivityIndicatorView * spinnerView;              //@synthesize spinnerView=_spinnerView - In the implementation block
@property (nonatomic,retain) UIImageView * completionIconImageView;              //@synthesize completionIconImageView=_completionIconImageView - In the implementation block
@property (nonatomic,retain) UILabel * textLabel;                                //@synthesize textLabel=_textLabel - In the implementation block
@property (nonatomic,retain) UILabel * longWaitingWarningLabel;                  //@synthesize longWaitingWarningLabel=_longWaitingWarningLabel - In the implementation block
@property (assign,nonatomic) BOOL isInProgress;                                  //@synthesize isInProgress=_isInProgress - In the implementation block
@property (nonatomic,retain) NSString * inProgresText;                           //@synthesize inProgresText=_inProgresText - In the implementation block
@property (nonatomic,retain) NSString * completionText;                          //@synthesize completionText=_completionText - In the implementation block
@property (nonatomic,retain) NSString * longWaitingWarningText;                  //@synthesize longWaitingWarningText=_longWaitingWarningText - In the implementation block
@property (assign,nonatomic) double longWaitingWarningThreshold;                 //@synthesize longWaitingWarningThreshold=_longWaitingWarningThreshold - In the implementation block
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)setSpinnerView:(UIActivityIndicatorView *)arg1 ;
-(UIActivityIndicatorView *)spinnerView;
-(void)setTextLabel:(UILabel *)arg1 ;
-(NSString *)completionText;
-(void)loadView;
-(UILabel *)textLabel;
-(void)viewDidLayoutSubviews;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(BOOL)isInProgress;
-(UIImageView *)completionIconImageView;
-(UILabel *)longWaitingWarningLabel;
-(void)_scheduleLongWaitingWarning;
-(void)setIsInProgress:(BOOL)arg1 ;
-(double)longWaitingWarningThreshold;
-(NSString *)longWaitingWarningText;
-(void)completeActivityAnimated:(BOOL)arg1 ;
-(void)setInProgresText:(NSString *)arg1 ;
-(void)setCompletionText:(NSString *)arg1 ;
-(NSString *)inProgresText;
-(void)setLongWaitingWarningText:(NSString *)arg1 ;
-(void)setLongWaitingWarningThreshold:(double)arg1 ;
-(void)setCompletionIconImageView:(UIImageView *)arg1 ;
-(void)setLongWaitingWarningLabel:(UILabel *)arg1 ;
@end

