/*
* Generated on Thursday, January 14, 2021 at 2:22:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/


#import <PhotosUICore/PhotosUICore-Structs.h>
@class UILabel;

@interface PXLabelAnimationContext : NSObject {

	UILabel* _label;
	CGRect _destinationRect;

}

@property (retain) UILabel * label;                     //@synthesize label=_label - In the implementation block
@property (assign) CGRect destinationRect;              //@synthesize destinationRect=_destinationRect - In the implementation block
-(CGRect)destinationRect;
-(id)initWithLabel:(id)arg1 andDestinationRect:(CGRect)arg2 ;
-(void)setDestinationRect:(CGRect)arg1 ;
-(void)setLabel:(UILabel *)arg1 ;
-(UILabel *)label;
@end

