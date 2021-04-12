/*
* Generated on Monday, March 1, 2021 at 2:33:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
*/

#import <CoreDAV/CoreDAVLeafDataPayload.h>
#import <CalDAV/CalDAVCalendarItemProtocol.h>

@class NSString, CalDAVCalendarServerScheduleChangesItem, CalDAVUpdateOwnerItem;

@interface CalDAVCalendarItemData : CoreDAVLeafDataPayload <CalDAVCalendarItemProtocol> {

	NSString* _scheduleTag;
	CalDAVCalendarServerScheduleChangesItem* _scheduleChanges;
	CalDAVUpdateOwnerItem* _createdBy;
	CalDAVUpdateOwnerItem* _updatedBy;

}

@property (nonatomic,retain) NSString * scheduleTag;                                                 //@synthesize scheduleTag=_scheduleTag - In the implementation block
@property (nonatomic,retain) CalDAVCalendarServerScheduleChangesItem * scheduleChanges;              //@synthesize scheduleChanges=_scheduleChanges - In the implementation block
@property (nonatomic,retain) CalDAVUpdateOwnerItem * createdBy;                                      //@synthesize createdBy=_createdBy - In the implementation block
@property (nonatomic,retain) CalDAVUpdateOwnerItem * updatedBy;                                      //@synthesize updatedBy=_updatedBy - In the implementation block
-(void)setCreatedBy:(CalDAVUpdateOwnerItem *)arg1 ;
-(CalDAVUpdateOwnerItem *)createdBy;
-(NSString *)scheduleTag;
-(void)setScheduleTag:(NSString *)arg1 ;
-(void)setScheduleChanges:(CalDAVCalendarServerScheduleChangesItem *)arg1 ;
-(CalDAVCalendarServerScheduleChangesItem *)scheduleChanges;
-(CalDAVUpdateOwnerItem *)updatedBy;
-(void)setUpdatedBy:(CalDAVUpdateOwnerItem *)arg1 ;
@end

