/*
* Generated on Monday, March 1, 2021 at 2:33:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SiriActivation.framework/SiriActivation
*/

#import <SiriActivation/SiriActivationSource.h>
#import <SiriActivation/SiriButtonSource.h>

@class NSMutableArray, SiriLongPressButtonContext, SiriContext, NSString;

@interface SiriLongPressButtonSource : SiriActivationSource <SiriButtonSource> {

	double _longPressInterval;
	long long _buttonIdentifier;
	NSMutableArray* _lock_activityAssertions;
	SiriLongPressButtonContext* _context;

}

@property (nonatomic,retain) SiriContext * context; 
@property (assign,nonatomic) double longPressInterval;                              //@synthesize longPressInterval=_longPressInterval - In the implementation block
@property (assign,nonatomic) long long buttonIdentifier;                            //@synthesize buttonIdentifier=_buttonIdentifier - In the implementation block
@property (nonatomic,retain) NSMutableArray * lock_activityAssertions;              //@synthesize lock_activityAssertions=_lock_activityAssertions - In the implementation block
@property (nonatomic,retain) SiriLongPressButtonContext * context;                  //@synthesize context=_context - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)new;
+(id)longPressButtonForIdentifier:(long long)arg1 ;
-(id)init;
-(SiriContext *)context;
-(void)setContext:(SiriContext *)arg1 ;
-(long long)buttonIdentifier;
-(void)configureConnection;
-(void)overrideConnectedToTrustedCarPlay:(BOOL)arg1 ;
-(void)overrideConnectedToCarPlay:(BOOL)arg1 ;
-(id)_initWithButtonIdentifier:(long long)arg1 ;
-(void)setLongPressInterval:(double)arg1 ;
-(void)setButtonIdentifier:(long long)arg1 ;
-(void)setLock_activityAssertions:(NSMutableArray *)arg1 ;
-(NSMutableArray *)lock_activityAssertions;
-(double)longPressInterval;
-(id)prepareForActivation;
-(id)speechInteractionActivityWithTimestamp:(double)arg1 ;
-(void)didRecognizeButtonSinglePressUp;
-(void)didRecognizeLongPress;
@end

