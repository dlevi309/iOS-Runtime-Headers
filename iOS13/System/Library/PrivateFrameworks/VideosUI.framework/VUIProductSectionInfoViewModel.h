/*
* Generated on Monday, March 1, 2021 at 2:35:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/


@class UIView, NSArray, VUIProductMetadataLayout;

@interface VUIProductSectionInfoViewModel : NSObject {

	UIView* _headerView;
	NSArray* _dataViews;
	VUIProductMetadataLayout* _layout;

}

@property (nonatomic,retain) UIView * headerView;                            //@synthesize headerView=_headerView - In the implementation block
@property (nonatomic,retain) NSArray * dataViews;                            //@synthesize dataViews=_dataViews - In the implementation block
@property (nonatomic,retain) VUIProductMetadataLayout * layout;              //@synthesize layout=_layout - In the implementation block
+(id)headerViewWithString:(id)arg1 layout:(id)arg2 existingView:(id)arg3 ;
+(id)headerViewWithImage:(id)arg1 layout:(id)arg2 existingView:(id)arg3 ;
+(id)dataLabelViewWithString:(id)arg1 layout:(id)arg2 existingView:(id)arg3 ;
+(id)dataDescriptionViewWithString:(id)arg1 maxLine:(unsigned long long)arg2 layout:(id)arg3 existingView:(id)arg4 ;
-(VUIProductMetadataLayout *)layout;
-(void)setLayout:(VUIProductMetadataLayout *)arg1 ;
-(UIView *)headerView;
-(void)setHeaderView:(UIView *)arg1 ;
-(NSArray *)dataViews;
-(void)setDataViews:(NSArray *)arg1 ;
@end

