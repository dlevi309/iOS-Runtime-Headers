/*
* Generated on Thursday, January 14, 2021 at 2:22:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUI/PUPhotoEditToolbar.h>

@class UIView, NSArray;

@interface PUPhotoEditButtonCenteredToolbar : PUPhotoEditToolbar {

	UIView* _centerView;
	NSArray* _leadingViews;
	NSArray* _trailingViews;
	NSArray* _leadingLayoutConstraints;
	NSArray* _trailingLayoutConstraints;
	NSArray* _centerLayoutConstraints;

}

@property (nonatomic,readonly) double interItemSpacing; 
-(double)interItemSpacing;
-(void)_invalidateAllConstraints;
-(void)_addLeadingConstraintsWithMetrics:(id)arg1 verticalLayout:(BOOL)arg2 ;
-(void)_addTrailingConstraintsWithMetrics:(id)arg1 verticalLayout:(BOOL)arg2 ;
-(void)_addCenterConstraintsWithMetrics:(id)arg1 verticalLayout:(BOOL)arg2 ;
-(void)setCenterView:(id)arg1 leadingViews:(id)arg2 trailingViews:(id)arg3 ;
@end

