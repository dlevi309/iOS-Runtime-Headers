/*
* Generated on Thursday, January 14, 2021 at 2:23:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SafariCore.framework/SafariCore
*/

@class NSString;


@protocol WBSCloudKitContainerManateeObserving <NSObject>
@property (nonatomic,copy,readonly) NSString * containerIdentifier; 
@property (nonatomic,copy) id stateChangeObserver; 
@required
-(id)stateChangeObserver;
-(NSString *)containerIdentifier;
-(id)initWithContainerIdentifier:(id)arg1 appleAccountInformationProvider:(id)arg2;
-(void)setStateChangeObserver:(/*^block*/id)arg1;
-(void)determineManateeStateWithCompletion:(/*^block*/id)arg1;

@end

