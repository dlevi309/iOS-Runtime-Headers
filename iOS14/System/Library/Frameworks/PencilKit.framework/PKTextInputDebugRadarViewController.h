/*
* Generated on Thursday, January 14, 2021 at 2:24:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
*/

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/PKTextInputDebugReplayViewDelegate.h>

@class PKTextInputDebugSharpenerLog, UISegmentedControl, NSArray, PKTextInputDebugReplayView, UIButton, UIBarButtonItem, NSString;

@interface PKTextInputDebugRadarViewController : UIViewController <PKTextInputDebugReplayViewDelegate> {

	PKTextInputDebugSharpenerLog* _sharpenerLog;
	UISegmentedControl* _detailControl;
	NSArray* _contextLabels;
	NSArray* _intendedTexts;
	PKTextInputDebugReplayView* _replayView;
	UIButton* _replayPlayPauseButton;
	UIBarButtonItem* _submitButton;

}

@property (nonatomic,retain) UISegmentedControl * detailControl;                         //@synthesize detailControl=_detailControl - In the implementation block
@property (nonatomic,retain) NSArray * contextLabels;                                    //@synthesize contextLabels=_contextLabels - In the implementation block
@property (nonatomic,retain) NSArray * intendedTexts;                                    //@synthesize intendedTexts=_intendedTexts - In the implementation block
@property (nonatomic,retain) PKTextInputDebugReplayView * replayView;                    //@synthesize replayView=_replayView - In the implementation block
@property (nonatomic,retain) UIButton * replayPlayPauseButton;                           //@synthesize replayPlayPauseButton=_replayPlayPauseButton - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * submitButton;                             //@synthesize submitButton=_submitButton - In the implementation block
@property (nonatomic,readonly) PKTextInputDebugSharpenerLog * sharpenerLog;              //@synthesize sharpenerLog=_sharpenerLog - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)viewDidAppear:(BOOL)arg1 ;
-(BOOL)_canShowWhileLocked;
-(void)viewDidLoad;
-(id)_deviceString;
-(void)setupViews;
-(UIBarButtonItem *)submitButton;
-(void)setSubmitButton:(UIBarButtonItem *)arg1 ;
-(id)initWithSharpenerLog:(id)arg1 ;
-(PKTextInputDebugSharpenerLog *)sharpenerLog;
-(void)debugReplayViewDidFinishReplay:(id)arg1 ;
-(void)updateCurrentLogEntries;
-(void)handleCancelButton:(id)arg1 ;
-(void)handleSubmitRadarButton:(id)arg1 ;
-(void)setDetailControl:(UISegmentedControl *)arg1 ;
-(UISegmentedControl *)detailControl;
-(void)handleDetailControl:(id)arg1 ;
-(void)setContextLabels:(NSArray *)arg1 ;
-(void)setIntendedTexts:(NSArray *)arg1 ;
-(void)setReplayPlayPauseButton:(UIButton *)arg1 ;
-(void)updatePlayPauseButtonTitle;
-(UIButton *)replayPlayPauseButton;
-(void)handlePlayPauseButton:(id)arg1 ;
-(void)setReplayView:(PKTextInputDebugReplayView *)arg1 ;
-(PKTextInputDebugReplayView *)replayView;
-(NSArray *)contextLabels;
-(NSArray *)intendedTexts;
-(id)_contextStringForLogEntry:(id)arg1 ;
-(void)_launchTTRAndDismiss;
-(id)_buildString;
-(id)_accumulatedLogEntryTextsForRadar;
-(id)_loggedLocaleDescription;
-(id)_logEntryTextForRadarTitle;
-(id)_generateLaunchURLWithLogFilename:(id)arg1 ;
@end

