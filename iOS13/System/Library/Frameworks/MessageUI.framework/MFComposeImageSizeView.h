/*
* Generated on Monday, March 1, 2021 at 2:32:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
*/

#import <MessageUI/MessageUI-Structs.h>
#import <MessageUI/MFMailComposeHeaderView.h>

@class UISegmentedControl, NSMutableArray;

@interface MFComposeImageSizeView : MFMailComposeHeaderView {

	UISegmentedControl* _segmentedControl;
	NSMutableArray* _visibleScales;

}

@property (assign,nonatomic,__weak) id<MFComposeImageSizeViewDelegate> delegate; 
-(void)setScale:(unsigned long long)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)segmentedControlChanged;
-(unsigned long long)_scaleLabelIndexForScale:(unsigned long long)arg1 ;
-(unsigned long long)_insertIndexForScale:(unsigned long long)arg1 ;
-(void)setSizeDescription:(id)arg1 forScale:(unsigned long long)arg2 ;
-(void)removeSizeDescriptionForScale:(unsigned long long)arg1 ;
@end

