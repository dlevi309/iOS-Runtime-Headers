/*
* Generated on Thursday, January 14, 2021 at 2:24:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
*/


@protocol MSPContainerPersisterDelegate;
@interface MSPContainerPersister : NSObject {

	id<MSPContainerPersisterDelegate> _delegate;
	long long _duplicatesPolicy;

}

@property (assign,nonatomic,__weak) id<MSPContainerPersisterDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) long long duplicatesPolicy;                                   //@synthesize duplicatesPolicy=_duplicatesPolicy - In the implementation block
-(void)eraseWithCompletion:(/*^block*/id)arg1 ;
-(id<MSPContainerPersisterDelegate>)delegate;
-(void)setDelegate:(id<MSPContainerPersisterDelegate>)arg1 ;
-(void)fetchStateSnapshotWithCompletion:(/*^block*/id)arg1 ;
-(void)commitEditWithNewContents:(id)arg1 edits:(id)arg2 appliedToOldContents:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)commitByMergingWithStateSnapshot:(id)arg1 mergeOptions:(id)arg2 completion:(/*^block*/id)arg3 ;
-(long long)duplicatesPolicy;
@end

