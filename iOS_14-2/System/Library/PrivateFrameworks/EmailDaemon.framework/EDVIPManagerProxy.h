/*
* Generated on Thursday, January 14, 2021 at 2:26:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
*/

#import <EmailDaemon/EmailDaemon-Structs.h>
#import <libobjc.A.dylib/EMVIPManagerInterface.h>

@class NSMapTable, NSSet, EDVIPManager, NSString;

@interface EDVIPManagerProxy : NSObject <EMVIPManagerInterface> {

	os_unfair_lock_s _observersLock;
	NSMapTable* _observersByIdentifier;
	NSSet* allVIPWaitForResult;
	EDVIPManager* _vipManager;

}

@property (nonatomic,readonly) EDVIPManager * vipManager;                     //@synthesize vipManager=_vipManager - In the implementation block
@property (nonatomic,copy,readonly) NSSet * allVIPWaitForResult; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(EDVIPManager *)vipManager;
-(void)removeVIPsWithEmailAddresses:(id)arg1 ;
-(void)saveVIPs:(id)arg1 ;
-(void)removeVIPsWithIdentifiers:(id)arg1 ;
-(void)cancelObservation:(id)arg1 ;
-(void)registerObserver:(id)arg1 observationIdentifier:(id)arg2 ;
-(void)_vipsDidChange:(id)arg1 ;
-(NSSet *)allVIPWaitForResult;
-(void)dealloc;
-(id)initWithVIPManager:(id)arg1 ;
@end

