/*
* Generated on Thursday, January 14, 2021 at 2:20:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setImageView:(_UIStatusBarImageView *)arg1 ;
-(id)applyUpdate:(id)arg1 toDisplayItem:(id)arg2 ;
-(id)dependentEntryKeys;
-(NSString *)indicatorEntryKey;
-(_UIStatusBarImageView *)imageView;
-(BOOL)shouldUpdateIndicatorForIdentifier:(id)arg1 ;
-(void)_create_imageView;
-(NSArray *)currentImageNamePrefixes;
-(void)setCurrentImageNamePrefixes:(NSArray *)arg1 ;
-(id)viewForIdentifier:(id)arg1 ;
-(BOOL)isTemplateImage;
-(id)systemImageNameForUpdate:(id)arg1 ;
-(id)imageForUpdate:(id)arg1 ;
-(BOOL)flipsForRightToLeftLayoutDirection;
-(id)imageNameForUpdate:(id)arg1 ;
@end

