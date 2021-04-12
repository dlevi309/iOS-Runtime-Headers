/*
* Generated on Thursday, January 14, 2021 at 2:28:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SharingUI.framework/SharingUI
*/

#import <UIKitCore/UIView.h>

@interface SFMagicHeadMarkerView : UIView {

	double _positionDegree;
	double _containerRadius;
	double _currentOffset;

}

@property (readonly) double currentOffset;              //@synthesize currentOffset=_currentOffset - In the implementation block
-(double)currentOffset;
-(void)updateMarkerWithDegreeOffset:(double)arg1 ;
-(id)initWithPositionDegree:(double)arg1 containerRadius:(double)arg2 ;
@end

