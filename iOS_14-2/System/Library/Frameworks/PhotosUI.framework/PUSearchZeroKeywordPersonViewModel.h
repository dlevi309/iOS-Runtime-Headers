/*
* Generated on Thursday, January 14, 2021 at 2:22:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUI/PUSearchZeroKeywordBaseViewModel.h>

@class PHPerson;

@interface PUSearchZeroKeywordPersonViewModel : PUSearchZeroKeywordBaseViewModel {

	PHPerson* _person;

}

@property (nonatomic,readonly) PHPerson * person;              //@synthesize person=_person - In the implementation block
-(PHPerson *)person;
-(id)debugDictionary;
-(id)initWithRepresentedObject:(id)arg1 representedPerson:(id)arg2 ;
-(id)title;
@end

