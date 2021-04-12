/*
* Generated on Thursday, January 14, 2021 at 2:23:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(long long)compare:(id)arg1 ;
-(ICSEvent *)masterEvent;
-(void)setDocument:(ICSDocument *)arg1 ;
-(NSString *)filename;
-(ICSCalendar *)calendar;
-(void)setData:(NSData *)arg1 ;
-(NSArray *)occurrences;
-(id)description;
-(void)setFilename:(NSString *)arg1 ;
-(ICSEvent *)event;
-(NSData *)data;
-(void)setEvent:(ICSEvent *)arg1 ;
-(id)initWithData:(id)arg1 filename:(id)arg2 scheduleChanges:(id)arg3 ;
-(void)setScheduleChanges:(CalDAVScheduleChangesProperty *)arg1 ;
-(id)initWithData:(id)arg1 filename:(id)arg2 ;
-(NSArray *)allOccurrences;
-(CalDAVScheduleChangesProperty *)scheduleChanges;
-(ICSDocument *)document;
@end

