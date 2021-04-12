/*
* Generated on Monday, March 1, 2021 at 2:33:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DACalDAV.framework/DACalDAV
*/


@class NSData, CalDAVScheduleChangesProperty, NSString, ICSDocument, ICSEvent, ICSCalendar, NSArray;

@interface CaliTIPMessage : NSObject {

	NSData* _data;
	CalDAVScheduleChangesProperty* _scheduleChanges;
	NSString* _filename;
	ICSDocument* _document;
	ICSEvent* _event;

}

@property (nonatomic,copy) NSData * data;                                                  //@synthesize data=_data - In the implementation block
@property (nonatomic,retain) CalDAVScheduleChangesProperty * scheduleChanges;              //@synthesize scheduleChanges=_scheduleChanges - In the implementation block
@property (nonatomic,copy) NSString * filename;                                            //@synthesize filename=_filename - In the implementation block
@property (nonatomic,retain) ICSDocument * document;                                       //@synthesize document=_document - In the implementation block
@property (nonatomic,retain) ICSEvent * event;                                             //@synthesize event=_event - In the implementation block
@property (nonatomic,readonly) ICSCalendar * calendar; 
@property (nonatomic,readonly) ICSEvent * masterEvent; 
@property (nonatomic,readonly) NSArray * occurrences; 
@property (nonatomic,readonly) NSArray * allOccurrences; 
-(id)description;
-(long long)compare:(id)arg1 ;
-(ICSCalendar *)calendar;
-(NSData *)data;
-(void)setData:(NSData *)arg1 ;
-(NSString *)filename;
-(void)setFilename:(NSString *)arg1 ;
-(ICSEvent *)event;
-(void)setEvent:(ICSEvent *)arg1 ;
-(void)setDocument:(ICSDocument *)arg1 ;
-(ICSDocument *)document;
-(NSArray *)occurrences;
-(ICSEvent *)masterEvent;
-(id)initWithData:(id)arg1 filename:(id)arg2 scheduleChanges:(id)arg3 ;
-(void)setScheduleChanges:(CalDAVScheduleChangesProperty *)arg1 ;
-(id)initWithData:(id)arg1 filename:(id)arg2 ;
-(NSArray *)allOccurrences;
-(CalDAVScheduleChangesProperty *)scheduleChanges;
@end

