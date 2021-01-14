/*
* Generated on Thursday, January 14, 2021 at 2:28:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusFoundation.framework/OpusFoundation
*/

#import <OpusFoundation/OpusFoundation-Structs.h>
#import <UIKitCore/UIScrollView.h>

@class OFUIViewController, NSMutableArray;

@interface OFUIScrollView : UIScrollView {

	OFUIViewController* _viewControllerProxy;
	NSMutableArray* _draggingPasteboardTypes;

}

@property (assign,nonatomic) OFUIViewController * viewControllerProxy;              //@synthesize viewControllerProxy=_viewControllerProxy - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)commonInit;
-(id)initWithCoder:(id)arg1 ;
-(void)dealloc;
-(void)setViewControllerProxy:(OFUIViewController *)arg1 ;
-(OFUIViewController *)viewControllerProxy;
-(void)registerDraggingPasteboardType:(id)arg1 ;
-(void)unregisterAllDraggingPasteboardType;
-(id)draggingPasteboardTypes;
@end

