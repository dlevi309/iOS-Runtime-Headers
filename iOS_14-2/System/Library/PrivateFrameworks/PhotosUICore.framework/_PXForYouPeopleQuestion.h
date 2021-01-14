/*
* Generated on Thursday, January 14, 2021 at 2:22:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/


@class PHPerson;

@interface _PXForYouPeopleQuestion : NSObject {

	long long _questionType;
	PHPerson* _targetPerson;

}

@property (nonatomic,readonly) long long questionType;               //@synthesize questionType=_questionType - In the implementation block
@property (nonatomic,readonly) PHPerson * targetPerson;              //@synthesize targetPerson=_targetPerson - In the implementation block
-(long long)questionType;
-(PHPerson *)targetPerson;
-(id)initWithQuestionType:(long long)arg1 targetPerson:(id)arg2 ;
@end

