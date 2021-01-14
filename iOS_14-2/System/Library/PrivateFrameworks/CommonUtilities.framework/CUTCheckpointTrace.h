/*
* Generated on Thursday, January 14, 2021 at 2:21:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CommonUtilities.framework/CommonUtilities
*/

#import <CommonUtilities/CUTCheckpointRange.h>

@class NSMutableArray;

@interface CUTCheckpointTrace : CUTCheckpointRange {

	NSMutableArray* _mutableCheckpoints;

}

@property (nonatomic,retain) NSMutableArray * mutableCheckpoints;              //@synthesize mutableCheckpoints=_mutableCheckpoints - In the implementation block
-(void)freeze;
-(id)description;
-(void)_appendReportToMutableString:(id)arg1 indentation:(long long)arg2 paddedNameLength:(long long)arg3 ;
-(void)setAssertsUseAfterFreeze:(BOOL)arg1 ;
-(id)initWithStartDate:(id)arg1 endDate:(id)arg2 name:(id)arg3 uniqueIdentifier:(id)arg4 ;
-(NSMutableArray *)mutableCheckpoints;
-(id)checkpoints;
-(id)instantCheckpointWithName:(id)arg1 extraIdentifier:(id)arg2 ;
-(id)_identifierWithExtraIdentifier:(id)arg1 ;
-(id)appendCheckpoint:(id)arg1 ;
-(id)rangeCheckpointWithName:(id)arg1 extraIdentifier:(id)arg2 ;
-(id)instantCheckpointWithName:(id)arg1 ;
-(id)rangeCheckpointWithName:(id)arg1 ;
-(void)setMutableCheckpoints:(NSMutableArray *)arg1 ;
@end

