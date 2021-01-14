/*
* Generated on Thursday, January 14, 2021 at 2:26:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/GameController.framework/GameController
*/


@protocol GCMouseEventObserverDelegate;
@interface GCMouseEventObserver : NSObject {

	id<GCMouseEventObserverDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<GCMouseEventObserverDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<GCMouseEventObserverDelegate>)delegate;
-(void)setDelegate:(id<GCMouseEventObserverDelegate>)arg1 ;
-(id)initWithDelegate:(id)arg1 ;
-(void)dealloc;
@end

