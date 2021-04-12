/*
* Generated on Monday, March 1, 2021 at 2:34:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL hasVIPs; 
@property (nonatomic,copy,readonly) NSSet * allVIPs; 
@property (nonatomic,copy,readonly) EAEmailAddressSet * allVIPEmailAddresses; 
+(id)defaultInstance;
+(os_unfair_lock_s*)defaultInstanceLock;
+(void)setBackingManager:(id)arg1 ;
-(void)saveVIPs:(id)arg1 ;
-(void)removeVIPsWithIdentifiers:(id)arg1 ;
-(void)removeVIPsWithEmailAddresses:(id)arg1 ;
-(void)_vipsDidChange:(id)arg1 ;
-(BOOL)isVIPAddress:(id)arg1 ;
-(EAEmailAddressSet *)allVIPEmailAddresses;
-(id)vipWithIdentifier:(id)arg1 ;
-(BOOL)hasVIPs;
-(NSSet *)allVIPs;
-(id)vipForEmailAddresses:(id)arg1 andDisplayNames:(id)arg2 ;
-(id)initWithBackingManager:(id)arg1 ;
-(id<EMVIPManager>)backingManager;
-(id)sortedVIPs;
-(id)criterionForEmailAddresses:(id)arg1 ;
-(void)saveVIP:(id)arg1 ;
-(void)deleteVIPWithIdentifier:(id)arg1 ;
-(const void*)existingPersonForVIP:(id)arg1 usingAddressBook:(void*)arg2 ;
-(id)vipCriteria;
-(id)allVIPEmailAddressesCriterion;
@end

