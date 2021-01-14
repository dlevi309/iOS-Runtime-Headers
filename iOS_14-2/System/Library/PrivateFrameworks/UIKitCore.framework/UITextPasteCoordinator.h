/*
* Generated on Thursday, January 14, 2021 at 2:20:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)addItem:(id)arg1 ;
-(id<UITextPasteCoordinatorDelegate>)delegate;
-(void)_determineFinished;
-(void)setResult:(id)arg1 forItem:(id)arg2 ;
-(BOOL)performBlockingWait:(double)arg1 ;
-(id)initWithDelegate:(id)arg1 ;
-(void)_finish;
@end

