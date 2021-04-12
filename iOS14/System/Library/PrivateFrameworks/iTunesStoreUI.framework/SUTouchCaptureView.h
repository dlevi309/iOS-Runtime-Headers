/*
* Generated on Thursday, January 14, 2021 at 2:25:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
*/

#import <iTunesStoreUI/iTunesStoreUI-Structs.h>
#import <UIKitCore/UIControl.h>

@class NSArray;

@interface SUTouchCaptureView : UIControl {

	NSArray* _passThroughViews;

}

@property (nonatomic,retain) NSArray * passThroughViews;              //@synthesize passThroughViews=_passThroughViews - In the implementation block
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)dealloc;
-(NSArray *)passThroughViews;
-(void)setPassThroughViews:(NSArray *)arg1 ;
@end

