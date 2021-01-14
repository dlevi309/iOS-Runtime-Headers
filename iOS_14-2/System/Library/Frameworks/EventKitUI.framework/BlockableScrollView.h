/*
* Generated on Thursday, January 14, 2021 at 2:23:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
*/

#import <EventKitUI/EventKitUI-Structs.h>
#import <UIKitCore/UIScrollView.h>

@protocol BlockableScrollViewDelegate;
@class NSObject;

@interface BlockableScrollView : UIScrollView {

	BOOL _isResizing;
	NSObject*<BlockableScrollViewDelegate> _blockableDelegate;

}

@property (assign,nonatomic,__weak) NSObject*<BlockableScrollViewDelegate> blockableDelegate;              //@synthesize blockableDelegate=_blockableDelegate - In the implementation block
@property (assign,nonatomic) BOOL isResizing;                                                              //@synthesize isResizing=_isResizing - In the implementation block
-(NSObject*<BlockableScrollViewDelegate>)blockableDelegate;
-(void)setFrame:(CGRect)arg1 ;
-(BOOL)isResizing;
-(void)setIsResizing:(BOOL)arg1 ;
-(void)setBlockableDelegate:(NSObject*<BlockableScrollViewDelegate>)arg1 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
@end

