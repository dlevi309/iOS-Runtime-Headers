/*
* Generated on Thursday, January 14, 2021 at 2:25:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DataDetectorsUI.framework/DataDetectorsUI
*/

#import <DataDetectorsUI/DataDetectorsUI-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDate;

@interface DDEventComponents : NSObject <NSSecureCoding> {

	NSString* _title;
	NSString* _eventTypeIdentifier;
	NSDate* _startDate;
	NSDate* _endDate;
	double _duration;
	NSRange _originRange;
	long long _source;

}

@property (nonatomic,copy) NSString * title;                            //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * eventTypeIdentifier;              //@synthesize eventTypeIdentifier=_eventTypeIdentifier - In the implementation block
@property (nonatomic,retain) NSDate * startDate;                        //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,retain) NSDate * endDate;                          //@synthesize endDate=_endDate - In the implementation block
@property (assign,nonatomic) double duration;                           //@synthesize duration=_duration - In the implementation block
@property (assign,nonatomic) NSRange originRange;                       //@synthesize originRange=_originRange - In the implementation block
@property (assign,nonatomic) long long source;                          //@synthesize source=_source - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)_eventsFromIntelligentSuggestions:(id)arg1 ;
+(id)_eventComponents:(id)arg1 matchingResult:(DDResultRef)arg2 context:(id)arg3 ;
+(id)_eventsFromNaturalLanguageText:(id)arg1 context:(id)arg2 ;
+(id)bestEventComponentsForResult:(DDResultRef)arg1 withNaturalLanguageContext:(id)arg2 suggestionsContext:(id)arg3 context:(id)arg4 ;
-(NSDate *)endDate;
-(void)setDuration:(double)arg1 ;
-(void)setStartDate:(NSDate *)arg1 ;
-(NSDate *)startDate;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(void)setEndDate:(NSDate *)arg1 ;
-(void)setSource:(long long)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(double)duration;
-(NSString *)title;
-(long long)source;
-(NSRange)originRange;
-(void)setEventTypeIdentifier:(NSString *)arg1 ;
-(void)setOriginRange:(NSRange)arg1 ;
-(NSString *)eventTypeIdentifier;
@end

