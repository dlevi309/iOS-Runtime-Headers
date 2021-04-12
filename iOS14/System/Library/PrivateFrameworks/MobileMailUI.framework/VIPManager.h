/*
* Generated on Thursday, January 14, 2021 at 2:26:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MobileMailUI.framework/MobileMailUI
*/

#import <MobileMailUI/MobileMailUI-Structs.h>
#import <libobjc.A.dylib/EMVIPManager.h>

@protocol OS_dispatch_queue, EMVIPManager;
@class NSSet, EAEmailAddressSet, NSLock, NSObject, NSString;

@interface VIPManager : NSObject <EMVIPManager> {

	NSLock* _abPersonByVIPIdentifierLock;
	CFDictionaryRef _abPersonByVIPIdentifier;
	NSObject*<OS_dispatch_queue> _queue;
	id<EMVIPManager> _backingManager;

}

@property (nonatomic,readonly) id<EMVIPManager> backingManager;                            //@synthesize backingManager=_backingManager - In the implementation block
@property (nonatomic,copy,readonly) NSSet * allVIPs; 
@property (nonatomic,copy,readonly) EAEmailAddressSet * allVIPEmailAddresses; 
@property (nonatomic,readonly) BOOL hasVIPs; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)defaultInstance;
+(os_unfair_lock_s*)defaultInstanceLock;
+(void)setBackingManager:(id)arg1 ;
-(id)criterionForEmailAddresses:(id)arg1 ;
-(id)initWithBackingManager:(id)arg1 ;
-(void)saveVIP:(id)arg1 ;
-(BOOL)isVIPAddress:(id)arg1 ;
-(void)deleteVIPWithIdentifier:(id)arg1 ;
-(void)removeVIPsWithEmailAddresses:(id)arg1 ;
-(id<EMVIPManager>)backingManager;
-(void)saveVIPs:(id)arg1 ;
-(void)removeVIPsWithIdentifiers:(id)arg1 ;
-(id)sortedVIPs;
-(const void*)existingPersonForVIP:(id)arg1 usingAddressBook:(void*)arg2 ;
-(EAEmailAddressSet *)allVIPEmailAddresses;
-(id)allVIPEmailAddressesCriterion;
-(BOOL)hasVIPs;
-(NSSet *)allVIPs;
-(void)_vipsDidChange:(id)arg1 ;
-(id)vipForEmailAddresses:(id)arg1 andDisplayNames:(id)arg2 ;
-(id)vipWithIdentifier:(id)arg1 ;
-(id)vipCriteria;
@end

