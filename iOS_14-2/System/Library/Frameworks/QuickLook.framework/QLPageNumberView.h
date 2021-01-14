/*
* Generated on Thursday, January 14, 2021 at 2:24:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
*/

#import <QuickLook/QuickLook-Structs.h>
#import <UIKitCore/UIView.h>

@class UILabel, NSNumberFormatter;

@interface QLPageNumberView : UIView {

	long long _pageNumber;
	long long _pageCount;
	UILabel* _backgroundLabel;
	UILabel* _label;
	NSNumberFormatter* _indexFormatter;

}

@property (assign) long long pageNumber; 
@property (assign) long long pageCount; 
-(id)initWithFrame:(CGRect)arg1 ;
-(long long)pageCount;
-(void)drawRect:(CGRect)arg1 ;
-(void)layoutSubviews;
-(id)_indexFormatter;
-(void)_updateString;
-(CGPathRef)_copyMutablePathForRoundedRect:(CGRect)arg1 radius:(double)arg2 inverted:(BOOL)arg3 ;
-(void)setPageNumber:(long long)arg1 ;
-(void)setPageCount:(long long)arg1 ;
-(void)sizeToFit;
-(long long)pageNumber;
@end

