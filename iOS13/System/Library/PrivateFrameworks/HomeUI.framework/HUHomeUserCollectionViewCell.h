/*
* Generated on Monday, March 1, 2021 at 2:34:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HomeUI-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>
#import <libobjc.A.dylib/HUCellProtocol.h>

@class HFItem, HUContactView, NSString;

@interface HUHomeUserCollectionViewCell : UICollectionViewCell <HUCellProtocol> {

	HFItem* _item;
	HUContactView* _contactView;

}

@property (nonatomic,retain) HUContactView * contactView;                                      //@synthesize contactView=_contactView - In the implementation block
@property (assign,nonatomic) double avatarDiameter; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) HFItem * item;                                                    //@synthesize item=_item - In the implementation block
@property (assign,nonatomic,__weak) id<HUResizableCellDelegate> resizingDelegate; 
+(id)_requiredKeyDescriptors;
-(id)init;
-(HFItem *)item;
-(void)setItem:(HFItem *)arg1 ;
-(void)prepareForReuse;
-(id)initWithFrame:(CGRect)arg1 ;
-(HUContactView *)contactView;
-(void)_createSubviews;
-(double)avatarDiameter;
-(void)updateUIWithAnimation:(BOOL)arg1 ;
-(void)setAvatarDiameter:(double)arg1 ;
-(void)setContactView:(HUContactView *)arg1 ;
@end

