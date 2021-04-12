/*
* Generated on Thursday, January 14, 2021 at 2:23:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TipsCore.framework/TipsCore
*/

#import <TipsCore/TPSAnalyticsEvent.h>

@class NSString;

@interface TPSAnalyticsEventDesiredOutcomePerformed : TPSAnalyticsEvent {

	double _timeToDesiredOutcome;
	NSString* _contentID;
	NSString* _bundleID;
	NSString* _context;
	NSString* _experimentID;
	NSString* _experimentCampID;
	NSString* _displayType;

}

@property (assign,nonatomic) double timeToDesiredOutcome;              //@synthesize timeToDesiredOutcome=_timeToDesiredOutcome - In the implementation block
@property (nonatomic,retain) NSString * contentID;                     //@synthesize contentID=_contentID - In the implementation block
@property (nonatomic,retain) NSString * bundleID;                      //@synthesize bundleID=_bundleID - In the implementation block
@property (nonatomic,retain) NSString * context;                       //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) NSString * experimentID;                  //@synthesize experimentID=_experimentID - In the implementation block
@property (nonatomic,retain) NSString * experimentCampID;              //@synthesize experimentCampID=_experimentCampID - In the implementation block
@property (nonatomic,retain) NSString * displayType;                   //@synthesize displayType=_displayType - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)eventWithContentID:(id)arg1 displayType:(id)arg2 lastDisplayedContext:(id)arg3 lastHintDisplayedDate:(id)arg4 desiredOutcomePerformedDate:(id)arg5 ;
-(void)setDataProvider:(id)arg1 ;
-(void)setBundleID:(NSString *)arg1 ;
-(NSString *)displayType;
-(id)_initWithContentID:(id)arg1 context:(id)arg2 displayType:(id)arg3 lastHintDisplayedDate:(id)arg4 desiredOutcomePerformedDate:(id)arg5 ;
-(double)timeToDesiredOutcome;
-(void)setTimeToDesiredOutcome:(double)arg1 ;
-(void)setExperimentID:(NSString *)arg1 ;
-(void)setExperimentCampID:(NSString *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)eventName;
-(void)setDisplayType:(NSString *)arg1 ;
-(NSString *)context;
-(NSString *)contentID;
-(void)setContentID:(NSString *)arg1 ;
-(NSString *)bundleID;
-(NSString *)experimentCampID;
-(id)initWithCoder:(id)arg1 ;
-(id)mutableAnalyticsEventRepresentation;
-(NSString *)experimentID;
-(void)setContext:(NSString *)arg1 ;
@end

