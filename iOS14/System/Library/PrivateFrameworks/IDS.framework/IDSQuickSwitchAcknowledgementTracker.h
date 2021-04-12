/*
* Generated on Thursday, January 14, 2021 at 2:21:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/IDS
*/


#import <IDS/IDS-Structs.h>
@class NSMutableSet;

@interface IDSQuickSwitchAcknowledgementTracker : NSObject {

	NSMutableSet* _delegateIdentifiers;
	opaque_pthread_mutex_t _delegateIdentifiersMutex;

}

@property (nonatomic,readonly) BOOL isAwaitingAcknowledgement; 
-(void)stopAwaitingAcknowledgementFromAllServiceDelegates;
-(id)init;
-(void)_accessDelegateIdentifiersInCriticalSectionWithBlock:(/*^block*/id)arg1 ;
-(void)stopAwaitingAcknowledgementFromServiceDelegateWithIdentifier:(id)arg1 ;
-(BOOL)isAwaitingAcknowledgement;
-(id)awaitAcknowledgementFromServiceDelegate:(id)arg1 ;
-(id)identifierForServiceDelegate:(id)arg1 ;
-(void)dealloc;
@end

