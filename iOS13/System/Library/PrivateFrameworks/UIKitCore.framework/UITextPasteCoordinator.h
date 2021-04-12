/*
* Generated on Monday, March 1, 2021 at 2:30:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@protocol OS_dispatch_group, UITextPasteCoordinatorDelegate;
@class NSMutableArray, NSObject;

@interface UITextPasteCoordinator : NSObject {

	NSMutableArray* _items;
	NSObject*<OS_dispatch_group> _wait;
	id<UITextPasteCoordinatorDelegate> _delegate;

}

@property (nonatomic,__weak,readonly) id<UITextPasteCoordinatorDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<UITextPasteCoordinatorDelegate>)delegate;
-(id)initWithDelegate:(id)arg1 ;
-(void)addItem:(id)arg1 ;
-(void)_determineFinished;
-(void)_finish;
-(void)setResult:(id)arg1 forItem:(id)arg2 ;
-(BOOL)performBlockingWait:(double)arg1 ;
@end

