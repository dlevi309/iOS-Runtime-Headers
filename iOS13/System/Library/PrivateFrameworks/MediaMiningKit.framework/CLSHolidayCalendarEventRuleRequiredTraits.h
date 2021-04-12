/*
* Generated on Monday, March 1, 2021 at 2:34:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
*/

#import <MediaMiningKit/MediaMiningKit-Structs.h>
#import <MediaMiningKit/CLSHolidayCalendarEventRuleTraits.h>

@interface CLSHolidayCalendarEventRuleRequiredTraits : CLSHolidayCalendarEventRuleTraits {

	BOOL _mustContainMePerson;
	BOOL _allowSceneClassificationBasedEvaluation;
	unsigned long long _type;
	unsigned long long _category;
	NSRange _peopleRange;

}

@property (assign,nonatomic) BOOL mustContainMePerson;                                  //@synthesize mustContainMePerson=_mustContainMePerson - In the implementation block
@property (assign,nonatomic) NSRange peopleRange;                                       //@synthesize peopleRange=_peopleRange - In the implementation block
@property (assign,nonatomic) BOOL allowSceneClassificationBasedEvaluation;              //@synthesize allowSceneClassificationBasedEvaluation=_allowSceneClassificationBasedEvaluation - In the implementation block
@property (assign,nonatomic) unsigned long long type;                                   //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) unsigned long long category;                               //@synthesize category=_category - In the implementation block
@property (nonatomic,readonly) BOOL isCelebration; 
+(id)_locationTraitDebugStringForTrait:(unsigned long long)arg1 ;
+(id)_peopleTraitDebugStringForTrait:(unsigned long long)arg1 ;
-(id)description;
-(unsigned long long)type;
-(void)setType:(unsigned long long)arg1 ;
-(unsigned long long)category;
-(void)setCategory:(unsigned long long)arg1 ;
-(id)initWithDescription:(id)arg1 ;
-(BOOL)isCelebration;
-(BOOL)allowSceneClassificationBasedEvaluation;
-(BOOL)evaluateWithTraits:(id)arg1 ;
-(BOOL)peopleCountRangeIsRequired;
-(BOOL)mustContainMePerson;
-(void)setMustContainMePerson:(BOOL)arg1 ;
-(NSRange)peopleRange;
-(void)setPeopleRange:(NSRange)arg1 ;
-(void)setAllowSceneClassificationBasedEvaluation:(BOOL)arg1 ;
@end

