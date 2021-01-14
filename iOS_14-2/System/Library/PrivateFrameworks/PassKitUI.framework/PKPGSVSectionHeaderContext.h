/*
* Generated on Thursday, January 14, 2021 at 2:24:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/


@protocol PKPGSVSectionHeaderView, PKPGSVSectionSubheaderView;
#import <PassKitUI/PassKitUI-Structs.h>
@class UIView;

@interface PKPGSVSectionHeaderContext : NSObject {

	UIView*<PKPGSVSectionHeaderView> _headerView;
	UIView*<PKPGSVSectionSubheaderView> _subheaderView;
	UIEdgeInsets _headerMargins;
	UIEdgeInsets _subheaderMargins;

}

@property (nonatomic,readonly) UIView*<PKPGSVSectionHeaderView> headerView;                    //@synthesize headerView=_headerView - In the implementation block
@property (assign,nonatomic) UIEdgeInsets headerMargins;                                       //@synthesize headerMargins=_headerMargins - In the implementation block
@property (nonatomic,readonly) UIView*<PKPGSVSectionSubheaderView> subheaderView;              //@synthesize subheaderView=_subheaderView - In the implementation block
@property (assign,nonatomic) UIEdgeInsets subheaderMargins;                                    //@synthesize subheaderMargins=_subheaderMargins - In the implementation block
@property (nonatomic,readonly) double totalHeight; 
@property (nonatomic,readonly) double headerHeight; 
+(id)createUpdatedHeaderContextForGroupStackView:(id)arg1 passType:(unsigned long long)arg2 currentContext:(id)arg3 allowHeader:(BOOL)arg4 allowSubheader:(BOOL)arg5 ;
-(id)init;
-(double)_headerHeight;
-(unsigned long long)hash;
-(UIView*<PKPGSVSectionHeaderView>)headerView;
-(double)headerHeight;
-(UIView*<PKPGSVSectionSubheaderView>)subheaderView;
-(id)initWithHeaderView:(id)arg1 headerMargins:(UIEdgeInsets)arg2 subheaderView:(id)arg3 subheaderMargins:(UIEdgeInsets)arg4 ;
-(UIEdgeInsets)headerMargins;
-(UIEdgeInsets)subheaderMargins;
-(CGRect)boundsForHeaderViewInContainerFrame:(CGRect)arg1 ;
-(CGRect)boundsForSubheaderViewInContainerFrame:(CGRect)arg1 ;
-(double)_subheaderHeight;
-(CGPoint)positionForHeaderViewInContainerFrame:(CGRect)arg1 ;
-(CGPoint)positionForSubheaderViewInContainerFrame:(CGRect)arg1 ;
-(double)totalHeight;
-(void)setHeaderMargins:(UIEdgeInsets)arg1 ;
-(void)setSubheaderMargins:(UIEdgeInsets)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

