/*
* Generated on Thursday, January 14, 2021 at 2:22:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <UIKitCore/UISegmentedControl.h>

@interface _PXCuratedLibraryZoomLevelSegmentedControl : UISegmentedControl {

	BOOL _lastTouchRemainedOnSelectedSegment;

}

@property (nonatomic,readonly) BOOL lastTouchRemainedOnSelectedSegment;              //@synthesize lastTouchRemainedOnSelectedSegment=_lastTouchRemainedOnSelectedSegment - In the implementation block
+(BOOL)_cursorInteractionEnabled;
+(double)_cornerRadiusForTraitCollection:(id)arg1 size:(int)arg2 ;
+(double)_sectionIndicatorInsetForTraitCollection:(id)arg1 size:(int)arg2 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(BOOL)lastTouchRemainedOnSelectedSegment;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)_highlightSegment:(long long)arg1 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
@end

