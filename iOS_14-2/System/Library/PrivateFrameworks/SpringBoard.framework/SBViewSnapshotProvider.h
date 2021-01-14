/*
* Generated on Thursday, January 14, 2021 at 2:25:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/


@class UIView;

@interface SBViewSnapshotProvider : NSObject {

	UIView* _view;
	long long _orientation;
	/*^block*/id _completionBlock;

}

@property (nonatomic,copy) id completionBlock;              //@synthesize completionBlock=_completionBlock - In the implementation block
-(id)snapshot;
-(id)completionBlock;
-(void)setCompletionBlock:(id)arg1 ;
-(void)snapshotAsynchronously:(BOOL)arg1 withImageBlock:(/*^block*/id)arg2 ;
-(id)initWithView:(id)arg1 orientation:(long long)arg2 ;
-(void)snapshotWithImageBlock:(/*^block*/id)arg1 ;
@end

