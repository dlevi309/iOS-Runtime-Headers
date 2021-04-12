/*
* Generated on Monday, March 1, 2021 at 2:34:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CDDataAccess.framework/Frameworks/DACalDAV.framework/DACalDAV
*/


@class ICSDate, NSMutableDictionary;

@interface CalDAVOccurrenceChange : NSObject {

	BOOL _isMaster;
	ICSDate* _recurrenceID;
	NSMutableDictionary* _changes;

}

@property (nonatomic,retain) NSMutableDictionary * changes;                //@synthesize changes=_changes - In the implementation block
@property (assign,nonatomic) BOOL isMaster;                                //@synthesize isMaster=_isMaster - In the implementation block
@property (nonatomic,retain) ICSDate * recurrenceID;                       //@synthesize recurrenceID=_recurrenceID - In the implementation block
@property (nonatomic,readonly) BOOL dateTimeChanged; 
@property (nonatomic,readonly) BOOL startTimeChanged; 
@property (nonatomic,readonly) BOOL endTimeChanged; 
@property (nonatomic,readonly) BOOL timeZoneChanged; 
@property (nonatomic,readonly) BOOL locationChanged; 
@property (nonatomic,readonly) BOOL summaryChanged; 
@property (nonatomic,readonly) BOOL urlChanged; 
@property (nonatomic,readonly) BOOL descriptionChanged; 
@property (nonatomic,readonly) BOOL statusChanged; 
@property (nonatomic,readonly) BOOL attendeesChanged; 
@property (nonatomic,readonly) BOOL attachmentsChanged; 
@property (nonatomic,readonly) BOOL recurrenceChanged; 
@property (nonatomic,readonly) BOOL participationChanged; 
@property (nonatomic,readonly) BOOL privateCommentChanged; 
@property (nonatomic,readonly) BOOL proposedStartDateChanged; 
+(id)changeWithOccurrenceID:(id)arg1 ;
+(id)changeWithItem:(id)arg1 ;
-(id)init;
-(NSMutableDictionary *)changes;
-(BOOL)isMaster;
-(void)setChanges:(NSMutableDictionary *)arg1 ;
-(BOOL)locationChanged;
-(BOOL)timeZoneChanged;
-(BOOL)statusChanged;
-(BOOL)proposedStartDateChanged;
-(void)setIsMaster:(BOOL)arg1 ;
-(void)addChangedProperty:(id)arg1 ;
-(BOOL)attendeesChanged;
-(BOOL)participationChanged;
-(BOOL)attachmentsChanged;
-(BOOL)summaryChanged;
-(BOOL)descriptionChanged;
-(BOOL)urlChanged;
-(BOOL)privateCommentChanged;
-(BOOL)startTimeChanged;
-(BOOL)endTimeChanged;
-(BOOL)dateTimeChanged;
-(BOOL)recurrenceChanged;
-(void)setRecurrenceID:(ICSDate *)arg1 ;
-(id)initWithOccurrenceID:(id)arg1 ;
-(ICSDate *)recurrenceID;
-(void)addChangedParameter:(id)arg1 ofProperty:(id)arg2 ;
-(BOOL)didPropertyChange:(id)arg1 ;
-(BOOL)didParameterChange:(id)arg1 onProperty:(id)arg2 ;
@end

