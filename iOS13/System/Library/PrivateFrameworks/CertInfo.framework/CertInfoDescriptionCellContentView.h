/*
* Generated on Monday, March 1, 2021 at 2:32:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CertInfo.framework/CertInfo
*/

#import <CertInfo/CertInfo-Structs.h>
#import <UIKitCore/UIView.h>

@class NSArray;

@interface CertInfoDescriptionCellContentView : UIView {

	NSArray* _labelsAndValues;
	double _idealHeight;
	int _sizesCount;
	CGSize* _sizes;

}
-(void)dealloc;
-(void)layoutSubviews;
-(id)_labelFont;
-(void)drawRect:(CGRect)arg1 ;
-(double)rowHeight;
-(id)_valueFont;
-(void)setLabelsAndValues:(id)arg1 ;
-(void)_recalculateIdealHeight;
@end

