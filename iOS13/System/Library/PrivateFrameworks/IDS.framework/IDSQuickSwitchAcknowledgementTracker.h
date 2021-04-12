/*
* Generated on Monday, March 1, 2021 at 2:30:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/IDS
*/


#import <IDS/IDS-Structs.h>
@class NSMutableSet;

@interface IDSQuickSwitchAcknowledgementTracker : NSObject {

	NSMutableSet* _delegateIdentifiers;
	opaque_pthread_mutex_t _delegateIdentifiersMutex;

}

@property (nonatomic,readonly) BOOL isAwaitingAcknowledgement; 
-(id)init;
-(void)dealloc;
-(void)_accessDelegateIdentifiersInCriticalSectionWithBlock:(/*^block*/id)arg1 ;
-(id)identifierForServiceDelegate:(id)arg1 ;
-(BOOL)isAwaitingAcknowledgement;
-(id)awaitAcknowledgementFromServiceDelegate:(id)arg1 ;
-(void)stopAwaitingAcknowledgementFromServiceDelegateWithIdentifier:(id)arg1 ;
-(void)stopAwaitingAcknowledgementFromAllServiceDelegates;
@end

