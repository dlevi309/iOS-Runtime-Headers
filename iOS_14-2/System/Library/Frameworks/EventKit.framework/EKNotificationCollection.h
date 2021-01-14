/*
* Generated on Thursday, January 14, 2021 at 2:21:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
*/

#import <EventKit/EKObject.h>

@class EKSource, NSSet;

@interface EKNotificationCollection : EKObject

@property (nonatomic,readonly) EKSource * source; 
@property (nonatomic,copy) NSSet * notifications; 
+(BOOL)isWeakRelationship;
+(id)knownRelationshipMultiValueKeys;
+(Class)frozenClass;
-(BOOL)validate:(id*)arg1 ;
-(BOOL)commit:(id*)arg1 ;
-(id)initWithOptions:(id)arg1 ;
-(void)setExternalID:(id)arg1 ;
-(unsigned)flags;
-(void)setSource:(EKSource *)arg1 ;
-(void)setFlags:(unsigned)arg1 ;
-(void)setNotifications:(NSSet *)arg1 ;
-(NSSet *)notifications;
-(EKSource *)source;
-(void)_setNotificationsCollectionFlag;
-(void)setExternalIDTag:(id)arg1 ;
-(BOOL)_hasNotificationsCollectionFlag;
-(void)addNotification:(id)arg1 ;
-(void)removeNotification:(id)arg1 ;
@end

