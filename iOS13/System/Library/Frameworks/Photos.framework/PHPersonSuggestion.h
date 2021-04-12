/*
* Generated on Monday, March 1, 2021 at 2:30:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
*/


@class PHFace, PHPerson;

@interface PHPersonSuggestion : NSObject {

	BOOL _confirmed;
	PHFace* _keyFace;
	PHPerson* _person;

}

@property (nonatomic,readonly) PHFace * keyFace;               //@synthesize keyFace=_keyFace - In the implementation block
@property (nonatomic,readonly) PHPerson * person;              //@synthesize person=_person - In the implementation block
@property (nonatomic,readonly) BOOL confirmed;                 //@synthesize confirmed=_confirmed - In the implementation block
-(BOOL)confirmed;
-(PHFace *)keyFace;
-(PHPerson *)person;
-(id)initWithKeyFace:(id)arg1 person:(id)arg2 confirmed:(BOOL)arg3 ;
@end

