/*
* Generated on Monday, March 1, 2021 at 2:31:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
*/


@class NSString, EKCalendar, UIColor, EKGroupInfo, UIImage;

@interface EKCalendarInfo : NSObject {

	NSString* _title;
	BOOL _selected;
	BOOL _isEnabled;
	int _customGroupType;
	EKCalendar* _calendar;
	UIColor* _color;
	EKGroupInfo* _group;

}

@property (nonatomic,retain) EKCalendar * calendar;                    //@synthesize calendar=_calendar - In the implementation block
@property (nonatomic,retain) UIColor * color;                          //@synthesize color=_color - In the implementation block
@property (assign,nonatomic) BOOL selected;                            //@synthesize selected=_selected - In the implementation block
@property (assign,nonatomic,__weak) EKGroupInfo * group;               //@synthesize group=_group - In the implementation block
@property (nonatomic,copy,readonly) NSString * title; 
@property (nonatomic,readonly) int displayOrder; 
@property (nonatomic,readonly) BOOL isSubscribed; 
@property (nonatomic,readonly) BOOL isShared; 
@property (nonatomic,readonly) BOOL isPublished; 
@property (nonatomic,readonly) BOOL isEditable; 
@property (assign,nonatomic) BOOL isEnabled;                           //@synthesize isEnabled=_isEnabled - In the implementation block
@property (nonatomic,readonly) BOOL excludeFromSelectAll; 
@property (assign,nonatomic) int customGroupType;                      //@synthesize customGroupType=_customGroupType - In the implementation block
@property (nonatomic,readonly) UIImage * icon; 
@property (nonatomic,readonly) UIImage * highlightedIcon; 
-(id)description;
-(EKCalendar *)calendar;
-(void)setCalendar:(EKCalendar *)arg1 ;
-(void)setGroup:(EKGroupInfo *)arg1 ;
-(NSString *)title;
-(BOOL)isEnabled;
-(UIColor *)color;
-(void)setColor:(UIColor *)arg1 ;
-(EKGroupInfo *)group;
-(UIImage *)icon;
-(void)setSelected:(BOOL)arg1 ;
-(BOOL)selected;
-(BOOL)isEditable;
-(id)initWithCalendar:(id)arg1 ;
-(BOOL)isShared;
-(void)setIsEnabled:(BOOL)arg1 ;
-(BOOL)isSubscribed;
-(void)_updateCustomGroupType;
-(int)displayOrder;
-(BOOL)isPublished;
-(BOOL)excludeFromSelectAll;
-(UIImage *)highlightedIcon;
-(int)customGroupType;
-(void)setCustomGroupType:(int)arg1 ;
@end

