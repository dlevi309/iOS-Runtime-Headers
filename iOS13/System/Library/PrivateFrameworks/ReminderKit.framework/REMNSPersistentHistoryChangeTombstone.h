/*
* Generated on Monday, March 1, 2021 at 2:31:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
*/

#import <ReminderKit/REMChangeTombstone.h>

@class NSDictionary;

@interface REMNSPersistentHistoryChangeTombstone : REMChangeTombstone {

	NSDictionary* _persistentHistoryChangeTombstone;

}

@property (retain) NSDictionary * persistentHistoryChangeTombstone;              //@synthesize persistentHistoryChangeTombstone=_persistentHistoryChangeTombstone - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)objectIdentifier;
-(id)externalIdentifier;
-(NSDictionary *)persistentHistoryChangeTombstone;
-(id)daIsEventOnlyContainer;
-(id)shareeOwningListIdentifier;
-(id)shareeDisplayName;
-(id)shareeAddress;
-(void)setPersistentHistoryChangeTombstone:(NSDictionary *)arg1 ;
@end

