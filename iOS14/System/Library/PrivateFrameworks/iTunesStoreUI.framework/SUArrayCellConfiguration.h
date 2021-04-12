/*
* Generated on Thursday, January 14, 2021 at 2:25:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(unsigned long long)numberOfImages;
-(void)reloadData;
-(void)setLayoutSize:(CGSize)arg1 ;
-(void)dealloc;
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

