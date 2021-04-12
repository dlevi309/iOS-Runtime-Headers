/*
* Generated on Thursday, January 14, 2021 at 2:24:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HomeUI-Structs.h>
#import <UIKitCore/UITableViewCell.h>
#import <libobjc.A.dylib/HUSoftwareUpdateInternalResizingDelegate.h>
#import <libobjc.A.dylib/HUCellProtocol.h>

@protocol HUResizableCellDelegate;
@class HUSoftwareUpdateInfoView, NSString, HFItem;

@interface HUSoftwareUpdateInfoTableViewCell : UITableViewCell <HUSoftwareUpdateInternalResizingDelegate, HUCellProtocol> {

	HUSoftwareUpdateInfoView* _infoView;
	id<HUResizableCellDelegate> _resizingDelegate;

}

@property (nonatomic,readonly) HUSoftwareUpdateInfoView * infoView;                            //@synthesize infoView=_infoView - In the implementation block
@property (assign,nonatomic,__weak) id<HUResizableCellDelegate> resizingDelegate;              //@synthesize resizingDelegate=_resizingDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) HFItem * item; 
-(CGSize)systemLayoutSizeFittingSize:(CGSize)arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3 ;
-(HFItem *)item;
-(void)updateUIWithAnimation:(BOOL)arg1 ;
-(id<HUResizableCellDelegate>)resizingDelegate;
-(void)setResizingDelegate:(id<HUResizableCellDelegate>)arg1 ;
-(void)setItem:(HFItem *)arg1 ;
-(HUSoftwareUpdateInfoView *)infoView;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)didUpdateRequiredHeightForSoftwareUpdateInfoView:(id)arg1 ;
@end

