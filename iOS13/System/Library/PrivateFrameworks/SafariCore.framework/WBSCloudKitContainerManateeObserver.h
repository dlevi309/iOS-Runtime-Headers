/*
* Generated on Monday, March 1, 2021 at 2:32:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * containerIdentifier;              //@synthesize containerIdentifier=_containerIdentifier - In the implementation block
@property (nonatomic,copy) id stateChangeObserver; 
-(NSString *)containerIdentifier;
-(void)_accountChanged:(id)arg1 ;
-(void)_determineManateeStateWithCompletion:(/*^block*/id)arg1 ;
-(id)initWithContainerIdentifier:(id)arg1 appleAccountInformationProvider:(id)arg2 ;
-(void)determineManateeStateWithCompletion:(/*^block*/id)arg1 ;
-(id)stateChangeObserver;
-(void)setStateChangeObserver:(id)arg1 ;
@end

