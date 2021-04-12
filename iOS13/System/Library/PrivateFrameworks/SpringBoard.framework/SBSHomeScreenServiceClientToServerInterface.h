/*
* Generated on Monday, March 1, 2021 at 2:35:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

@class NSNumber;


@protocol SBSHomeScreenServiceClientToServerInterface
@property (nonatomic,copy) NSNumber * lowDensityIconLayoutEnabledValue; 
@required
-(oneway void)resetHomeScreenLayoutWithCompletion:(/*^block*/id)arg1;
-(id)folderPathToIconWithBundleIdentifier:(id)arg1;
-(void)addWidgetToTodayViewWithBundleIdentifier:(id)arg1;
-(oneway void)requestSuggestedApplicationWithBundleIdentifier:(id)arg1 assertionPort:(id)arg2 completion:(/*^block*/id)arg3;
-(NSNumber *)lowDensityIconLayoutEnabledValue;
-(void)setLowDensityIconLayoutEnabledValue:(id)arg1;

@end

