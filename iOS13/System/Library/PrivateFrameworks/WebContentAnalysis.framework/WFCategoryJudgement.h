/*
* Generated on Monday, March 1, 2021 at 2:32:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WebContentAnalysis.framework/WebContentAnalysis
*/


@interface WFCategoryJudgement : NSObject {

	float score;
	long long category;

}
+(id)categoryJudgementWithCategory:(long long)arg1 score:(float)arg2 ;
-(id)description;
-(long long)category;
-(void)setCategory:(long long)arg1 ;
-(float)score;
-(void)setScore:(float)arg1 ;
-(long long)compareByCategory:(id)arg1 ;
-(long long)compareByScore:(id)arg1 ;
@end

