/*
* Generated on Thursday, January 14, 2021 at 2:27:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HeartRhythmUI.framework/HeartRhythmUI
*/


@class NSString, HRExpandedContentItemLearnMore;

@interface HRExpandedContentItem : NSObject {

	NSString* _title;
	long long _type;
	HRExpandedContentItemLearnMore* _learnMore;

}

@property (nonatomic,copy,readonly) NSString * title;                                 //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) long long type;                                        //@synthesize type=_type - In the implementation block
@property (nonatomic,retain) HRExpandedContentItemLearnMore * learnMore;              //@synthesize learnMore=_learnMore - In the implementation block
+(id)itemWithType:(long long)arg1 title:(id)arg2 ;
+(id)_sinusRhythmExpandedContentItemsAlgVersionOne;
+(id)_atrialFibrillationExpandedContentItemsAlgVersionOne;
+(id)_highOrLowAbove120Below50HeartRateExpandedContentItemsAlgVersionOne;
+(id)_inconclusiveExpandedContentItemsAlgVersionOneWithLearnMoreDelegate:(id)arg1 ;
+(id)sinusRhythmItemsForAlgorithmVersion:(long long)arg1 ;
+(id)atrialFibrillationItemsForAlgorithmVersion:(long long)arg1 ;
+(id)highOrLowAbove120Below50HeartRateItemsForAlgorithmVersion:(long long)arg1 ;
+(id)inconclusiveItemsForAlgorithmVersion:(long long)arg1 upgradingFromAlgorithmVersion:(long long)arg2 learnMoreDelegate:(id)arg3 ;
-(HRExpandedContentItemLearnMore *)learnMore;
-(id)initWithType:(long long)arg1 title:(id)arg2 ;
-(long long)type;
-(void)setLearnMore:(HRExpandedContentItemLearnMore *)arg1 ;
-(NSString *)title;
@end

