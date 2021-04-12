/*
* Generated on Thursday, January 14, 2021 at 2:21:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PassKitCore-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSSet, NSDate;

@interface PKPeerPaymentPreferences : NSObject <NSSecureCoding, NSCopying> {

	BOOL _requiresConfirmation;
	BOOL _canReceiveFormalPaymentRequests;
	BOOL _dirty;
	NSSet* _notifications;
	NSSet* _restrictions;
	NSDate* _lastUpdated;

}

@property (assign,nonatomic) BOOL requiresConfirmation;                         //@synthesize requiresConfirmation=_requiresConfirmation - In the implementation block
@property (assign,nonatomic) BOOL canReceiveFormalPaymentRequests;              //@synthesize canReceiveFormalPaymentRequests=_canReceiveFormalPaymentRequests - In the implementation block
@property (nonatomic,copy) NSSet * notifications;                               //@synthesize notifications=_notifications - In the implementation block
@property (nonatomic,copy) NSSet * restrictions;                                //@synthesize restrictions=_restrictions - In the implementation block
@property (assign,getter=isDirty,nonatomic) BOOL dirty;                         //@synthesize dirty=_dirty - In the implementation block
@property (nonatomic,retain) NSDate * lastUpdated;                              //@synthesize lastUpdated=_lastUpdated - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSDate *)lastUpdated;
-(id)dictionaryRepresentation;
-(void)setDirty:(BOOL)arg1 ;
-(BOOL)isDirty;
-(BOOL)requiresConfirmation;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(void)setLastUpdated:(NSDate *)arg1 ;
-(id)description;
-(NSSet *)restrictions;
-(void)setRestrictions:(NSSet *)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(void)setNotifications:(NSSet *)arg1 ;
-(id)initWithDictionary:(id)arg1 lastUpdated:(id)arg2 ;
-(id)restrictionWithType:(unsigned long long)arg1 altDSID:(id)arg2 ;
-(void)removeRestrictionType:(unsigned long long)arg1 altDSID:(id)arg2 ;
-(BOOL)isEqualToPreferences:(id)arg1 ;
-(id)notificationWithType:(unsigned long long)arg1 altDSID:(id)arg2 ;
-(void)addRestrictionType:(unsigned long long)arg1 altDSID:(id)arg2 ;
-(void)didUpdateNotification:(id)arg1 ;
-(void)setRequiresConfirmation:(BOOL)arg1 ;
-(BOOL)canReceiveFormalPaymentRequests;
-(void)setCanReceiveFormalPaymentRequests:(BOOL)arg1 ;
-(BOOL)isOutOfDate;
-(NSSet *)notifications;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

