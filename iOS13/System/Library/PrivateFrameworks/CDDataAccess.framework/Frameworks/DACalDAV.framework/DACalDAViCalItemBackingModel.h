/*
* Generated on Monday, March 1, 2021 at 2:34:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CDDataAccess.framework/Frameworks/DACalDAV.framework/DACalDAV
*/

@class REMObjectID, NSString;


@protocol DACalDAViCalItemBackingModel <NSObject>
@property (nonatomic,readonly) REMObjectID * objectID; 
@property (nonatomic,readonly) NSString * daCalendarItemUniqueIdentifier; 
@property (nonatomic,readonly) NSString * externalModificationTag; 
@required
-(REMObjectID *)objectID;
-(NSString *)externalModificationTag;
-(NSString *)daCalendarItemUniqueIdentifier;
-(id)updatableBackingModel;

@end

