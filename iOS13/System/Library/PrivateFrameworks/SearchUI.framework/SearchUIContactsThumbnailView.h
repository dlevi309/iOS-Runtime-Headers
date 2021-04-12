/*
* Generated on Monday, March 1, 2021 at 2:33:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
*/

#import <SearchUI/SearchUI-Structs.h>
#import <ContactsUI/CNAvatarView.h>

@class SFContactImage;

@interface SearchUIContactsThumbnailView : CNAvatarView {

	SFContactImage* _contactImage;

}

@property (nonatomic,retain) SFContactImage * contactImage;              //@synthesize contactImage=_contactImage - In the implementation block
-(id)init;
-(CGSize)systemLayoutSizeFittingSize:(CGSize)arg1 ;
-(void)setContactImage:(SFContactImage *)arg1 ;
-(SFContactImage *)contactImage;
@end

