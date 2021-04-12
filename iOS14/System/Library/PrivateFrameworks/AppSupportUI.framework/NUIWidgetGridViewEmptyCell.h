/*
* Generated on Thursday, January 14, 2021 at 2:23:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppSupportUI.framework/AppSupportUI
*/

#import <AppSupportUI/AppSupportUI-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/NUIWidgetGridViewCell.h>

@class NUIWidgetGridView;

@interface NUIWidgetGridViewEmptyCell : UIView <NUIWidgetGridViewCell> {

	NUIWidgetGridView* _gridView;
	double _width;
	unsigned long long _index;

}

@property (nonatomic,readonly) unsigned long long index; 
-(unsigned long long)index;
-(CGSize)systemLayoutSizeFittingSize:(CGSize)arg1 ;
-(CGSize)donatableSpaceAllowRemeasure:(BOOL)arg1 ;
-(id)initWithWidgetGridView:(id)arg1 item:(id)arg2 index:(unsigned long long)arg3 ;
-(CGSize)donatableSpace;
@end

