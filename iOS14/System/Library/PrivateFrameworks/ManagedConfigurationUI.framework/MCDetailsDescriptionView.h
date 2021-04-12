/*
* Generated on Thursday, January 14, 2021 at 2:26:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)drawRect:(CGRect)arg1 ;
-(id)_valueFont;
-(id)_labelFont;
-(void)dealloc;
-(void)_calculateHeightsForFrame:(CGRect)arg1 ;
-(id)initWithFrame:(CGRect)arg1 data:(id)arg2 ;
-(double)heightForTableView;
-(void)setUsesDynamicAlignment:(BOOL)arg1 ;
@end

