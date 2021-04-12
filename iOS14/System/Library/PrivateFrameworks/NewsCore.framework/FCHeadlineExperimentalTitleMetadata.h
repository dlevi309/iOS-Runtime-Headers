/*
* Generated on Thursday, January 14, 2021 at 2:21:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)isTitleExperimental;
-(NSString *)chosenTitle;
-(id)initWithChosenTitle:(id)arg1 isTitleExperimental:(BOOL)arg2 arrayIndexUsedforTitle:(long long)arg3 treatmentState:(int)arg4 ;
-(long long)arrayIndexUsedforTitle;
-(int)treatmentState;
@end

