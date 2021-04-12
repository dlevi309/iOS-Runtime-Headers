/*
* Generated on Thursday, January 14, 2021 at 2:22:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUI/PhotosUI-Structs.h>
#import <UIKitCore/UITableViewCell.h>

@protocol PUAlbumListTableViewCellDelegate;
@interface PUAlbumListTableViewCell : UITableViewCell {

	id<PUAlbumListTableViewCellDelegate> _stateChangeDelegate;

}

@property (assign,nonatomic,__weak) id<PUAlbumListTableViewCellDelegate> stateChangeDelegate;              //@synthesize stateChangeDelegate=_stateChangeDelegate - In the implementation block
-(id<PUAlbumListTableViewCellDelegate>)stateChangeDelegate;
-(void)setStateChangeDelegate:(id<PUAlbumListTableViewCellDelegate>)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)willTransitionToState:(unsigned long long)arg1 ;
@end

