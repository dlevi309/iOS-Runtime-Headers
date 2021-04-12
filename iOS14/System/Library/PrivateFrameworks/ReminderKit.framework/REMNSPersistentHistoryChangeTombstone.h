/*
* Generated on Thursday, January 14, 2021 at 2:23:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
*/

#import <ReminderKit/REMChangeTombstone.h>

@class NSDictionary;

@interface REMNSPersistentHistoryChangeTombstone : REMChangeTombstone {

	NSDictionary* _persistentHistoryChangeTombstone;

}

@property (retain) NSDictionary * persistentHistoryChangeTombstone;              //@synthesize persistentHistoryChangeTombstone=_persistentHistoryChangeTombstone - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSDictionary *)persistentHistoryChangeTombstone;
-(id)shareeOwningListIdentifier;
-(id)shareeAddress;
-(id)assignmentOwningReminderIdentifier;
-(void)setPersistentHistoryChangeTombstone:(NSDictionary *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)externalIdentifier;
-(id)initWithDictionary:(id)arg1 ;
-(id)shareeDisplayName;
-(id)initWithCoder:(id)arg1 ;
-(id)objectIdentifier;
-(id)daIsEventOnlyContainer;
-(BOOL)isEqual:(id)arg1 ;
@end

