/*
* Generated on Thursday, January 14, 2021 at 2:23:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PeopleSuggester.framework/PeopleSuggester
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray, NSString, NSDate;

@interface _PSMessagesPinningFeedback : NSObject <NSSecureCoding> {

	long long _actionType;
	long long _interactionMethod;
	NSArray* _onboardingSuggestions;
	NSArray* _actualPinnings;
	NSString* _trialId;
	NSDate* _eventDate;

}

@property (nonatomic,copy) NSString * trialId;                               //@synthesize trialId=_trialId - In the implementation block
@property (nonatomic,readonly) NSDate * eventDate;                           //@synthesize eventDate=_eventDate - In the implementation block
@property (assign,nonatomic) long long actionType;                           //@synthesize actionType=_actionType - In the implementation block
@property (assign,nonatomic) long long interactionMethod;                    //@synthesize interactionMethod=_interactionMethod - In the implementation block
@property (nonatomic,readonly) NSArray * onboardingSuggestions;              //@synthesize onboardingSuggestions=_onboardingSuggestions - In the implementation block
@property (nonatomic,readonly) NSArray * actualPinnings;                     //@synthesize actualPinnings=_actualPinnings - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)pinsChangedWithNowCurrentPins:(id)arg1 ;
+(id)acceptedWithActualPinnings:(id)arg1 OnboardingSuggestions:(id)arg2 ;
+(id)skipOnboardingWithOnboardingSuggestions:(id)arg1 ;
-(void)setActionType:(long long)arg1 ;
-(long long)actionType;
-(id)initWithAction:(long long)arg1 actualPinnings:(id)arg2 onboardingSuggestions:(id)arg3 trialId:(id)arg4 eventDate:(id)arg5 ;
-(long long)interactionMethod;
-(NSArray *)onboardingSuggestions;
-(NSArray *)actualPinnings;
-(void)setTrialId:(NSString *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)trialId;
-(NSDate *)eventDate;
-(void)setInteractionMethod:(long long)arg1 ;
-(id)initWithCoder:(id)arg1 ;
@end

