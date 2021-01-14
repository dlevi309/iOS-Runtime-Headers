/*
* Generated on Thursday, January 14, 2021 at 2:22:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUI/PUAlbumGadget.h>

@class PXPeopleAlbumProvider;

@interface PUPeopleAlbumGadget : PUAlbumGadget {

	PXPeopleAlbumProvider* _albumProvider;

}

@property (nonatomic,retain) PXPeopleAlbumProvider * albumProvider;              //@synthesize albumProvider=_albumProvider - In the implementation block
-(id)albumListCellContentView;
-(void)reconfigure;
-(id)initWithCollection:(id)arg1 albumGadgetDelegate:(id)arg2 ;
-(void)contentViewWillAppear;
-(void)setAlbumProvider:(PXPeopleAlbumProvider *)arg1 ;
-(void)_setSubtitleForPeopleCount:(long long)arg1 onAlbumListCellContentView:(id)arg2 ;
-(void)_peopleAlbumChanged:(id)arg1 ;
-(PXPeopleAlbumProvider *)albumProvider;
-(void)_configureSubtitleForAlbumListCellContentView:(id)arg1 ;
-(id)title;
-(void)dealloc;
@end

