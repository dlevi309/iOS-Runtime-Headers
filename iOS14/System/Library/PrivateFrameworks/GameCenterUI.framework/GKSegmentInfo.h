/*
* Generated on Thursday, January 14, 2021 at 2:23:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
*/

#import <libobjc.A.dylib/_GKStateMachineDelegate.h>

@protocol GKSegmentInfoDelegagte;
@class GKCollectionViewDataSource, NSString, GKPlaceholderContentStateMachine;

@interface GKSegmentInfo : NSObject <_GKStateMachineDelegate> {

	id<GKSegmentInfoDelegagte> _delegateWeak;
	GKCollectionViewDataSource* _dataSource;
	NSString* _title;
	GKPlaceholderContentStateMachine* _loadingMatchine;

}

@property (assign,nonatomic,__weak) id<GKSegmentInfoDelegagte> delegate;                      //@synthesize delegateWeak=_delegateWeak - In the implementation block
@property (nonatomic,retain) GKCollectionViewDataSource * dataSource;                         //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,retain) NSString * title;                                                //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) GKPlaceholderContentStateMachine * loadingMatchine;              //@synthesize loadingMatchine=_loadingMatchine - In the implementation block
@property (nonatomic,retain) NSString * loadingState; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<GKSegmentInfoDelegagte>)delegate;
-(id)initWithDataSource:(id)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(GKCollectionViewDataSource *)dataSource;
-(void)setDelegate:(id<GKSegmentInfoDelegagte>)arg1 ;
-(NSString *)description;
-(void)setDataSource:(GKCollectionViewDataSource *)arg1 ;
-(void)didEnterLoadingState;
-(void)didExitLoadingState;
-(void)didEnterNoContentState;
-(void)didEnterErrorState;
-(GKPlaceholderContentStateMachine *)loadingMatchine;
-(void)setLoadingMatchine:(GKPlaceholderContentStateMachine *)arg1 ;
-(NSString *)title;
-(NSString *)loadingState;
-(void)setLoadingState:(NSString *)arg1 ;
@end

