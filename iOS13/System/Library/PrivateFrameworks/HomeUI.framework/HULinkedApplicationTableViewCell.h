/*
* Generated on Monday, March 1, 2021 at 2:34:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HomeUI-Structs.h>
#import <UIKitCore/UITableViewCell.h>
#import <libobjc.A.dylib/HUCellProtocol.h>

@class HULinkedApplicationView, NSString, HFItem;

@interface HULinkedApplicationTableViewCell : UITableViewCell <HUCellProtocol> {

	HULinkedApplicationView* _linkedApplicationView;

}

@property (nonatomic,retain) HULinkedApplicationView * linkedApplicationView;                  //@synthesize linkedApplicationView=_linkedApplicationView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) HFItem * item; 
@property (assign,nonatomic,__weak) id<HUResizableCellDelegate> resizingDelegate; 
-(HFItem *)item;
-(void)setItem:(HFItem *)arg1 ;
-(void)layoutSubviews;
-(CGSize)systemLayoutSizeFittingSize:(CGSize)arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)updateUIWithAnimation:(BOOL)arg1 ;
-(HULinkedApplicationView *)linkedApplicationView;
-(void)setLinkedApplicationView:(HULinkedApplicationView *)arg1 ;
@end

