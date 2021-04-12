/*
* Generated on Thursday, January 14, 2021 at 2:23:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
*/


@class NSString, EKCalendar, UIColor, EKGroupInfo, UIImage;

@interface EKCalendarInfo : NSObject {

	NSString* _title;
	BOOL _selected;
	BOOL _isEnabled;
	EKCalendar* _calendar;
	UIColor* _color;
	EKGroupInfo* _group;
	unsigned long long _customGroupType;

}

@property (nonatomic,retain) EKCalendar * calendar;                           //@synthesize calendar=_calendar - In the implementation block
@property (nonatomic,retain) UIColor * color;                                 //@synthesize color=_color - In the implementation block
@property (assign,nonatomic) BOOL selected;                                   //@synthesize selected=_selected - In the implementation block
@property (assign,nonatomic,__weak) EKGroupInfo * group;                      //@synthesize group=_group - In the implementation block
@property (nonatomic,copy,readonly) NSString * title; 
@property (nonatomic,readonly) int displayOrder; 
@property (nonatomic,readonly) BOOL isSubscribed; 
@property (nonatomic,readonly) BOOL isShared; 
@property (nonatomic,readonly) BOOL isPublished; 
@property (nonatomic,readonly) BOOL isEditable; 
@property (assign,nonatomic) BOOL isEnabled;                                  //@synthesize isEnabled=_isEnabled - In the implementation block
@property (nonatomic,readonly) BOOL excludeFromSelectAll; 
@property (assign,nonatomic) unsigned long long customGroupType;              //@synthesize customGroupType=_customGroupType - In the implementation block
@property (nonatomic,readonly) UIImage * icon; 
@property (nonatomic,readonly) UIImage * highlightedIcon; 
-(BOOL)isEditable;
-(void)setGroup:(EKGroupInfo *)arg1 ;
-(EKGroupInfo *)group;
-(void)setIsEnabled:(BOOL)arg1 ;
-(void)setCalendar:(EKCalendar *)arg1 ;
-(UIColor *)color;
-(UIImage *)icon;
-(EKCalendar *)calendar;
-(void)setSelected:(BOOL)arg1 ;
-(void)_updateCustomGroupType;
-(BOOL)excludeFromSelectAll;
-(UIImage *)highlightedIcon;
-(unsigned long long)customGroupType;
-(void)setCustomGroupType:(unsigned long long)arg1 ;
-(BOOL)selected;
-(id)description;
-(void)setColor:(UIColor *)arg1 ;
-(int)displayOrder;
-(BOOL)isPublished;
-(BOOL)isShared;
-(BOOL)isSubscribed;
-(id)initWithCalendar:(id)arg1 ;
-(BOOL)isEnabled;
-(NSString *)title;
@end

