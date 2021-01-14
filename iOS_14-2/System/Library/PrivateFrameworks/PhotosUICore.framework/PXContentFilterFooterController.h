/*
* Generated on Thursday, January 14, 2021 at 2:22:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <libobjc.A.dylib/PXContentFilterFooterViewDelegate.h>

@class PXActionManager, PXContentFilterFooterView, PXContentFilterState, UIView, NSString;

@interface PXContentFilterFooterController : NSObject <PXContentFilterFooterViewDelegate> {

	PXActionManager* _actionManager;
	PXContentFilterFooterView* _footerFilterView;
	PXContentFilterState* _filterState;
	UIView* _view;

}

@property (nonatomic,readonly) PXContentFilterFooterView * footerFilterView; 
@property (nonatomic,copy) PXContentFilterState * filterState;                            //@synthesize filterState=_filterState - In the implementation block
@property (nonatomic,retain) UIView * view;                                               //@synthesize view=_view - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(PXContentFilterState *)filterState;
-(id)init;
-(void)setFilterState:(PXContentFilterState *)arg1 ;
-(void)setView:(UIView *)arg1 ;
-(UIView *)view;
-(void)contentFilterFooterViewDidTapShowFilter:(id)arg1 sender:(id)arg2 ;
-(PXContentFilterFooterView *)footerFilterView;
-(id)initWithActionManager:(id)arg1 ;
@end

