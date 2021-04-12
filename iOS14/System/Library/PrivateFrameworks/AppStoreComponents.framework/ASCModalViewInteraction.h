/*
* Generated on Thursday, January 14, 2021 at 2:27:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppStoreComponents.framework/AppStoreComponents
*/


@class UIView, ASCModalViewGestureRecognizer, NSMutableArray;

@interface ASCModalViewInteraction : NSObject {

	UIView* _view;
	ASCModalViewGestureRecognizer* _cancelGestureRecognizer;
	/*^block*/id _cancelBlock;
	NSMutableArray* _observers;

}

@property (nonatomic,retain) ASCModalViewGestureRecognizer * cancelGestureRecognizer;              //@synthesize cancelGestureRecognizer=_cancelGestureRecognizer - In the implementation block
@property (nonatomic,copy) id cancelBlock;                                                         //@synthesize cancelBlock=_cancelBlock - In the implementation block
@property (nonatomic,readonly) NSMutableArray * observers;                                         //@synthesize observers=_observers - In the implementation block
@property (nonatomic,__weak,readonly) UIView * view;                                               //@synthesize view=_view - In the implementation block
-(NSMutableArray *)observers;
-(UIView *)view;
-(id)cancelBlock;
-(void)setCancelBlock:(id)arg1 ;
-(void)invalidate;
-(id)initWithView:(id)arg1 ;
-(void)dealloc;
-(void)installWithCancelBlock:(/*^block*/id)arg1 ;
-(ASCModalViewGestureRecognizer *)cancelGestureRecognizer;
-(void)cancelGestureDidChange:(id)arg1 ;
-(void)setCancelGestureRecognizer:(ASCModalViewGestureRecognizer *)arg1 ;
@end

