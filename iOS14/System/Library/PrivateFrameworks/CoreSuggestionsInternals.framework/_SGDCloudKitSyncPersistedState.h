/*
* Generated on Thursday, January 14, 2021 at 2:25:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
*/

#import <CoreSuggestionsInternals/CoreSuggestionsInternals-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSData, CKRecordID, NSNumber, CKServerChangeToken, NSString;

@interface _SGDCloudKitSyncPersistedState : NSObject <NSSecureCoding> {

	/*^block*/id _changeCallback;
	NSData* _salt;
	CKRecordID* _saltAtomicReferenceId;
	NSNumber* _saltUsesManatee;
	CKServerChangeToken* _syncToken;
	NSNumber* _hasSubscription;
	NSNumber* _eventsWereRemovedFromEventKit;
	NSString* _primaryICloudCalendarAccount;
	NSNumber* _hasDeferredSync;
	NSNumber* _hasDeferredProcessStateChanges;

}

@property (nonatomic,copy) id changeCallback;                                        //@synthesize changeCallback=_changeCallback - In the implementation block
@property (nonatomic,retain) NSData * salt;                                          //@synthesize salt=_salt - In the implementation block
@property (nonatomic,retain) CKRecordID * saltAtomicReferenceId;                     //@synthesize saltAtomicReferenceId=_saltAtomicReferenceId - In the implementation block
@property (nonatomic,retain) NSNumber * saltUsesManatee;                             //@synthesize saltUsesManatee=_saltUsesManatee - In the implementation block
@property (nonatomic,retain) CKServerChangeToken * syncToken;                        //@synthesize syncToken=_syncToken - In the implementation block
@property (nonatomic,retain) NSNumber * hasSubscription;                             //@synthesize hasSubscription=_hasSubscription - In the implementation block
@property (nonatomic,retain) NSNumber * eventsWereRemovedFromEventKit;               //@synthesize eventsWereRemovedFromEventKit=_eventsWereRemovedFromEventKit - In the implementation block
@property (nonatomic,retain) NSString * primaryICloudCalendarAccount;                //@synthesize primaryICloudCalendarAccount=_primaryICloudCalendarAccount - In the implementation block
@property (nonatomic,retain) NSNumber * hasDeferredSync;                             //@synthesize hasDeferredSync=_hasDeferredSync - In the implementation block
@property (nonatomic,retain) NSNumber * hasDeferredProcessStateChanges;              //@synthesize hasDeferredProcessStateChanges=_hasDeferredProcessStateChanges - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)properties;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)init;
-(NSData *)salt;
-(void)setupKvo;
-(void)setSyncToken:(CKServerChangeToken *)arg1 ;
-(NSNumber *)eventsWereRemovedFromEventKit;
-(NSNumber *)saltUsesManatee;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setSalt:(NSData *)arg1 ;
-(void)setEventsWereRemovedFromEventKit:(NSNumber *)arg1 ;
-(void)setPrimaryICloudCalendarAccount:(NSString *)arg1 ;
-(CKRecordID *)saltAtomicReferenceId;
-(void)setChangeCallback:(id)arg1 ;
-(id)description;
-(SEL)_setterForProperty:(objc_propertyRef)arg1 ;
-(void)setHasDeferredProcessStateChanges:(NSNumber *)arg1 ;
-(SEL)_getterForProperty:(objc_propertyRef)arg1 ;
-(NSNumber *)hasDeferredProcessStateChanges;
-(NSNumber *)hasDeferredSync;
-(void)stopKvo;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)primaryICloudCalendarAccount;
-(CKServerChangeToken *)syncToken;
-(void)setHasSubscription:(NSNumber *)arg1 ;
-(id)changeCallback;
-(NSNumber *)hasSubscription;
-(void)setSaltAtomicReferenceId:(CKRecordID *)arg1 ;
-(void)setSaltUsesManatee:(NSNumber *)arg1 ;
-(void)setHasDeferredSync:(NSNumber *)arg1 ;
-(void)dealloc;
@end

