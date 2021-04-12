/*
* Generated on Thursday, January 14, 2021 at 2:27:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaControls.framework/MediaControls
*/

#import <MediaControls/MediaControls-Structs.h>
#import <MediaPlayer/MPVolumeSlider.h>
#import <libobjc.A.dylib/MRUVisualStylingProviderObserver.h>

@class MRUVisualStylingProvider, NSString;

@interface MRUVolumeSlider : MPVolumeSlider <MRUVisualStylingProviderObserver> {

	MRUVisualStylingProvider* _stylingProvider;

}

@property (nonatomic,retain) MRUVisualStylingProvider * stylingProvider;              //@synthesize stylingProvider=_stylingProvider - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(CGRect)trackRectForBounds:(CGRect)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGRect)minimumValueImageRectForBounds:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGRect)maximumValueImageRectForBounds:(CGRect)arg1 ;
-(id)createThumbView;
-(void)updateVisualStyling;
-(void)setStylingProvider:(MRUVisualStylingProvider *)arg1 ;
-(MRUVisualStylingProvider *)stylingProvider;
-(id)initWithThumbSize:(double)arg1 ;
-(void)visualStylingProviderDidChange:(id)arg1 ;
@end

