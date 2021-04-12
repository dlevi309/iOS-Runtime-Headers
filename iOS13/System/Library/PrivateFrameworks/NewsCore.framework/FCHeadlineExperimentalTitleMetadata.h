/*
* Generated on Monday, March 1, 2021 at 2:32:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/


@class NSString;

@interface FCHeadlineExperimentalTitleMetadata : NSObject {

	BOOL _isTitleExperimental;
	int _treatmentState;
	long long _arrayIndexUsedforTitle;
	NSString* _chosenTitle;

}

@property (nonatomic,readonly) BOOL isTitleExperimental;                      //@synthesize isTitleExperimental=_isTitleExperimental - In the implementation block
@property (nonatomic,readonly) long long arrayIndexUsedforTitle;              //@synthesize arrayIndexUsedforTitle=_arrayIndexUsedforTitle - In the implementation block
@property (nonatomic,readonly) int treatmentState;                            //@synthesize treatmentState=_treatmentState - In the implementation block
@property (nonatomic,copy,readonly) NSString * chosenTitle;                   //@synthesize chosenTitle=_chosenTitle - In the implementation block
-(NSString *)chosenTitle;
-(id)initWithChosenTitle:(id)arg1 isTitleExperimental:(BOOL)arg2 arrayIndexUsedforTitle:(long long)arg3 treatmentState:(int)arg4 ;
-(BOOL)isTitleExperimental;
-(long long)arrayIndexUsedforTitle;
-(int)treatmentState;
@end

