/*
* Generated on Thursday, January 14, 2021 at 2:26:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/GameController.framework/GameController
*/


@protocol GCKeyboardEventObserverDelegate;
@interface GCKeyboardEventObserver : NSObject {

	id<GCKeyboardEventObserverDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<GCKeyboardEventObserverDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<GCKeyboardEventObserverDelegate>)delegate;
-(void)setDelegate:(id<GCKeyboardEventObserverDelegate>)arg1 ;
-(id)initWithDelegate:(id)arg1 ;
-(void)dealloc;
@end

