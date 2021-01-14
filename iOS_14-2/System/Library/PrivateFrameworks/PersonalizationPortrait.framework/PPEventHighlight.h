/*
* Generated on Thursday, January 14, 2021 at 2:21:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortrait.framework/PersonalizationPortrait
*/

#import <PersonalizationPortrait/PersonalizationPortrait-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSURL, NSDate, NSArray;

@interface PPEventHighlight : NSObject <NSSecureCoding> {

	BOOL _isExtraordinary;
	NSString* _eventIdentifier;
	NSURL* _externalURI;
	NSString* _title;
	NSDate* _startDate;
	NSDate* _endDate;
	NSString* _location;
	NSString* _organizer;
	CGColorRef _calendarColor;
	unsigned long long _prominentFeature;
	NSArray* _features;
	double _score;

}

@property (nonatomic,retain) NSString * eventIdentifier;                       //@synthesize eventIdentifier=_eventIdentifier - In the implementation block
@property (nonatomic,retain) NSURL * externalURI;                              //@synthesize externalURI=_externalURI - In the implementation block
@property (nonatomic,retain) NSString * title;                                 //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) NSDate * startDate;                               //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,retain) NSDate * endDate;                                 //@synthesize endDate=_endDate - In the implementation block
@property (nonatomic,retain) NSString * location;                              //@synthesize location=_location - In the implementation block
@property (nonatomic,retain) NSString * organizer;                             //@synthesize organizer=_organizer - In the implementation block
@property (assign,nonatomic) CGColorRef calendarColor;                         //@synthesize calendarColor=_calendarColor - In the implementation block
@property (assign,nonatomic) unsigned long long prominentFeature;              //@synthesize prominentFeature=_prominentFeature - In the implementation block
@property (nonatomic,retain) NSArray * features;                               //@synthesize features=_features - In the implementation block
@property (assign,nonatomic) double score;                                     //@synthesize score=_score - In the implementation block
@property (assign,nonatomic) BOOL isExtraordinary;                             //@synthesize isExtraordinary=_isExtraordinary - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)describeProminentFeature:(unsigned long long)arg1 ;
+(id)eventHighlightWithEKEvent:(id)arg1 score:(double)arg2 prominentFeature:(unsigned long long)arg3 features:(id)arg4 isExtraordinary:(BOOL)arg5 ;
+(id)eventHighlightWithEvent:(id)arg1 score:(double)arg2 prominentFeature:(unsigned long long)arg3 features:(id)arg4 isExtraordinary:(BOOL)arg5 ;
-(unsigned long long)prominentFeature;
-(NSDate *)endDate;
-(NSString *)eventIdentifier;
-(NSURL *)externalURI;
-(void)setStartDate:(NSDate *)arg1 ;
-(NSArray *)features;
-(double)score;
-(NSDate *)startDate;
-(NSString *)location;
-(NSString *)organizer;
-(void)setOrganizer:(NSString *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(void)setEndDate:(NSDate *)arg1 ;
-(void)setScore:(double)arg1 ;
-(CGColorRef)calendarColor;
-(void)setFeatures:(NSArray *)arg1 ;
-(void)setLocation:(NSString *)arg1 ;
-(id)description;
-(BOOL)isExtraordinary;
-(void)setEventIdentifier:(NSString *)arg1 ;
-(void)setExternalURI:(NSURL *)arg1 ;
-(void)setIsExtraordinary:(BOOL)arg1 ;
-(id)initWithEventIdentifier:(id)arg1 externalURI:(id)arg2 title:(id)arg3 startDate:(id)arg4 endDate:(id)arg5 location:(id)arg6 organizer:(id)arg7 calendarColor:(CGColorRef)arg8 prominentFeature:(unsigned long long)arg9 features:(id)arg10 score:(double)arg11 isExtraordinary:(BOOL)arg12 ;
-(void)setProminentFeature:(unsigned long long)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqualToEventHighlight:(id)arg1 ;
-(NSString *)title;
-(void)setCalendarColor:(CGColorRef)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

