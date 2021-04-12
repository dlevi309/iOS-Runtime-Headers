/*
* Generated on Thursday, January 14, 2021 at 2:27:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HeartRhythmUI.framework/HeartRhythmUI
*/


@class NSArray;

@interface HROnboardingSequence : NSObject {

	NSArray* _pages;

}

@property (nonatomic,readonly) NSArray * pages;              //@synthesize pages=_pages - In the implementation block
+(id)firstTimeAtrialFibrillationAvailabilitySequence;
+(id)firstTimeAtrialFibrillationOnboardingSequence;
+(id)firstTimeElectrocardiogramAvailabilitySequence;
+(id)firstTimeElectrocardiogramOnboardingSequenceWithAlgorithmVersion:(long long)arg1 ;
-(NSArray *)pages;
-(id)_initWithPages:(id)arg1 ;
@end

