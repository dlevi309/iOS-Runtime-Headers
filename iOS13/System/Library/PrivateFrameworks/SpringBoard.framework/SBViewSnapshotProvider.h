/*
* Generated on Monday, March 1, 2021 at 2:35:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/


@class UIView;

@interface SBViewSnapshotProvider : NSObject {

	UIView* _view;
	long long _orientation;
	/*^block*/id _completionBlock;

}

@property (nonatomic,copy) id completionBlock;              //@synthesize completionBlock=_completionBlock - In the implementation block
-(id)completionBlock;
-(void)setCompletionBlock:(id)arg1 ;
-(id)snapshot;
-(void)snapshotAsynchronously:(BOOL)arg1 withImageBlock:(/*^block*/id)arg2 ;
-(id)initWithView:(id)arg1 orientation:(long long)arg2 ;
-(void)snapshotWithImageBlock:(/*^block*/id)arg1 ;
@end

