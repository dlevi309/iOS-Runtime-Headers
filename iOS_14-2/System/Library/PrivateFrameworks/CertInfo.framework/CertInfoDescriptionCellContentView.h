/*
* Generated on Thursday, January 14, 2021 at 2:27:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)drawRect:(CGRect)arg1 ;
-(void)layoutSubviews;
-(id)_valueFont;
-(double)rowHeight;
-(id)_labelFont;
-(void)dealloc;
-(void)setLabelsAndValues:(id)arg1 ;
-(void)_recalculateIdealHeight;
@end

