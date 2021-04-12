/*
* Generated on Monday, March 1, 2021 at 2:33:12 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SPFinder.framework/SPFinder
*/


@protocol SPFinderStateManagement <NSObject>
@property (nonatomic,copy) id stateInfoChangedBlock; 
@required
-(void)start;
-(void)stateInfoWithCompletion:(/*^block*/id)arg1;
-(id)stateInfoChangedBlock;
-(void)setStateInfoChangedBlock:(/*^block*/id)arg1;

@end

