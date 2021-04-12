/*
* Generated on Monday, March 1, 2021 at 2:33:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DACalDAV.framework/DACalDAV
*/

@class NSString, CalDAVCalendarServerScheduleChangesItem, CalDAVUpdateOwnerItem;


@protocol CalDAVCalendarItemProtocol
@property (nonatomic,retain) NSString * scheduleTag; 
@property (nonatomic,retain) CalDAVCalendarServerScheduleChangesItem * scheduleChanges; 
@property (nonatomic,retain) CalDAVUpdateOwnerItem * createdBy; 
@property (nonatomic,retain) CalDAVUpdateOwnerItem * updatedBy; 
@required
-(void)setCreatedBy:(id)arg1;
-(CalDAVUpdateOwnerItem *)createdBy;
-(NSString *)scheduleTag;
-(void)setScheduleTag:(id)arg1;
-(void)setScheduleChanges:(id)arg1;
-(CalDAVCalendarServerScheduleChangesItem *)scheduleChanges;
-(CalDAVUpdateOwnerItem *)updatedBy;
-(void)setUpdatedBy:(id)arg1;

@end

