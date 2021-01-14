/*
* Generated on Thursday, January 14, 2021 at 2:27:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

