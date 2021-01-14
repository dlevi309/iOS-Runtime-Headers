/*
* Generated on Thursday, January 14, 2021 at 2:24:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SPFinder.framework/SPFinder
*/


@protocol SPFinderStateManagement <NSObject>
@property (nonatomic,copy) id stateInfoChangedBlock; 
@required
-(void)start;
-(id)stateInfoChangedBlock;
-(void)stateInfoWithCompletion:(/*^block*/id)arg1;
-(void)setStateInfoChangedBlock:(/*^block*/id)arg1;

@end

