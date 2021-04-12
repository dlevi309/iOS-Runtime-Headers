/*
* Generated on Monday, March 1, 2021 at 2:31:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)initWithFrame:(CGRect)arg1 ;
-(void)viewTintColorDidChangeForView:(id)arg1 toColor:(id)arg2 ;
-(NSObject*<EKUITintColorUpdateDelegate>)tintColorDelegate;
-(void)subTintColorUpdatedToColor:(id)arg1 ;
-(void)setTintColorDelegate:(NSObject*<EKUITintColorUpdateDelegate>)arg1 ;
@end

