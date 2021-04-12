/*
* Generated on Monday, March 1, 2021 at 2:35:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

