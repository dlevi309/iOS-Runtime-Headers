/*
* Generated on Monday, March 1, 2021 at 2:34:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CDDataAccess.framework/CDDataAccess
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@interface DAAction : NSObject <NSSecureCoding> {

	BOOL _ignoresGuardianRestrictions;
	int _changeId;
	unsigned long long _itemChangeType;
	id _serverId;
	id _instanceId;
	id _changedItem;
	id _forwardedAttendees;
	id _forwardedAttendeeUUIDs;

}

@property (assign,nonatomic) unsigned long long itemChangeType;                   //@synthesize itemChangeType=_itemChangeType - In the implementation block
@property (nonatomic,retain) id serverId;                                         //@synthesize serverId=_serverId - In the implementation block
@property (nonatomic,retain) id instanceId;                                       //@synthesize instanceId=_instanceId - In the implementation block
@property (setter=_setChangedItem:,nonatomic,retain) id changedItem;              //@synthesize changedItem=_changedItem - In the implementation block
@property (assign,nonatomic) int changeId;                                        //@synthesize changeId=_changeId - In the implementation block
@property (nonatomic,retain) id forwardedAttendees;                               //@synthesize forwardedAttendees=_forwardedAttendees - In the implementation block
@property (nonatomic,retain) id forwardedAttendeeUUIDs;                           //@synthesize forwardedAttendeeUUIDs=_forwardedAttendeeUUIDs - In the implementation block
@property (assign,nonatomic) BOOL ignoresGuardianRestrictions;                    //@synthesize ignoresGuardianRestrictions=_ignoresGuardianRestrictions - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)message;
-(BOOL)ignoresGuardianRestrictions;
-(void)setIgnoresGuardianRestrictions:(BOOL)arg1 ;
-(id)initWithItemChangeType:(unsigned long long)arg1 changedItem:(id)arg2 serverId:(id)arg3 ;
-(id)serverId;
-(unsigned long long)itemChangeType;
-(id)changedItem;
-(void)setServerId:(id)arg1 ;
-(id)stringForItemChangeType:(unsigned long long)arg1 ;
-(int)changeId;
-(void)setItemChangeType:(unsigned long long)arg1 ;
-(void)_setChangedItem:(id)arg1 ;
-(void)setInstanceId:(id)arg1 ;
-(void)setChangeId:(int)arg1 ;
-(id)instanceId;
-(id)initWithItemChangeType:(unsigned long long)arg1 changedItem:(id)arg2 serverId:(id)arg3 instanceId:(id)arg4 ;
-(id)forwardedAttendees;
-(void)setForwardedAttendees:(id)arg1 ;
-(id)forwardedAttendeeUUIDs;
-(void)setForwardedAttendeeUUIDs:(id)arg1 ;
@end

