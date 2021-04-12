/*
* Generated on Thursday, January 14, 2021 at 2:27:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CDDataAccess.framework/Frameworks/DACalDAV.framework/DACalDAV
*/

@class REMObjectID, NSString;


@protocol DACalDAViCalItemBackingModel <NSObject>
@property (nonatomic,readonly) REMObjectID * objectID; 
@property (nonatomic,readonly) NSString * daCalendarItemUniqueIdentifier; 
@property (nonatomic,readonly) NSString * externalModificationTag; 
@required
-(NSString *)externalModificationTag;
-(REMObjectID *)objectID;
-(NSString *)daCalendarItemUniqueIdentifier;
-(id)updatableBackingModel;

@end

