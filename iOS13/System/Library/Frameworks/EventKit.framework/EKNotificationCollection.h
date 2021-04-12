/*
* Generated on Monday, March 1, 2021 at 2:32:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
*/

#import <EventKit/EKObject.h>

@class EKSource, NSSet;

@interface EKNotificationCollection : EKObject

@property (nonatomic,readonly) EKSource * source; 
@property (nonatomic,copy) NSSet * notifications; 
+(Class)frozenClass;
+(id)knownRelationshipMultiValueKeys;
+(BOOL)isWeakRelationship;
-(id)initWithOptions:(id)arg1 ;
-(unsigned)_flags;
-(EKSource *)source;
-(BOOL)validate:(id*)arg1 ;
-(NSSet *)notifications;
-(void)setNotifications:(NSSet *)arg1 ;
-(void)_setSource:(id)arg1 ;
-(void)addNotification:(id)arg1 ;
-(BOOL)commit:(id*)arg1 ;
-(void)_setExternalID:(id)arg1 ;
-(void)_setExternalIDTag:(id)arg1 ;
-(void)_setNotificationsCollectionFlag;
-(BOOL)_hasNotificationsCollectionFlag;
-(void)_setFlags:(unsigned)arg1 ;
-(void)removeNotification:(id)arg1 ;
@end

