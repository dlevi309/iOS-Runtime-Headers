/*
* Generated on Monday, March 1, 2021 at 2:34:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthExperience.framework/HealthExperience
*/


@protocol MedicalIDChangeObserverDelegate;
@interface MedicalIDChangeObserver : NSObject {

	int _medicalIDChangedToken;
	id<MedicalIDChangeObserverDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<MedicalIDChangeObserverDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)init;
-(void)dealloc;
-(id<MedicalIDChangeObserverDelegate>)delegate;
-(void)setDelegate:(id<MedicalIDChangeObserverDelegate>)arg1 ;
-(void)startObservingChanges;
@end

