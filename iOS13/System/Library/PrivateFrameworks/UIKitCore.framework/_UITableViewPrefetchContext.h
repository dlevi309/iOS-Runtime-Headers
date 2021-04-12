/*
* Generated on Monday, March 1, 2021 at 2:30:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


#import <UIKitCore/UIKitCore-Structs.h>
@class NSMutableIndexSet;

@interface _UITableViewPrefetchContext : NSObject {

	BOOL _prefetchScheduled;
	/*^block*/id _requestHandler;
	/*^block*/id _cancelHandler;
	NSMutableIndexSet* _outstandingRequests;
	long long _maxIndex;
	double _lastContentOffset;
	long long _prefetchItemCount;
	long long _refreshPrefetchThresholdCount;
	long long _cancelThresholdCount;
	NSRange _lastVisibleIndexRange;

}

@property (nonatomic,retain) NSMutableIndexSet * outstandingRequests;              //@synthesize outstandingRequests=_outstandingRequests - In the implementation block
@property (assign,nonatomic) long long maxIndex;                                   //@synthesize maxIndex=_maxIndex - In the implementation block
@property (assign,nonatomic) NSRange lastVisibleIndexRange;                        //@synthesize lastVisibleIndexRange=_lastVisibleIndexRange - In the implementation block
@property (assign,nonatomic) double lastContentOffset;                             //@synthesize lastContentOffset=_lastContentOffset - In the implementation block
@property (assign,nonatomic) long long prefetchItemCount;                          //@synthesize prefetchItemCount=_prefetchItemCount - In the implementation block
@property (assign,nonatomic) long long refreshPrefetchThresholdCount;              //@synthesize refreshPrefetchThresholdCount=_refreshPrefetchThresholdCount - In the implementation block
@property (assign,nonatomic) long long cancelThresholdCount;                       //@synthesize cancelThresholdCount=_cancelThresholdCount - In the implementation block
@property (assign,nonatomic) BOOL prefetchScheduled;                               //@synthesize prefetchScheduled=_prefetchScheduled - In the implementation block
@property (nonatomic,copy) id requestHandler;                                      //@synthesize requestHandler=_requestHandler - In the implementation block
@property (nonatomic,copy) id cancelHandler;                                       //@synthesize cancelHandler=_cancelHandler - In the implementation block
-(id)description;
-(void)cancel;
-(id)cancelHandler;
-(void)setCancelHandler:(id)arg1 ;
-(id)requestHandler;
-(void)setRequestHandler:(id)arg1 ;
-(NSMutableIndexSet *)outstandingRequests;
-(double)lastContentOffset;
-(void)setLastContentOffset:(double)arg1 ;
-(void)cancelWithNewMaxIndex:(long long)arg1 ;
-(id)initWithMaxIndex:(long long)arg1 prefetchItemCount:(long long)arg2 refreshPrefetchThresholdCount:(long long)arg3 cancelThresholdCount:(long long)arg4 ;
-(void)updateVisibleIndexRange:(NSRange)arg1 withContentOffset:(double)arg2 ;
-(int)_effectiveRefreshDirectionForProposedVisibleIndexRange:(NSRange)arg1 withContentOffset:(double)arg2 ;
-(NSRange)_offsetAndValidateRange:(NSRange)arg1 firstIndexOffset:(long long)arg2 lastIndexOffset:(long long)arg3 ;
-(NSRange)_validatedRangeWithLocation:(long long)arg1 length:(long long)arg2 ;
-(void)schedulePrefetchRequestAfterNextCACommit:(id)arg1 ;
-(long long)maxIndex;
-(id)computedPrefetchIndexSet;
-(void)setOutstandingRequests:(NSMutableIndexSet *)arg1 ;
-(void)setMaxIndex:(long long)arg1 ;
-(NSRange)lastVisibleIndexRange;
-(void)setLastVisibleIndexRange:(NSRange)arg1 ;
-(long long)prefetchItemCount;
-(void)setPrefetchItemCount:(long long)arg1 ;
-(long long)refreshPrefetchThresholdCount;
-(void)setRefreshPrefetchThresholdCount:(long long)arg1 ;
-(long long)cancelThresholdCount;
-(void)setCancelThresholdCount:(long long)arg1 ;
-(BOOL)prefetchScheduled;
-(void)setPrefetchScheduled:(BOOL)arg1 ;
@end

