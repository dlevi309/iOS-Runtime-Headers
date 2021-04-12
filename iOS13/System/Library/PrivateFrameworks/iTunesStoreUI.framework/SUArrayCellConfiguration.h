/*
* Generated on Monday, March 1, 2021 at 2:31:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
*/

#import <iTunesStoreUI/iTunesStoreUI-Structs.h>
#import <iTunesStoreUI/SUCellConfiguration.h>

@interface SUArrayCellConfiguration : SUCellConfiguration {

	unsigned long long _numberOfStrings;
	CGRect* _stringFrames;
	id* _strings;
	unsigned long long _numberOfImages;
	CGRect* _imageFrames;
	id* _images;
	id* _selectedImages;

}
-(void)dealloc;
-(void)reloadData;
-(void)setLayoutSize:(CGSize)arg1 ;
-(unsigned long long)numberOfImages;
-(unsigned long long)numberOfLabels;
-(id)stringForLabelAtIndex:(unsigned long long)arg1 ;
-(CGRect)frameForLabelAtIndex:(unsigned long long)arg1 ;
-(id)imageAtIndex:(unsigned long long)arg1 withModifiers:(unsigned long long)arg2 ;
-(CGRect)frameForImageAtIndex:(unsigned long long)arg1 ;
-(void)reloadImages;
-(void)reloadStrings;
-(void)reloadLayoutInformation;
-(id)initWithStringCount:(unsigned long long)arg1 imageCount:(unsigned long long)arg2 ;
-(id)_accessibilityStringsArrayPointer;
@end

