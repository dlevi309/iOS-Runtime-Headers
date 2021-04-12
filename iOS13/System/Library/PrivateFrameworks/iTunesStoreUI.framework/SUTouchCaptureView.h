/*
* Generated on Monday, March 1, 2021 at 2:31:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
*/

#import <iTunesStoreUI/iTunesStoreUI-Structs.h>
#import <UIKitCore/UIControl.h>

@class NSArray;

@interface SUTouchCaptureView : UIControl {

	NSArray* _passThroughViews;

}

@property (nonatomic,retain) NSArray * passThroughViews;              //@synthesize passThroughViews=_passThroughViews - In the implementation block
-(void)dealloc;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(NSArray *)passThroughViews;
-(void)setPassThroughViews:(NSArray *)arg1 ;
@end

