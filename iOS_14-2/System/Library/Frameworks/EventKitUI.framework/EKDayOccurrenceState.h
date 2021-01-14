/*
* Generated on Thursday, January 14, 2021 at 2:23:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
*/

#import <EventKitUI/EventKitUI-Structs.h>
#import <libobjc.A.dylib/EKMutableDayOccurrenceState.h>

@class EKEvent, UITraitCollection, UIColor, NSString, UIImage, UIFont;

@interface EKDayOccurrenceState : NSObject <EKMutableDayOccurrenceState> {

	BOOL _isPerformingChanges;
	BOOL _didChange;
	BOOL _isProposedTime;
	BOOL _isSelected;
	BOOL _isDimmed;
	BOOL _isVibrant;
	BOOL _usesSmallText;
	EKEvent* _occurrence;
	UIColor* _displayColor;
	UITraitCollection* _traitCollection;
	long long _birthdayCount;
	double _travelTime;
	long long _colorBackgroundStyle;
	double _travelTimeHeight;
	double _visibleHeight;
	double _topYBoundaryForText;
	CGRect _backgroundRect;
	CGRect _estimatedTextFrame;
	UIEdgeInsets _padding;

}

@property (assign,nonatomic) BOOL isSelected;                                         //@synthesize isSelected=_isSelected - In the implementation block
@property (assign,nonatomic) BOOL isDimmed;                                           //@synthesize isDimmed=_isDimmed - In the implementation block
@property (assign,nonatomic) BOOL usesSmallText;                                      //@synthesize usesSmallText=_usesSmallText - In the implementation block
@property (assign,nonatomic) BOOL isVibrant;                                          //@synthesize isVibrant=_isVibrant - In the implementation block
@property (assign,nonatomic) double travelTime;                                       //@synthesize travelTime=_travelTime - In the implementation block
@property (assign,nonatomic) long long colorBackgroundStyle;                          //@synthesize colorBackgroundStyle=_colorBackgroundStyle - In the implementation block
@property (nonatomic,retain) UIColor * displayColor;                                  //@synthesize displayColor=_displayColor - In the implementation block
@property (assign,nonatomic) CGRect backgroundRect;                                   //@synthesize backgroundRect=_backgroundRect - In the implementation block
@property (assign,nonatomic) CGRect estimatedTextFrame;                               //@synthesize estimatedTextFrame=_estimatedTextFrame - In the implementation block
@property (assign,nonatomic) UIEdgeInsets padding;                                    //@synthesize padding=_padding - In the implementation block
@property (assign,nonatomic) double travelTimeHeight;                                 //@synthesize travelTimeHeight=_travelTimeHeight - In the implementation block
@property (assign,nonatomic) double visibleHeight;                                    //@synthesize visibleHeight=_visibleHeight - In the implementation block
@property (assign,nonatomic) double topYBoundaryForText;                              //@synthesize topYBoundaryForText=_topYBoundaryForText - In the implementation block
@property (nonatomic,retain) UITraitCollection * traitCollection;                     //@synthesize traitCollection=_traitCollection - In the implementation block
@property (assign,nonatomic) long long birthdayCount;                                 //@synthesize birthdayCount=_birthdayCount - In the implementation block
@property (nonatomic,readonly) BOOL isValid; 
@property (nonatomic,readonly) BOOL isTentative; 
@property (nonatomic,readonly) BOOL needsReply; 
@property (nonatomic,readonly) BOOL isAllDay; 
@property (nonatomic,readonly) BOOL isCancelled; 
@property (nonatomic,readonly) BOOL isDeclined; 
@property (nonatomic,readonly) BOOL hasNewTimeProposed; 
@property (nonatomic,readonly) BOOL isBirthday; 
@property (nonatomic,readonly) NSString * title; 
@property (nonatomic,readonly) NSString * time; 
@property (nonatomic,readonly) NSString * location; 
@property (nonatomic,readonly) NSString * status; 
@property (nonatomic,readonly) UIColor * titleTextColor; 
@property (nonatomic,readonly) UIColor * timeTextColor; 
@property (nonatomic,readonly) UIColor * locationTextColor; 
@property (nonatomic,readonly) UIColor * statusTextColor; 
@property (nonatomic,readonly) UIColor * strikethroughColor; 
@property (nonatomic,readonly) UIColor * backgroundColor; 
@property (nonatomic,readonly) double colorBarThickness; 
@property (nonatomic,readonly) CGSize textSpace; 
@property (nonatomic,readonly) double minimumNaturalHeightAllText; 
@property (nonatomic,readonly) double enoughHeightForOneLine; 
@property (nonatomic,readonly) UIEdgeInsets languageAwareInsets; 
@property (nonatomic,readonly) UIImage * birthdayIcon; 
@property (nonatomic,readonly) UIFont * primaryTextFont; 
@property (nonatomic,readonly) UIFont * secondaryTextFont; 
@property (nonatomic,readonly) unsigned long long fontCompressionDegree; 
@property (nonatomic,retain) EKEvent * occurrence;                                    //@synthesize occurrence=_occurrence - In the implementation block
@property (assign,nonatomic) BOOL isProposedTime;                                     //@synthesize isProposedTime=_isProposedTime - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)shouldShowTimeStringForOccurrence:(id)arg1 ;
+(UIEdgeInsets)defaultPadding;
+(id)languageAwareInsetsCache;
+(id)locationCache;
-(void)setVisibleHeight:(double)arg1 ;
-(BOOL)isBirthday;
-(double)_verticalContentInset;
-(BOOL)isVibrant;
-(void)setIsVibrant:(BOOL)arg1 ;
-(void)setIsProposedTime:(BOOL)arg1 ;
-(double)enoughHeightForOneLine;
-(BOOL)isProposedTime;
-(void)setOccurrence:(EKEvent *)arg1 ;
-(double)travelTime;
-(void)setTravelTime:(double)arg1 ;
-(NSString *)time;
-(BOOL)isDeclined;
-(long long)birthdayCount;
-(void)setUsesSmallText:(BOOL)arg1 ;
-(BOOL)usesSmallText;
-(BOOL)needsReply;
-(BOOL)isTentative;
-(double)visibleHeight;
-(UIEdgeInsets)languageAwareInsets;
-(UITraitCollection *)traitCollection;
-(UIColor *)locationTextColor;
-(BOOL)isAllDay;
-(void)setTraitCollection:(UITraitCollection *)arg1 ;
-(id)init;
-(double)colorBarThickness;
-(void)setTopYBoundaryForText:(double)arg1 ;
-(NSString *)location;
-(BOOL)isSelected;
-(void)setIsDimmed:(BOOL)arg1 ;
-(void)setTravelTimeHeight:(double)arg1 ;
-(void)setIsSelected:(BOOL)arg1 ;
-(CGRect)estimatedTextFrame;
-(void)performChangesWithState:(id)arg1 ;
-(UIColor *)backgroundColor;
-(id)initWithOccurrenceView:(id)arg1 ;
-(NSString *)description;
-(BOOL)isValid;
-(void)performChangesWithItem:(id)arg1 viewContent:(id)arg2 ;
-(UIFont *)secondaryTextFont;
-(long long)colorBackgroundStyle;
-(double)minimumNaturalHeightAllText;
-(EKEvent *)occurrence;
-(void)setDisplayColor:(UIColor *)arg1 ;
-(unsigned long long)fontCompressionDegree;
-(double)topYBoundaryForText;
-(UIFont *)primaryTextFont;
-(void)setColorBackgroundStyle:(long long)arg1 ;
-(UIColor *)timeTextColor;
-(unsigned long long)hash;
-(void)performChangesWithOccurrenceView:(id)arg1 ;
-(UIColor *)statusTextColor;
-(BOOL)isDimmed;
-(UIEdgeInsets)padding;
-(UIImage *)birthdayIcon;
-(void)setPadding:(UIEdgeInsets)arg1 ;
-(void)setBackgroundRect:(CGRect)arg1 ;
-(void)setEstimatedTextFrame:(CGRect)arg1 ;
-(UIColor *)strikethroughColor;
-(UIColor *)titleTextColor;
-(void)setBirthdayCount:(long long)arg1 ;
-(void)performChanges:(/*^block*/id)arg1 ;
-(UIColor *)displayColor;
-(CGSize)textSpace;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)travelTimeHeight;
-(BOOL)isCancelled;
-(CGRect)backgroundRect;
-(NSString *)title;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)status;
-(BOOL)hasNewTimeProposed;
@end

