/*
* Generated on Thursday, January 14, 2021 at 2:23:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
*/

@class EKEvent, UITraitCollection;


@protocol EKMutableDayOccurrenceState <NSObject>
@property (nonatomic,retain) EKEvent * occurrence; 
@property (assign,nonatomic) long long birthdayCount; 
@property (assign,nonatomic) BOOL isProposedTime; 
@property (assign,nonatomic) BOOL isSelected; 
@property (assign,nonatomic) BOOL isDimmed; 
@property (assign,nonatomic) BOOL usesSmallText; 
@property (assign,nonatomic) BOOL isVibrant; 
@property (assign,nonatomic) double travelTime; 
@property (assign,nonatomic) long long colorBackgroundStyle; 
@property (assign,nonatomic) CGRect backgroundRect; 
@property (assign,nonatomic) double travelTimeHeight; 
@property (assign,nonatomic) double visibleHeight; 
@property (assign,nonatomic) double topYBoundaryForText; 
@property (nonatomic,retain) UITraitCollection * traitCollection; 
@required
-(void)setVisibleHeight:(double)arg1;
-(BOOL)isVibrant;
-(void)setIsVibrant:(BOOL)arg1;
-(void)setIsProposedTime:(BOOL)arg1;
-(BOOL)isProposedTime;
-(void)setOccurrence:(id)arg1;
-(double)travelTime;
-(void)setTravelTime:(double)arg1;
-(long long)birthdayCount;
-(void)setUsesSmallText:(BOOL)arg1;
-(BOOL)usesSmallText;
-(double)visibleHeight;
-(UITraitCollection *)traitCollection;
-(void)setTraitCollection:(id)arg1;
-(void)setTopYBoundaryForText:(double)arg1;
-(BOOL)isSelected;
-(void)setIsDimmed:(BOOL)arg1;
-(void)setTravelTimeHeight:(double)arg1;
-(void)setIsSelected:(BOOL)arg1;
-(long long)colorBackgroundStyle;
-(EKEvent *)occurrence;
-(double)topYBoundaryForText;
-(void)setColorBackgroundStyle:(long long)arg1;
-(BOOL)isDimmed;
-(void)setBackgroundRect:(CGRect)arg1;
-(void)setBirthdayCount:(long long)arg1;
-(double)travelTimeHeight;
-(CGRect)backgroundRect;

@end

