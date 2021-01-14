/*
* Generated on Thursday, January 14, 2021 at 2:24:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HomeUI-Structs.h>
#import <UIKitCore/UITableViewCell.h>
#import <libobjc.A.dylib/HUCellProtocol.h>

@class HULinkedApplicationView, HFItem, NSString;

@interface HULinkedApplicationTableViewCell : UITableViewCell <HUCellProtocol> {

	HULinkedApplicationView* _linkedApplicationView;

}

@property (nonatomic,retain) HULinkedApplicationView * linkedApplicationView;                  //@synthesize linkedApplicationView=_linkedApplicationView - In the implementation block
@property (nonatomic,retain) HFItem * item; 
@property (assign,nonatomic,__weak) id<HUResizableCellDelegate> resizingDelegate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(CGSize)systemLayoutSizeFittingSize:(CGSize)arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3 ;
-(HFItem *)item;
-(void)updateUIWithAnimation:(BOOL)arg1 ;
-(void)setItem:(HFItem *)arg1 ;
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(HULinkedApplicationView *)linkedApplicationView;
-(void)setLinkedApplicationView:(HULinkedApplicationView *)arg1 ;
@end

