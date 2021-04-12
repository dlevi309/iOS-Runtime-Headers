/*
* Generated on Monday, March 1, 2021 at 2:32:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
*/

#import <EventKit/EKFrozenReminderObject.h>

@class NSString;

@interface EKFrozenReminderStructuredLocation : EKFrozenReminderObject

@property (readonly) NSString * uniqueIdentifier; 
+(BOOL)canCommitSelf;
+(id)uniqueIdentifierForREMObject:(id)arg1 ;
+(Class)meltedClass;
-(id)uuid;
-(id)title;
-(NSString *)uniqueIdentifier;
-(double)radius;
-(double)latitude;
-(double)longitude;
-(int)referenceFrame;
-(id)mapKitHandle;
-(id)_structuredLocation;
-(id)remObjectID;
-(id)updateParentToCommitSelf:(id)arg1 ;
-(id)initWithAlternateUniverseObject:(id)arg1 inEventStore:(id)arg2 withUpdatedChildObjects:(id)arg3 ;
-(id)updatedStructuredLocation;
-(void)setLatitudeAndLongitudeFromAlternateUniverseObject:(id)arg1 inChangeSet:(id)arg2 ;
@end

