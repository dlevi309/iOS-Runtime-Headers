/*
* Generated on Thursday, January 14, 2021 at 2:24:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthExperience.framework/HealthExperience
*/


@protocol MedicalIDChangeObserverDelegate;
@interface MedicalIDChangeObserver : NSObject {

	int _medicalIDChangedToken;
	id<MedicalIDChangeObserverDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<MedicalIDChangeObserverDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)init;
-(id<MedicalIDChangeObserverDelegate>)delegate;
-(void)setDelegate:(id<MedicalIDChangeObserverDelegate>)arg1 ;
-(void)startObservingChanges;
-(void)dealloc;
@end

