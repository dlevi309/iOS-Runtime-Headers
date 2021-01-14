/*
* Generated on Thursday, January 14, 2021 at 2:24:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
@property (nonatomic,retain) HFItem * item;                                                    //@synthesize item=_item - In the implementation block
@property (assign,nonatomic,__weak) id<HUResizableCellDelegate> resizingDelegate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_requiredKeyDescriptors;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)init;
-(HFItem *)item;
-(void)updateUIWithAnimation:(BOOL)arg1 ;
-(void)prepareForReuse;
-(void)setItem:(HFItem *)arg1 ;
-(HUContactView *)contactView;
-(void)_createSubviews;
-(void)setAvatarDiameter:(double)arg1 ;
-(double)avatarDiameter;
-(void)setContactView:(HUContactView *)arg1 ;
@end

