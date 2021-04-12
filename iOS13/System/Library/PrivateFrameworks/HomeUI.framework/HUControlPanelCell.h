/*
* Generated on Monday, March 1, 2021 at 2:34:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) HFItem * item;                                                    //@synthesize item=_item - In the implementation block
@property (assign,nonatomic,__weak) id<HUResizableCellDelegate> resizingDelegate; 
-(HFItem *)item;
-(void)setItem:(HFItem *)arg1 ;
-(void)updateConstraints;
-(void)updateUIWithAnimation:(BOOL)arg1 ;
-(NSSet *)allControlViews;
-(NSLayoutConstraint *)minHeightConstraint;
-(void)setMinHeightConstraint:(NSLayoutConstraint *)arg1 ;
@end

