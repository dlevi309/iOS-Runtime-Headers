/*
* Generated on Thursday, January 14, 2021 at 2:22:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <UIKitCore/UIView.h>

@class PXSnapStripViewInternal, NSArray;

@interface PXSnapStripView : UIView {

	PXSnapStripViewInternal* _stripView;
	NSArray* _indicatorInfos;

}

@property (nonatomic,copy) NSArray * indicatorInfos;              //@synthesize indicatorInfos=_indicatorInfos - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setIndicatorInfos:(NSArray *)arg1 ;
-(NSArray *)indicatorInfos;
-(void)setIndicatorInfos:(id)arg1 animated:(BOOL)arg2 ;
-(void)_updateStripView:(BOOL)arg1 ;
-(void)layoutSubviews;
@end

