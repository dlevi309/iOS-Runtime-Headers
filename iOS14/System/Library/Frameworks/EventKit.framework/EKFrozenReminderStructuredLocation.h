/*
* Generated on Thursday, January 14, 2021 at 2:21:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
*/

#import <EventKit/EKFrozenReminderObject.h>

@class NSString;

@interface EKFrozenReminderStructuredLocation : EKFrozenReminderObject

@property (readonly) NSString * uniqueIdentifier; 
+(Class)meltedClass;
+(BOOL)canCommitSelf;
+(id)uniqueIdentifierForREMObject:(id)arg1 ;
-(double)latitude;
-(id)uuid;
-(id)remObjectID;
-(id)mapKitHandle;
-(double)longitude;
-(NSString *)uniqueIdentifier;
-(int)referenceFrame;
-(double)radius;
-(id)address;
-(id)updateParentToCommitSelf:(id)arg1 ;
-(id)_structuredLocation;
-(void)setLatitudeAndLongitudeFromAlternateUniverseObject:(id)arg1 inChangeSet:(id)arg2 ;
-(id)initWithAlternateUniverseObject:(id)arg1 inEventStore:(id)arg2 withUpdatedChildObjects:(id)arg3 ;
-(id)updatedStructuredLocation;
-(id)title;
@end

