/*
* Generated on Thursday, January 14, 2021 at 2:27:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/NanoTimeKit/ComplicationBundles/WorldClockComplications.bundle/WorldClockComplications
*/

#import <WorldClockComplications/NWCComplicationTimelineEntryModel.h>

@class CLLocation, NSString, NSDate;

@interface NWCSunriseComplicationTimelineEntryModel : NWCComplicationTimelineEntryModel {

	BOOL _currentEvent;
	CLLocation* _location;
	NSString* _locationName;
	long long _constantSun;
	NSDate* _eventDate;
	NSString* _animationGroup;

}

@property (nonatomic,readonly) BOOL isNormalUpcomingEvent; 
@property (nonatomic,readonly) BOOL isConstantSunEvent; 
@property (nonatomic,readonly) BOOL isSunriseEvent; 
@property (nonatomic,readonly) CLLocation * location;                                //@synthesize location=_location - In the implementation block
@property (nonatomic,readonly) NSString * locationName;                              //@synthesize locationName=_locationName - In the implementation block
@property (nonatomic,readonly) long long constantSun;                                //@synthesize constantSun=_constantSun - In the implementation block
@property (getter=isCurrentEvent,nonatomic,readonly) BOOL currentEvent;              //@synthesize currentEvent=_currentEvent - In the implementation block
@property (nonatomic,readonly) NSDate * eventDate;                                   //@synthesize eventDate=_eventDate - In the implementation block
@property (nonatomic,readonly) NSString * animationGroup;                            //@synthesize animationGroup=_animationGroup - In the implementation block
+(id)currentEventEntryModelWithEntryAndEventDate:(id)arg1 atLocation:(id)arg2 withDisplayName:(id)arg3 constantSun:(long long)arg4 animationGroup:(id)arg5 ;
+(id)entryModelWithEntryDate:(id)arg1 eventDate:(id)arg2 atLocation:(id)arg3 withDisplayName:(id)arg4 constantSun:(long long)arg5 animationGroup:(id)arg6 ;
+(id)placeholderEntryModelWithEntryDate:(id)arg1 animationGroup:(id)arg2 ;
+(id)_attributedDisplayNameWithLocationGlyph:(id)arg1 inFont:(id)arg2 ;
-(CLLocation *)location;
-(id)description;
-(NSDate *)eventDate;
-(NSString *)locationName;
-(id)templateForComplicationFamily:(long long)arg1 ;
-(long long)constantSun;
-(id)_extraLargeTemplate;
-(NSString *)animationGroup;
-(id)initWithEntryDate:(id)arg1 eventDate:(id)arg2 atLocation:(id)arg3 withDisplayName:(id)arg4 constantSun:(long long)arg5 currentEvent:(BOOL)arg6 animationGroup:(id)arg7 ;
-(id)_largeUtilityTemplateSuppressCountdown:(BOOL)arg1 ;
-(id)_circularTemplateIsMedium:(BOOL)arg1 ;
-(id)_largeModularTemplate;
-(id)_smallModularTemplate;
-(id)_smallUtilityTemplate;
-(id)_graphicCornerTemplate;
-(id)_graphicRectangularTemplate;
-(BOOL)isNormalUpcomingEvent;
-(BOOL)isCurrentEvent;
-(BOOL)isConstantSunEvent;
-(BOOL)isSunriseEvent;
-(id)_swapPlaceholderString:(id)arg1 withTimeStringForDate:(id)arg2 inString:(id)arg3 usingBaseFont:(id)arg4 smallCapsBaseFont:(id)arg5 ;
-(id)_eventTimeAndCountdownAbbreviated:(BOOL)arg1 suppressCountdown:(BOOL)arg2 suppressCommaSeparator:(BOOL)arg3 ;
@end

