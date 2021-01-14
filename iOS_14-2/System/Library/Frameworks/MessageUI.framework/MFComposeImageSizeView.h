/*
* Generated on Thursday, January 14, 2021 at 2:23:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)segmentedControlChanged;
-(unsigned long long)_scaleLabelIndexForScale:(unsigned long long)arg1 ;
-(unsigned long long)_insertIndexForScale:(unsigned long long)arg1 ;
-(void)setSizeDescription:(id)arg1 forScale:(unsigned long long)arg2 ;
-(void)removeSizeDescriptionForScale:(unsigned long long)arg1 ;
-(void)setScale:(unsigned long long)arg1 ;
@end

