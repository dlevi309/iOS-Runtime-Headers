/*
* Generated on Thursday, January 14, 2021 at 2:22:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUI/PhotosUI-Structs.h>
#import <PhotosUI/PUPhotosGridCell.h>

@class UILabel;

@interface PUCurationTragicFailureInHighlightsGridDebugViewCell : PUPhotosGridCell {

	UILabel* _visibleLabel;
	UILabel* _utilityTypesLabel;
	unsigned long long _utilityTypes;

}

@property (assign,nonatomic) unsigned long long utilityTypes;              //@synthesize utilityTypes=_utilityTypes - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setUtilityTypes:(unsigned long long)arg1 ;
-(unsigned long long)utilityTypes;
-(void)layoutSubviews;
@end

