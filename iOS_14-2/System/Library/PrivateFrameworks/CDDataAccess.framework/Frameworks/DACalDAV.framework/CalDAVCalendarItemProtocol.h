/*
* Generated on Thursday, January 14, 2021 at 2:27:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CDDataAccess.framework/Frameworks/DACalDAV.framework/DACalDAV
*/

@class NSString, CalDAVCalendarServerScheduleChangesItem, CalDAVUpdateOwnerItem;


@protocol CalDAVCalendarItemProtocol
@property (nonatomic,retain) NSString * scheduleTag; 
@property (nonatomic,retain) CalDAVCalendarServerScheduleChangesItem * scheduleChanges; 
@property (nonatomic,retain) CalDAVUpdateOwnerItem * createdBy; 
@property (nonatomic,retain) CalDAVUpdateOwnerItem * updatedBy; 
@required
-(NSString *)scheduleTag;
-(void)setScheduleTag:(id)arg1;
-(CalDAVUpdateOwnerItem *)createdBy;
-(void)setScheduleChanges:(id)arg1;
-(CalDAVCalendarServerScheduleChangesItem *)scheduleChanges;
-(CalDAVUpdateOwnerItem *)updatedBy;
-(void)setCreatedBy:(id)arg1;
-(void)setUpdatedBy:(id)arg1;

@end

