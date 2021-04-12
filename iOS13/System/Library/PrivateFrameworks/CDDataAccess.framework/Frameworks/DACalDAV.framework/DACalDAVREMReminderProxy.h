/*
* Generated on Monday, March 1, 2021 at 2:34:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CDDataAccess.framework/Frameworks/DACalDAV.framework/DACalDAV
*/

#import <DACalDAV/DACalDAViCalItemUpdatableBackingModel.h>
#import <DACalDAV/DACalDAViCalItemBackingModel.h>

@class REMObjectID, NSString;

@interface DACalDAVREMReminderProxy : NSObject <DACalDAViCalItemUpdatableBackingModel, DACalDAViCalItemBackingModel> {

	REMObjectID* objectID;
	NSString* daCalendarItemUniqueIdentifier;
	NSString* externalModificationTag;

}

@property (nonatomic,retain) REMObjectID * objectID; 
@property (nonatomic,copy) NSString * daCalendarItemUniqueIdentifier; 
@property (nonatomic,copy) NSString * externalModificationTag; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)description;
-(REMObjectID *)objectID;
-(void)setObjectID:(REMObjectID *)arg1 ;
-(NSString *)externalModificationTag;
-(void)setExternalModificationTag:(NSString *)arg1 ;
-(void)setDaCalendarItemUniqueIdentifier:(NSString *)arg1 ;
-(NSString *)daCalendarItemUniqueIdentifier;
-(id)initWithReminder:(id)arg1 ;
-(id)updatableBackingModel;
-(void)updatePropertiesWithReminder:(id)arg1 ;
@end

