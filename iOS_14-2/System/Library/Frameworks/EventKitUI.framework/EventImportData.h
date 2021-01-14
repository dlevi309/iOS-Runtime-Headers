/*
* Generated on Thursday, January 14, 2021 at 2:23:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
*/


@class NSString, NSDate, NSURL, NSData, EKStructuredLocation;

@interface EventImportData : NSObject {

	BOOL _prefersManagedCalendar;
	int _requestedAction;
	NSString* _title;
	NSDate* _startDate;
	NSDate* _endDate;
	NSURL* _URL;
	NSString* _notes;
	NSData* _icsData;
	NSString* _uniqueId;
	EKStructuredLocation* _structuredLocation;

}

@property (nonatomic,retain) NSString * title;                                       //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) NSDate * startDate;                                     //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,retain) NSDate * endDate;                                       //@synthesize endDate=_endDate - In the implementation block
@property (nonatomic,retain) NSURL * URL;                                            //@synthesize URL=_URL - In the implementation block
@property (nonatomic,retain) NSString * notes;                                       //@synthesize notes=_notes - In the implementation block
@property (nonatomic,retain) NSData * icsData;                                       //@synthesize icsData=_icsData - In the implementation block
@property (nonatomic,retain) NSString * uniqueId;                                    //@synthesize uniqueId=_uniqueId - In the implementation block
@property (nonatomic,retain) EKStructuredLocation * structuredLocation;              //@synthesize structuredLocation=_structuredLocation - In the implementation block
@property (assign,nonatomic) int requestedAction;                                    //@synthesize requestedAction=_requestedAction - In the implementation block
@property (assign,nonatomic) BOOL prefersManagedCalendar;                            //@synthesize prefersManagedCalendar=_prefersManagedCalendar - In the implementation block
+(id)acceptedTypeIdentifiers;
+(BOOL)isSessionManaged:(id)arg1 ;
+(id)eventImportDataFromData:(id)arg1 forType:(id)arg2 ;
+(id)_extractEventDataFromSpotlightIdentifier:(id)arg1 ;
+(id)_extractEventDataFromEventICSData:(id)arg1 ;
+(id)_extractEventDataFromReminderICSData:(id)arg1 ;
+(id)_extractEventDataFromURL:(id)arg1 ;
+(id)_extractEventDataFromUTF8StringData:(id)arg1 ;
+(id)_extractEventDataFromMapKitItemData:(id)arg1 ;
+(void)extractEventImportDataFromDropSession:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
+(BOOL)itemContainsCalendarICSData:(id)arg1 ;
-(NSString *)notes;
-(NSDate *)endDate;
-(void)setStartDate:(NSDate *)arg1 ;
-(id)init;
-(void)setNotes:(NSString *)arg1 ;
-(NSDate *)startDate;
-(void)setURL:(NSURL *)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(void)setEndDate:(NSDate *)arg1 ;
-(EKStructuredLocation *)structuredLocation;
-(NSData *)icsData;
-(NSURL *)URL;
-(NSString *)uniqueId;
-(void)setStructuredLocation:(EKStructuredLocation *)arg1 ;
-(void)setUniqueId:(NSString *)arg1 ;
-(void)setPrefersManagedCalendar:(BOOL)arg1 ;
-(void)setRequestedAction:(int)arg1 ;
-(void)setIcsData:(NSData *)arg1 ;
-(int)requestedAction;
-(BOOL)prefersManagedCalendar;
-(NSString *)title;
@end

