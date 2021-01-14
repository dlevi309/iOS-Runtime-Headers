/*
* Generated on Thursday, January 14, 2021 at 2:27:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setExternalModificationTag:(NSString *)arg1 ;
-(id)initWithReminder:(id)arg1 ;
-(NSString *)externalModificationTag;
-(REMObjectID *)objectID;
-(void)setObjectID:(REMObjectID *)arg1 ;
-(NSString *)description;
-(void)setDaCalendarItemUniqueIdentifier:(NSString *)arg1 ;
-(NSString *)daCalendarItemUniqueIdentifier;
-(id)updatableBackingModel;
-(void)updatePropertiesWithReminder:(id)arg1 ;
@end

