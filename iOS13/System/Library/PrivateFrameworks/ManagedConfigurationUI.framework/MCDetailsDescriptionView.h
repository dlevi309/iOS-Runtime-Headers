/*
* Generated on Monday, March 1, 2021 at 2:32:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfigurationUI.framework/ManagedConfigurationUI
*/

#import <ManagedConfigurationUI/ManagedConfigurationUI-Structs.h>
#import <UIKitCore/UIView.h>

@class NSArray, NSMutableArray;

@interface MCDetailsDescriptionView : UIView {

	NSArray* _information;
	NSMutableArray* _labels;
	NSMutableArray* _fields;
	CGSize* _sizes;
	unsigned long long _sizesCount;
	double _idealHeight;
	BOOL _usesDynamicAlignment;
	double _labelMaxWidth;

}
-(void)dealloc;
-(id)_labelFont;
-(void)drawRect:(CGRect)arg1 ;
-(id)_valueFont;
-(void)setUsesDynamicAlignment:(BOOL)arg1 ;
-(double)heightForTableView;
-(void)_calculateHeightsForFrame:(CGRect)arg1 ;
-(id)initWithFrame:(CGRect)arg1 data:(id)arg2 ;
@end

