/*
* Generated on Thursday, January 14, 2021 at 2:23:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DACalDAV.framework/DACalDAV
*/


@class NSString, CalDAVOccurrenceChange, NSMutableDictionary, NSArray;

@interface CalDAVScheduleChangesProperty : NSObject {

	int _actionType;
	NSString* _dateStamp;
	NSString* _attendeeAddress;
	CalDAVOccurrenceChange* _masterChange;
	NSMutableDictionary* _occurrenceChanges;

}

@property (nonatomic,retain) NSMutableDictionary * occurrenceChanges;              //@synthesize occurrenceChanges=_occurrenceChanges - In the implementation block
@property (nonatomic,readonly) BOOL isCancel; 
@property (nonatomic,readonly) BOOL isReply; 
@property (nonatomic,readonly) BOOL isUpdate; 
@property (nonatomic,readonly) BOOL isCreate; 
@property (nonatomic,readonly) NSArray * recurrenceIDs; 
@property (nonatomic,retain) NSString * dateStamp;                                 //@synthesize dateStamp=_dateStamp - In the implementation block
@property (assign,nonatomic) int actionType;                                       //@synthesize actionType=_actionType - In the implementation block
@property (nonatomic,retain) NSString * attendeeAddress;                           //@synthesize attendeeAddress=_attendeeAddress - In the implementation block
@property (nonatomic,retain) CalDAVOccurrenceChange * masterChange;                //@synthesize masterChange=_masterChange - In the implementation block
+(void)initialize;
+(id)debugStringForType:(int)arg1 ;
+(id)propertyWithItem:(id)arg1 ;
-(BOOL)isUpdate;
-(void)setActionType:(int)arg1 ;
-(int)actionType;
-(id)init;
-(NSString *)dateStamp;
-(BOOL)isCreate;
-(BOOL)isCancel;
-(void)setMasterChange:(CalDAVOccurrenceChange *)arg1 ;
-(void)setOccurrenceChanges:(NSMutableDictionary *)arg1 ;
-(void)addOccurrenceChange:(id)arg1 ;
-(NSMutableDictionary *)occurrenceChanges;
-(NSArray *)recurrenceIDs;
-(id)changeForOccurrence:(id)arg1 ;
-(CalDAVOccurrenceChange *)masterChange;
-(NSString *)attendeeAddress;
-(BOOL)isReply;
-(void)setDateStamp:(NSString *)arg1 ;
-(void)setAttendeeAddress:(NSString *)arg1 ;
@end

