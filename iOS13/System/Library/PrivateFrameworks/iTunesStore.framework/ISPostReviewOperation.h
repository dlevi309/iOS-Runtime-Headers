/*
* Generated on Monday, March 1, 2021 at 2:32:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
*/

#import <iTunesStore/ISOperation.h>
#import <libobjc.A.dylib/ISStoreURLOperationDelegate.h>

@class ISReview, NSString, NSNumber;

@interface ISPostReviewOperation : ISOperation <ISStoreURLOperationDelegate> {

	BOOL _backgroundReview;
	ISReview* _review;

}

@property (getter=isBackgroundReview) BOOL backgroundReview;                                            //@synthesize backgroundReview=_backgroundReview - In the implementation block
@property (retain) ISReview * review;                                                                   //@synthesize review=_review - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSNumber * metricsLoadURLSessionDuration; 
@property (nonatomic,readonly) NSNumber * metricsLoadURLSamplingPercentage; 
@property (nonatomic,readonly) NSNumber * metricsLoadURLSamplingPercentageCachedResponses; 
-(void)dealloc;
-(void)run;
-(ISReview *)review;
-(void)setReview:(ISReview *)arg1 ;
-(id)_httpBody;
-(void)operation:(id)arg1 finishedWithOutput:(id)arg2 ;
-(BOOL)isBackgroundReview;
-(void)setBackgroundReview:(BOOL)arg1 ;
@end

