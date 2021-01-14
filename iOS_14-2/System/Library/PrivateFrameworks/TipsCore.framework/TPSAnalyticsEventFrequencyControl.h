/*
* Generated on Thursday, January 14, 2021 at 2:23:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TipsCore.framework/TipsCore
*/

#import <TipsCore/TPSAnalyticsEvent.h>

@class NSString, NSNumber;

@interface TPSAnalyticsEventFrequencyControl : TPSAnalyticsEvent {

	NSString* _displayType;
	NSNumber* _displayCount;
	NSNumber* _notDisplayedDueToFrequencyControlCount;
	NSString* _experimentID;
	NSString* _experimentCampID;

}

@property (nonatomic,retain) NSString * displayType;                                         //@synthesize displayType=_displayType - In the implementation block
@property (nonatomic,retain) NSNumber * displayCount;                                        //@synthesize displayCount=_displayCount - In the implementation block
@property (nonatomic,retain) NSNumber * notDisplayedDueToFrequencyControlCount;              //@synthesize notDisplayedDueToFrequencyControlCount=_notDisplayedDueToFrequencyControlCount - In the implementation block
@property (nonatomic,retain) NSString * experimentID;                                        //@synthesize experimentID=_experimentID - In the implementation block
@property (nonatomic,retain) NSString * experimentCampID;                                    //@synthesize experimentCampID=_experimentCampID - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setDataProvider:(id)arg1 ;
-(NSString *)displayType;
-(void)setExperimentID:(NSString *)arg1 ;
-(void)setExperimentCampID:(NSString *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)eventName;
-(void)setDisplayType:(NSString *)arg1 ;
-(void)setDisplayCount:(NSNumber *)arg1 ;
-(id)initWithDisplayType:(id)arg1 displayCount:(id)arg2 notDisplayedDueToFrequencyControlCount:(id)arg3 ;
-(NSNumber *)notDisplayedDueToFrequencyControlCount;
-(void)setNotDisplayedDueToFrequencyControlCount:(NSNumber *)arg1 ;
-(NSString *)experimentCampID;
-(id)initWithCoder:(id)arg1 ;
-(NSNumber *)displayCount;
-(id)mutableAnalyticsEventRepresentation;
-(NSString *)experimentID;
@end

