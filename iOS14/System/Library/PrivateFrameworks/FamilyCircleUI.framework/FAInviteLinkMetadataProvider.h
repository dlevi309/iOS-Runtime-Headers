/*
* Generated on Thursday, January 14, 2021 at 2:25:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/FamilyCircleUI.framework/FamilyCircleUI
*/


@class FAInviteContext;

@interface FAInviteLinkMetadataProvider : NSObject {

	FAInviteContext* _context;

}
-(id)_defaultIcon;
-(id)initWithContext:(id)arg1 ;
-(id)_defaultImage;
-(id)_imageNamed:(id)arg1 ;
-(void)loadMetatadataWithCompletion:(/*^block*/id)arg1 ;
-(void)loadImageWithURL:(id)arg1 enableTextOverlay:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(id)linkMetadataWithImage:(id)arg1 icon:(id)arg2 ;
-(id)_colorForString:(id)arg1 ;
-(void)fetchImageFromURL:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

