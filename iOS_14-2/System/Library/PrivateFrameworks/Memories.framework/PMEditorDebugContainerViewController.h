/*
* Generated on Thursday, January 14, 2021 at 2:27:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
*/

#import <UIKitCore/UIViewController.h>

@protocol PMPlayerControlling;
@class MiroBlueprint, VEKProduction, PMDebugPickerViewController;

@interface PMEditorDebugContainerViewController : UIViewController {

	id<PMPlayerControlling> _playerController;
	MiroBlueprint* _blueprint;
	VEKProduction* _production;
	unsigned long long _pickerMode;
	PMDebugPickerViewController* _moodPartPicker;

}

@property (nonatomic,retain) PMDebugPickerViewController * moodPartPicker;                 //@synthesize moodPartPicker=_moodPartPicker - In the implementation block
@property (assign,nonatomic,__weak) id<PMPlayerControlling> playerController;              //@synthesize playerController=_playerController - In the implementation block
@property (nonatomic,retain) MiroBlueprint * blueprint;                                    //@synthesize blueprint=_blueprint - In the implementation block
@property (assign,nonatomic,__weak) VEKProduction * production;                            //@synthesize production=_production - In the implementation block
@property (assign,nonatomic) unsigned long long pickerMode;                                //@synthesize pickerMode=_pickerMode - In the implementation block
-(MiroBlueprint *)blueprint;
-(void)prepareForSegue:(id)arg1 sender:(id)arg2 ;
-(id<PMPlayerControlling>)playerController;
-(void)setPlayerController:(id<PMPlayerControlling>)arg1 ;
-(void)didReceiveMemoryWarning;
-(void)viewDidLoad;
-(VEKProduction *)production;
-(void)setBlueprint:(MiroBlueprint *)arg1 ;
-(void)setProduction:(VEKProduction *)arg1 ;
-(unsigned long long)pickerMode;
-(void)setPickerMode:(unsigned long long)arg1 ;
-(void)setMoodPartPicker:(PMDebugPickerViewController *)arg1 ;
-(PMDebugPickerViewController *)moodPartPicker;
@end

