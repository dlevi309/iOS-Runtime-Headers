/*
* Generated on Thursday, January 14, 2021 at 2:21:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
*/

#import <EventKit/EKNotification.h>

@class NSDate, NSSet;

@interface EKResourceChangeNotification : EKNotification

@property (nonatomic,copy) NSDate * lastModifiedDate; 
@property (nonatomic,copy) NSSet * resourceChanges; 
+(id)knownRelationshipMultiValueKeys;
+(Class)frozenClass;
-(NSSet *)resourceChanges;
-(void)setResourceChanges:(NSSet *)arg1 ;
-(void)addResourceChange:(id)arg1 ;
-(void)removeResourceChange:(id)arg1 ;
-(NSDate *)lastModifiedDate;
-(void)setLastModifiedDate:(NSDate *)arg1 ;
@end

