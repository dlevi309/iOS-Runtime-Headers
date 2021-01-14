/*
* Generated on Thursday, January 14, 2021 at 2:22:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PXPhotosDetailsBarsController.h>

@class UIButton, PHPerson;

@interface PXPeopleDetailBarsController : PXPhotosDetailsBarsController {

	UIButton* _peopleTitleView;
	PHPerson* _person;

}

@property (nonatomic,retain) UIButton * peopleTitleView;              //@synthesize peopleTitleView=_peopleTitleView - In the implementation block
@property (nonatomic,retain) PHPerson * person;                       //@synthesize person=_person - In the implementation block
-(PHPerson *)person;
-(id)createTitleView;
-(id)createAssetActionManager;
-(void)setPerson:(PHPerson *)arg1 ;
-(UIButton *)peopleTitleView;
-(void)setPeopleTitleView:(UIButton *)arg1 ;
@end

