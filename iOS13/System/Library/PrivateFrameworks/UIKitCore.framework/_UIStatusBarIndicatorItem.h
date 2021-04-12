/*
* Generated on Monday, March 1, 2021 at 2:30:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/_UIStatusBarItem.h>

@class NSArray, _UIStatusBarImageView, NSString;

@interface _UIStatusBarIndicatorItem : _UIStatusBarItem {

	NSArray* _currentImageNamePrefixes;
	_UIStatusBarImageView* _imageView;

}

@property (nonatomic,copy) NSArray * currentImageNamePrefixes;                       //@synthesize currentImageNamePrefixes=_currentImageNamePrefixes - In the implementation block
@property (nonatomic,retain) _UIStatusBarImageView * imageView;                      //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,readonly) NSString * indicatorEntryKey; 
@property (nonatomic,readonly) BOOL isTemplateImage; 
@property (nonatomic,readonly) BOOL flipsForRightToLeftLayoutDirection; 
-(_UIStatusBarImageView *)imageView;
-(id)applyUpdate:(id)arg1 toDisplayItem:(id)arg2 ;
-(id)imageForUpdate:(id)arg1 ;
-(NSString *)indicatorEntryKey;
-(id)systemImageNameForUpdate:(id)arg1 ;
-(id)viewForIdentifier:(id)arg1 ;
-(void)setImageView:(_UIStatusBarImageView *)arg1 ;
-(BOOL)flipsForRightToLeftLayoutDirection;
-(id)dependentEntryKeys;
-(id)imageNameForUpdate:(id)arg1 ;
-(BOOL)shouldUpdateIndicatorForIdentifier:(id)arg1 ;
-(BOOL)isTemplateImage;
-(void)_create_imageView;
-(void)setCurrentImageNamePrefixes:(NSArray *)arg1 ;
-(NSArray *)currentImageNamePrefixes;
@end

