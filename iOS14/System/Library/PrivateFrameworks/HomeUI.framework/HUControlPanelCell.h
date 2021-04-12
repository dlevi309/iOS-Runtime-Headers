/*
* Generated on Thursday, January 14, 2021 at 2:24:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <UIKitCore/UITableViewCell.h>
#import <libobjc.A.dylib/HUCellProtocol.h>

@class HFItem, NSLayoutConstraint, NSSet, NSString;

@interface HUControlPanelCell : UITableViewCell <HUCellProtocol> {

	HFItem* _item;
	NSLayoutConstraint* _minHeightConstraint;

}

@property (nonatomic,retain) NSLayoutConstraint * minHeightConstraint;                         //@synthesize minHeightConstraint=_minHeightConstraint - In the implementation block
@property (nonatomic,readonly) NSSet * allControlViews; 
@property (nonatomic,retain) HFItem * item;                                                    //@synthesize item=_item - In the implementation block
@property (assign,nonatomic,__weak) id<HUResizableCellDelegate> resizingDelegate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(HFItem *)item;
-(void)updateUIWithAnimation:(BOOL)arg1 ;
-(void)setItem:(HFItem *)arg1 ;
-(void)updateConstraints;
-(NSLayoutConstraint *)minHeightConstraint;
-(void)setMinHeightConstraint:(NSLayoutConstraint *)arg1 ;
-(NSSet *)allControlViews;
@end

