/*
* Generated on Monday, March 1, 2021 at 2:35:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/


@class NSURL;

@interface PGGraphUpdateJetsamIndicator : NSObject {

	BOOL _indicatorExists;
	NSURL* _indicatorURL;
	long long _retryCount;
	long long _maxRetryCount;

}

@property (nonatomic,readonly) NSURL * indicatorURL;                   //@synthesize indicatorURL=_indicatorURL - In the implementation block
@property (assign,nonatomic) long long retryCount;                     //@synthesize retryCount=_retryCount - In the implementation block
@property (assign,nonatomic) BOOL indicatorExists;                     //@synthesize indicatorExists=_indicatorExists - In the implementation block
@property (assign,nonatomic) long long maxRetryCount;                  //@synthesize maxRetryCount=_maxRetryCount - In the implementation block
@property (nonatomic,readonly) BOOL updateDidCauseJetsam; 
-(id)description;
-(void)clear;
-(long long)retryCount;
-(void)setRetryCount:(long long)arg1 ;
-(id)initWithPhotoLibrary:(id)arg1 ;
-(void)setMaxRetryCount:(long long)arg1 ;
-(long long)maxRetryCount;
-(id)initWithIndicatorDirectoryURL:(id)arg1 ;
-(BOOL)updateDidCauseJetsam;
-(void)markUpdate;
-(void)_readIndicator;
-(void)_removeIndicator;
-(NSURL *)indicatorURL;
-(BOOL)indicatorExists;
-(void)setIndicatorExists:(BOOL)arg1 ;
@end

