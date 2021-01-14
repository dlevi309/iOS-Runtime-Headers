/*
* Generated on Thursday, January 14, 2021 at 2:26:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/GameController.framework/GameController
*/


@protocol GCFrontmostApplicationObserverDelegate;
@interface GCFrontmostApplicationObserver : NSObject {

	int _frontmostPid;
	id<GCFrontmostApplicationObserverDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<GCFrontmostApplicationObserverDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<GCFrontmostApplicationObserverDelegate>)delegate;
-(void)setDelegate:(id<GCFrontmostApplicationObserverDelegate>)arg1 ;
-(id)initWithDelegate:(id)arg1 ;
@end

