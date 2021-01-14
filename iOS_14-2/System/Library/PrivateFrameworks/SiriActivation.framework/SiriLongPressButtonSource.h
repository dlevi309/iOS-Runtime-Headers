/*
* Generated on Thursday, January 14, 2021 at 2:25:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SiriActivation.framework/SiriActivation
*/

#import <SiriActivation/SiriActivationSource.h>
#import <SiriActivation/SiriButtonSource.h>

@class NSMutableArray, SiriLongPressButtonContext, NSString;

@interface SiriLongPressButtonSource : SiriActivationSource <SiriButtonSource> {

	double _longPressInterval;
	long long _buttonIdentifier;
	NSMutableArray* _lock_activityAssertions;
	SiriLongPressButtonContext* _context;
	/*^block*/id _currentTimeGenerator;

}

@property (assign,nonatomic) double longPressInterval;                              //@synthesize longPressInterval=_longPressInterval - In the implementation block
@property (assign,nonatomic) long long buttonIdentifier;                            //@synthesize buttonIdentifier=_buttonIdentifier - In the implementation block
@property (nonatomic,retain) NSMutableArray * lock_activityAssertions;              //@synthesize lock_activityAssertions=_lock_activityAssertions - In the implementation block
@property (nonatomic,retain) SiriLongPressButtonContext * context;                  //@synthesize context=_context - In the implementation block
@property (nonatomic,copy) id currentTimeGenerator;                                 //@synthesize currentTimeGenerator=_currentTimeGenerator - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)new;
+(id)longPressButtonForIdentifier:(long long)arg1 ;
-(void)setCurrentTimeGenerator:(id)arg1 ;
-(id)_initWithButtonIdentifier:(long long)arg1 ;
-(NSMutableArray *)lock_activityAssertions;
-(void)didRecognizeLongPress;
-(id)currentTimeGenerator;
-(long long)buttonIdentifier;
-(void)configureConnection;
-(void)setLongPressInterval:(double)arg1 ;
-(BOOL)_shouldReplaceSpeechInteractionActivityTimestampWithPrewarmTimestamp;
-(id)prepareForActivation;
-(double)longPressInterval;
-(id)speechInteractionActivityWithTimestamp:(double)arg1 ;
-(id)prepareForActivationWithTimestamp:(double)arg1 ;
-(id)_deviceIdentifier;
-(void)setLock_activityAssertions:(NSMutableArray *)arg1 ;
-(double)_timestampForSpeechInteractionActivityWithTimestamp:(double)arg1 ;
-(void)setButtonIdentifier:(long long)arg1 ;
-(void)didRecognizeButtonSinglePressUp;
-(id)init;
-(SiriLongPressButtonContext *)context;
-(void)setContext:(SiriLongPressButtonContext *)arg1 ;
@end

