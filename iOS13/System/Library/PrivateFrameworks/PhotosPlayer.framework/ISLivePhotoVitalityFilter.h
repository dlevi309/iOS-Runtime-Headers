/*
* Generated on Monday, March 1, 2021 at 2:33:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotosPlayer.framework/PhotosPlayer
*/


@protocol ISVitalitySettings;
@interface ISLivePhotoVitalityFilter : NSObject {

	BOOL _isPerformingInputChanges;
	BOOL __shouldUpdateOutput;
	id<ISVitalitySettings> _settings;
	long long _state;
	/*^block*/id _outputChangeHandler;

}

@property (assign,setter=_setPerformingInputChanges:,nonatomic) BOOL isPerformingInputChanges;              //@synthesize isPerformingInputChanges=_isPerformingInputChanges - In the implementation block
@property (assign,setter=_setShouldUpdateOutput:,nonatomic) BOOL _shouldUpdateOutput;                       //@synthesize _shouldUpdateOutput=__shouldUpdateOutput - In the implementation block
@property (nonatomic,readonly) id<ISVitalitySettings> settings;                                             //@synthesize settings=_settings - In the implementation block
@property (nonatomic,readonly) long long state;                                                             //@synthesize state=_state - In the implementation block
@property (nonatomic,copy) id outputChangeHandler;                                                          //@synthesize outputChangeHandler=_outputChangeHandler - In the implementation block
-(id)init;
-(long long)state;
-(void)setState:(long long)arg1 ;
-(id)initWithSettings:(id)arg1 ;
-(id<ISVitalitySettings>)settings;
-(void)invalidateOutput;
-(void)updateOutput;
-(BOOL)isPerformingInputChanges;
-(void)_setPerformingInputChanges:(BOOL)arg1 ;
-(void)setOutputChangeHandler:(id)arg1 ;
-(void)performInputChanges:(/*^block*/id)arg1 ;
-(id)outputChangeHandler;
-(BOOL)_shouldUpdateOutput;
-(void)_setShouldUpdateOutput:(BOOL)arg1 ;
@end

