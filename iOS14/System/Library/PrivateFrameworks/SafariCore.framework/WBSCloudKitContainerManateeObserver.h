/*
* Generated on Thursday, January 14, 2021 at 2:23:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SafariCore.framework/SafariCore
*/

#import <libobjc.A.dylib/WBSCloudKitContainerManateeObserving.h>

@protocol OS_dispatch_queue, WBSAppleAccountInformationProviding;
@class NSString, NSObject, CKContainer, NSMutableArray;

@interface WBSCloudKitContainerManateeObserver : NSObject <WBSCloudKitContainerManateeObserving> {

	NSObject*<OS_dispatch_queue> _queue;
	CKContainer* _container;
	BOOL _determiningManateeState;
	long long _currentState;
	/*^block*/id _stateChangeObserver;
	NSMutableArray* _stateDeterminationCompletionBlocks;
	id<WBSAppleAccountInformationProviding> _appleAccountInformationProvider;
	NSString* _containerIdentifier;

}

@property (nonatomic,copy,readonly) NSString * containerIdentifier;              //@synthesize containerIdentifier=_containerIdentifier - In the implementation block
@property (nonatomic,copy) id stateChangeObserver; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_accountChanged:(id)arg1 ;
-(void)_determineManateeStateWithCompletion:(/*^block*/id)arg1 ;
-(id)stateChangeObserver;
-(NSString *)containerIdentifier;
-(id)initWithContainerIdentifier:(id)arg1 appleAccountInformationProvider:(id)arg2 ;
-(void)setStateChangeObserver:(id)arg1 ;
-(void)determineManateeStateWithCompletion:(/*^block*/id)arg1 ;
@end

