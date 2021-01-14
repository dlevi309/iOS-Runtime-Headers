/*
* Generated on Thursday, January 14, 2021 at 2:22:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PXRecipient.h>

@class NSString, PHPerson;

@interface PXCMMMomentsParticipant : PXRecipient {

	NSString* _additionalLocalizedName;
	PHPerson* _person;

}

@property (nonatomic,readonly) PHPerson * person;              //@synthesize person=_person - In the implementation block
-(PHPerson *)person;
-(id)localizedName;
-(id)initWithPerson:(id)arg1 ;
-(id)initWithEmailAddress:(id)arg1 phoneNumber:(id)arg2 localizedName:(id)arg3 ;
@end

