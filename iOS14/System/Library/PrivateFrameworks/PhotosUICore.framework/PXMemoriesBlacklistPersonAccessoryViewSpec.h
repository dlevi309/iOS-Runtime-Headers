/*
* Generated on Thursday, January 14, 2021 at 2:22:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PXMemoriesBlacklistAccessoryViewSpec.h>

@protocol PXPerson;
@interface PXMemoriesBlacklistPersonAccessoryViewSpec : PXMemoriesBlacklistAccessoryViewSpec {

	id<PXPerson> _person;

}

@property (nonatomic,readonly) id<PXPerson> person;              //@synthesize person=_person - In the implementation block
+(id)specWithPerson:(id)arg1 ;
-(id<PXPerson>)person;
-(id)initWithPerson:(id)arg1 ;
@end

