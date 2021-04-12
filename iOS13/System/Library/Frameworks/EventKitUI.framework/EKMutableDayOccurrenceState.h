/*
* Generated on Monday, March 1, 2021 at 2:31:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
@property (assign,nonatomic) UIEdgeInsets margin; 
@property (assign,nonatomic) double travelTimeHeight; 
@property (assign,nonatomic) double visibleHeight; 
@property (assign,nonatomic) double topYBoundaryForText; 
@property (nonatomic,retain) UITraitCollection * traitCollection; 
@required
-(BOOL)isSelected;
-(void)setIsSelected:(BOOL)arg1;
-(UITraitCollection *)traitCollection;
-(void)setTraitCollection:(id)arg1;
-(void)setMargin:(UIEdgeInsets)arg1;
-(UIEdgeInsets)margin;
-(double)visibleHeight;
-(void)setVisibleHeight:(double)arg1;
-(double)travelTime;
-(void)setTravelTime:(double)arg1;
-(BOOL)usesSmallText;
-(void)setTravelTimeHeight:(double)arg1;
-(double)travelTimeHeight;
-(void)setUsesSmallText:(BOOL)arg1;
-(BOOL)isProposedTime;
-(void)setIsProposedTime:(BOOL)arg1;
-(EKEvent *)occurrence;
-(void)setIsVibrant:(BOOL)arg1;
-(void)setOccurrence:(id)arg1;
-(void)setTopYBoundaryForText:(double)arg1;
-(long long)colorBackgroundStyle;
-(BOOL)isDimmed;
-(BOOL)isVibrant;
-(CGRect)backgroundRect;
-(long long)birthdayCount;
-(double)topYBoundaryForText;
-(void)setIsDimmed:(BOOL)arg1;
-(void)setColorBackgroundStyle:(long long)arg1;
-(void)setBackgroundRect:(CGRect)arg1;
-(void)setBirthdayCount:(long long)arg1;

@end

