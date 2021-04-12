/*
* Generated on Monday, March 1, 2021 at 2:33:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
*/

#import <EmailDaemon/EmailDaemon-Structs.h>
#import <libobjc.A.dylib/EMVIPManagerInterface.h>

@class NSMapTable, EDVIPManager, NSString;

@interface EDVIPManagerProxy : NSObject <EMVIPManagerInterface> {

	os_unfair_lock_s _observersLock;
	NSMapTable* _observersByIdentifier;
	EDVIPManager* _vipManager;

}

@property (nonatomic,readonly) EDVIPManager * vipManager;              //@synthesize vipManager=_vipManager - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(EDVIPManager *)vipManager;
-(void)cancelObservation:(id)arg1 ;
-(void)registerObserver:(id)arg1 observationIdentifier:(id)arg2 ;
-(void)saveVIPs:(id)arg1 ;
-(void)removeVIPsWithIdentifiers:(id)arg1 ;
-(void)removeVIPsWithEmailAddresses:(id)arg1 ;
-(void)_vipsDidChange:(id)arg1 ;
-(id)initWithVIPManager:(id)arg1 ;
@end

