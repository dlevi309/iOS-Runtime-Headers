/*
* Generated on Monday, March 1, 2021 at 2:32:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)layoutSubviews;
-(void)sizeToFit;
-(void)drawRect:(CGRect)arg1 ;
-(long long)pageCount;
-(void)setPageCount:(long long)arg1 ;
-(long long)pageNumber;
-(void)setPageNumber:(long long)arg1 ;
-(id)_indexFormatter;
-(void)_updateString;
-(CGPathRef)_copyMutablePathForRoundedRect:(CGRect)arg1 radius:(double)arg2 inverted:(BOOL)arg3 ;
@end

