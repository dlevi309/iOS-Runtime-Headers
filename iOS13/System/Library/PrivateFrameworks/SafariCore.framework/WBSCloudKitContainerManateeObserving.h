/*
* Generated on Monday, March 1, 2021 at 2:32:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SafariCore.framework/SafariCore
*/

@class NSString;


@protocol WBSCloudKitContainerManateeObserving <NSObject>
@property (nonatomic,copy,readonly) NSString * containerIdentifier; 
@property (nonatomic,copy) id stateChangeObserver; 
@required
-(NSString *)containerIdentifier;
-(id)initWithContainerIdentifier:(id)arg1 appleAccountInformationProvider:(id)arg2;
-(void)determineManateeStateWithCompletion:(/*^block*/id)arg1;
-(id)stateChangeObserver;
-(void)setStateChangeObserver:(/*^block*/id)arg1;

@end

