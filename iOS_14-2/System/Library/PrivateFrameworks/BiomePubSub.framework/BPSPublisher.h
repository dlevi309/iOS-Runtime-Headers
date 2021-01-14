/*
* Generated on Thursday, January 14, 2021 at 2:27:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BiomePubSub.framework/BiomePubSub
*/

#import <libobjc.A.dylib/BMBookmarkablePublisher.h>
#import <libobjc.A.dylib/BPSPublisher.h>

@protocol BPSPublisher <NSObject>
@required
-(void)subscribe:(id)arg1;

@end


@class NSString;

@interface BPSPublisher : NSObject <BMBookmarkablePublisher, BPSPublisher>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)withBookmark:(id)arg1 ;
-(id)bookmarkableUpstreams;
-(id)initWithUpstreams:(id)arg1 bookmarkState:(id)arg2 ;
-(BOOL)canStorePassThroughValueInBookmark;
-(BOOL)canStoreInternalStateInBookmark;
-(id)sinkWithBookmark:(id)arg1 completion:(/*^block*/id)arg2 receiveInput:(/*^block*/id)arg3 ;
-(void)subscribe:(id)arg1 ;
-(id)reduce:(id)arg1 ;
-(id)collect;
-(id)last;
-(id)mergeWithOther:(id)arg1 ;
-(id)sinkWithCompletion:(/*^block*/id)arg1 shouldContinue:(/*^block*/id)arg2 ;
-(id)sinkWithCompletion:(/*^block*/id)arg1 receiveInput:(/*^block*/id)arg2 ;
-(id)filterWithIsIncluded:(/*^block*/id)arg1 ;
-(id)orderedMergeWithOthers:(id)arg1 comparator:(/*^block*/id)arg2 ;
-(id)scanWithInitial:(id)arg1 nextPartialResult:(/*^block*/id)arg2 ;
-(id)mergeWithOthers:(id)arg1 ;
-(id)combineLatestwithOther:(id)arg1 ;
-(id)reduceWithInitial:(id)arg1 nextPartialResult:(/*^block*/id)arg2 ;
-(id)sequenceWithSequence:(id)arg1 ;
-(id)mapWithTransform:(/*^block*/id)arg1 ;
-(id)flatMapWithTransform:(/*^block*/id)arg1 ;
-(id)zipWithOther:(id)arg1 ;
-(id)zipWithOthers:(id)arg1 ;
-(id)orderedMergeWithOther:(id)arg1 comparator:(/*^block*/id)arg2 ;
-(id)removeDuplicatesWithIsDuplicate:(/*^block*/id)arg1 ;
@end

