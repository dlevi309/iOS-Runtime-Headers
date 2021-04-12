/*
* Generated on Thursday, January 14, 2021 at 2:23:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
*/

#import <EventKitUI/EventKitUI-Structs.h>
#import <UIKitCore/UIVisualEffectView.h>
#import <libobjc.A.dylib/EKUITintColorUpdateDelegate.h>

@protocol EKUITintColorUpdateDelegate;
@class TintColorUpdateView, NSObject;

@interface EKUIVisualEffectView : UIVisualEffectView <EKUITintColorUpdateDelegate> {

	TintColorUpdateView* _updateView;
	NSObject*<EKUITintColorUpdateDelegate> _tintColorDelegate;

}

@property (assign,nonatomic,__weak) NSObject*<EKUITintColorUpdateDelegate> tintColorDelegate;              //@synthesize tintColorDelegate=_tintColorDelegate - In the implementation block
-(void)viewTintColorDidChangeForView:(id)arg1 toColor:(id)arg2 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(NSObject*<EKUITintColorUpdateDelegate>)tintColorDelegate;
-(void)subTintColorUpdatedToColor:(id)arg1 ;
-(void)setTintColorDelegate:(NSObject*<EKUITintColorUpdateDelegate>)arg1 ;
@end

