/*
* Generated on Thursday, January 14, 2021 at 2:28:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WebContentAnalysis.framework/WebContentAnalysis
*/


@interface WFCategoryJudgement : NSObject {

	float score;
	long long category;

}
+(id)categoryJudgementWithCategory:(long long)arg1 score:(float)arg2 ;
-(void)setCategory:(long long)arg1 ;
-(float)score;
-(void)setScore:(float)arg1 ;
-(long long)category;
-(id)description;
-(long long)compareByCategory:(id)arg1 ;
-(long long)compareByScore:(id)arg1 ;
@end

