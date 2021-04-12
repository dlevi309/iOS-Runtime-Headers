/*
* Generated on Monday, March 1, 2021 at 2:35:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MobileTimerUI.framework/MobileTimerUI
*/

#import <MobileTimerUI/MobileTimerUI-Structs.h>
#import <UIKitCore/UIView.h>

@class NSArray;

@interface MTUIBitmapHandView : UIView {

	NSArray* _partViews;
	NSArray* _partViewsMaintainingOrientation;

}
+(id)partInfoWithName:(id)arg1 offset:(CGPoint)arg2 maintainsOrientation:(BOOL)arg3 ;
+(id)partInfoWithName:(id)arg1 ;
-(id)initWithBundle:(id)arg1 resourcePath:(id)arg2 partInfoList:(id)arg3 rotationalCenter:(CGPoint)arg4 ;
-(id)initWithImage:(id)arg1 rotationalCenter:(CGPoint)arg2 ;
@end

