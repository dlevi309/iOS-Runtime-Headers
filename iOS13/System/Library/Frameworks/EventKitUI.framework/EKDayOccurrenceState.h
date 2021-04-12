/*
* Generated on Monday, March 1, 2021 at 2:31:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
	CGRect _textRect;
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
@property (assign,nonatomic) CGRect textRect;                                         //@synthesize textRect=_textRect - In the implementation block
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
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) EKEvent * occurrence;                                    //@synthesize occurrence=_occurrence - In the implementation block
@property (assign,nonatomic) BOOL isProposedTime;                                     //@synthesize isProposedTime=_isProposedTime - In the implementation block
@property (assign,nonatomic) UIEdgeInsets margin; 
+(UIEdgeInsets)defaultPadding;
+(id)locationCache;
+(BOOL)shouldShowTimeStringForOccurrence:(id)arg1 ;
+(id)languageAwareInsetsCache;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isValid;
-(BOOL)isCancelled;
-(NSString *)status;
-(NSString *)title;
-(NSString *)time;
-(NSString *)location;
-(void)setPadding:(UIEdgeInsets)arg1 ;
-(BOOL)isSelected;
-(void)setIsSelected:(BOOL)arg1 ;
-(UIColor *)backgroundColor;
-(UITraitCollection *)traitCollection;
-(void)setTraitCollection:(UITraitCollection *)arg1 ;
-(UIEdgeInsets)padding;
-(double)visibleHeight;
-(void)setVisibleHeight:(double)arg1 ;
-(CGRect)textRect;
-(double)travelTime;
-(void)setTravelTime:(double)arg1 ;
-(void)performChanges:(/*^block*/id)arg1 ;
-(BOOL)isAllDay;
-(UIColor *)timeTextColor;
-(void)performChangesWithState:(id)arg1 ;
-(BOOL)usesSmallText;
-(void)setTravelTimeHeight:(double)arg1 ;
-(double)enoughHeightForOneLine;
-(double)travelTimeHeight;
-(void)setUsesSmallText:(BOOL)arg1 ;
-(BOOL)isProposedTime;
-(void)setIsProposedTime:(BOOL)arg1 ;
-(EKEvent *)occurrence;
-(void)performChangesWithItem:(id)arg1 viewContent:(id)arg2 ;
-(void)setIsVibrant:(BOOL)arg1 ;
-(void)setOccurrence:(EKEvent *)arg1 ;
-(double)colorBarThickness;
-(UIColor *)displayColor;
-(void)setTopYBoundaryForText:(double)arg1 ;
-(long long)colorBackgroundStyle;
-(BOOL)isDimmed;
-(BOOL)isDeclined;
-(BOOL)isTentative;
-(BOOL)needsReply;
-(BOOL)isVibrant;
-(CGSize)textSpace;
-(UIEdgeInsets)languageAwareInsets;
-(BOOL)isBirthday;
-(UIImage *)birthdayIcon;
-(UIFont *)primaryTextFont;
-(void)performChangesWithOccurrenceView:(id)arg1 ;
-(CGRect)backgroundRect;
-(long long)birthdayCount;
-(BOOL)hasNewTimeProposed;
-(UIColor *)strikethroughColor;
-(UIColor *)titleTextColor;
-(double)_verticalContentInset;
-(double)topYBoundaryForText;
-(UIFont *)secondaryTextFont;
-(unsigned long long)fontCompressionDegree;
-(void)setIsDimmed:(BOOL)arg1 ;
-(void)setColorBackgroundStyle:(long long)arg1 ;
-(void)setBackgroundRect:(CGRect)arg1 ;
-(void)setBirthdayCount:(long long)arg1 ;
-(id)initWithOccurrenceView:(id)arg1 ;
-(UIColor *)locationTextColor;
-(UIColor *)statusTextColor;
-(double)minimumNaturalHeightAllText;
-(void)setDisplayColor:(UIColor *)arg1 ;
-(void)setTextRect:(CGRect)arg1 ;
@end

