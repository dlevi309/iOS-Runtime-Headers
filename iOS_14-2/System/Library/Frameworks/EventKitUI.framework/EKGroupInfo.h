/*
* Generated on Thursday, January 14, 2021 at 2:23:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
*/


@class NSMutableArray, NSString, EKSource, NSArray, NSSet;

@interface EKGroupInfo : NSObject {

	NSMutableArray* _calendars;
	unsigned long long _customGroupType;
	NSString* _customTitle;
	NSString* _customTitleAtBeginningOfSentence;
	NSString* _typeTitle;
	NSString* _title;
	NSString* _titleForBeginningOfSentence;
	BOOL _selected;
	BOOL _showSelectAllButton;
	BOOL _showAccountErrorActionButton;
	EKSource* _source;
	NSString* _footer;
	unsigned long long _accountError;

}

@property (nonatomic,retain) EKSource * source;                                        //@synthesize source=_source - In the implementation block
@property (assign,nonatomic) BOOL selected;                                            //@synthesize selected=_selected - In the implementation block
@property (assign,nonatomic) BOOL showSelectAllButton;                                 //@synthesize showSelectAllButton=_showSelectAllButton - In the implementation block
@property (nonatomic,copy,readonly) NSString * title; 
@property (nonatomic,copy,readonly) NSString * typeTitle; 
@property (nonatomic,retain,readonly) NSArray * calendarInfos; 
@property (nonatomic,copy,readonly) NSSet * calendarSet; 
@property (nonatomic,copy,readonly) NSSet * selectedCalendarSet; 
@property (nonatomic,readonly) unsigned long long numCalendars; 
@property (nonatomic,readonly) unsigned long long numSelectableCalendars; 
@property (nonatomic,readonly) unsigned long long numSelectedCalendars; 
@property (nonatomic,readonly) BOOL showAddCalendarButton; 
@property (nonatomic,readonly) BOOL showCalendarNameIfSolitary; 
@property (nonatomic,readonly) int sortOrder; 
@property (nonatomic,readonly) BOOL isSubscribed; 
@property (assign,nonatomic) BOOL showAccountErrorActionButton;                        //@synthesize showAccountErrorActionButton=_showAccountErrorActionButton - In the implementation block
@property (nonatomic,retain) NSString * footer;                                        //@synthesize footer=_footer - In the implementation block
@property (assign,nonatomic) unsigned long long accountError;                          //@synthesize accountError=_accountError - In the implementation block
-(void)selectAll;
-(int)sortOrder;
-(id)initWithSource:(id)arg1 ;
-(NSString *)footer;
-(id)init;
-(void)setSelected:(BOOL)arg1 ;
-(void)setFooter:(NSString *)arg1 ;
-(BOOL)selected;
-(void)setSource:(EKSource *)arg1 ;
-(id)description;
-(NSSet *)calendarSet;
-(void)setShowSelectAllButton:(BOOL)arg1 ;
-(void)setCustomTitle:(id)arg1 forBeginningOfSentence:(id)arg2 ;
-(void)removeCalendar:(id)arg1 ;
-(id)titleForBeginningOfSentence:(BOOL)arg1 ;
-(unsigned long long)numCalendars;
-(NSArray *)calendarInfos;
-(unsigned long long)numSelectableCalendars;
-(id)initWithCustomGroupType:(unsigned long long)arg1 ;
-(void)insertCalendarInfo:(id)arg1 ;
-(void)selectNone;
-(NSString *)typeTitle;
-(unsigned long long)numSelectedCalendars;
-(id)calendarAtIndex:(unsigned long long)arg1 ;
-(id)copyCalendars;
-(NSSet *)selectedCalendarSet;
-(BOOL)showAddCalendarButton;
-(BOOL)showCalendarNameIfSolitary;
-(BOOL)showSelectAllButton;
-(BOOL)showAccountErrorActionButton;
-(void)setShowAccountErrorActionButton:(BOOL)arg1 ;
-(unsigned long long)accountError;
-(void)setAccountError:(unsigned long long)arg1 ;
-(BOOL)isSubscribed;
-(NSString *)title;
-(EKSource *)source;
@end

