/*
* Generated on Monday, March 1, 2021 at 2:35:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
*/

#import <UIKitCore/UIViewController.h>

@protocol PMPlayerControlling;
@class MiroMemory, PMDebugPickerViewController;

@interface PMEditorDebugContainerViewController : UIViewController {

	id<PMPlayerControlling> _playerController;
	MiroMemory* _memory;
	unsigned long long _pickerMode;
	PMDebugPickerViewController* _moodPartPicker;

}

@property (nonatomic,retain) PMDebugPickerViewController * moodPartPicker;                 //@synthesize moodPartPicker=_moodPartPicker - In the implementation block
@property (assign,nonatomic,__weak) id<PMPlayerControlling> playerController;              //@synthesize playerController=_playerController - In the implementation block
@property (assign,nonatomic,__weak) MiroMemory * memory;                                   //@synthesize memory=_memory - In the implementation block
@property (assign,nonatomic) unsigned long long pickerMode;                                //@synthesize pickerMode=_pickerMode - In the implementation block
-(MiroMemory *)memory;
-(void)viewDidLoad;
-(void)didReceiveMemoryWarning;
-(void)prepareForSegue:(id)arg1 sender:(id)arg2 ;
-(id<PMPlayerControlling>)playerController;
-(void)setPlayerController:(id<PMPlayerControlling>)arg1 ;
-(void)setMemory:(MiroMemory *)arg1 ;
-(unsigned long long)pickerMode;
-(void)setPickerMode:(unsigned long long)arg1 ;
-(void)setMoodPartPicker:(PMDebugPickerViewController *)arg1 ;
-(PMDebugPickerViewController *)moodPartPicker;
@end

