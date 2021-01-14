/*
* Generated on Thursday, January 14, 2021 at 2:22:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/


@class PSIGroup;

@interface PSIRankedGroup : NSObject {

	PSIGroup* _group;
	double _score;

}

@property (nonatomic,readonly) PSIGroup * group;              //@synthesize group=_group - In the implementation block
@property (assign,nonatomic) double score;                    //@synthesize score=_score - In the implementation block
-(PSIGroup *)group;
-(id)initWithGroup:(id)arg1 score:(double)arg2 ;
-(double)score;
-(void)setScore:(double)arg1 ;
@end

