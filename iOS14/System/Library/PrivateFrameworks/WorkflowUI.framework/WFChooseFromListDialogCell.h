/*
* Generated on Thursday, January 14, 2021 at 2:28:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/

#import <WorkflowUI/WorkflowUI-Structs.h>
#import <UIKitCore/UITableViewCell.h>
#import <UIKit/UIPointerInteractionDelegate.h>

@class WFDialogListItem, MTVisualStylingProvider, NSCache, TLKSimpleRowView, NSString;

@interface WFChooseFromListDialogCell : UITableViewCell <UIPointerInteractionDelegate> {

	BOOL _checked;
	WFDialogListItem* _listItem;
	MTVisualStylingProvider* _fillVisualStylingProvider;
	NSCache* _imageCache;
	TLKSimpleRowView* _rowView;

}

@property (assign,nonatomic,__weak) TLKSimpleRowView * rowView;                                //@synthesize rowView=_rowView - In the implementation block
@property (nonatomic,retain) WFDialogListItem * listItem;                                      //@synthesize listItem=_listItem - In the implementation block
@property (assign,getter=isChecked,nonatomic) BOOL checked;                                    //@synthesize checked=_checked - In the implementation block
@property (nonatomic,retain) MTVisualStylingProvider * fillVisualStylingProvider;              //@synthesize fillVisualStylingProvider=_fillVisualStylingProvider - In the implementation block
@property (nonatomic,retain) NSCache * imageCache;                                             //@synthesize imageCache=_imageCache - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)pointerInteraction:(id)arg1 styleForRegion:(id)arg2 ;
-(TLKSimpleRowView *)rowView;
-(void)setListItem:(WFDialogListItem *)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setChecked:(BOOL)arg1 ;
-(BOOL)isChecked;
-(WFDialogListItem *)listItem;
-(void)setRowView:(TLKSimpleRowView *)arg1 ;
-(NSCache *)imageCache;
-(void)setImageCache:(NSCache *)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(unsigned long long)tlkCornerRoundingStyleForWFRoundingStyle:(unsigned long long)arg1 ;
-(void)setFillVisualStylingProvider:(MTVisualStylingProvider *)arg1 ;
-(MTVisualStylingProvider *)fillVisualStylingProvider;
@end

