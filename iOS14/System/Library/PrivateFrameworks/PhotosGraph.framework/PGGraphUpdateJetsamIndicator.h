/*
* Generated on Thursday, January 14, 2021 at 2:25:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)clear;
-(id)initWithPhotoLibrary:(id)arg1 ;
-(void)setRetryCount:(long long)arg1 ;
-(long long)retryCount;
-(void)setIndicatorExists:(BOOL)arg1 ;
-(BOOL)updateDidCauseJetsam;
-(void)_removeIndicator;
-(void)setMaxRetryCount:(long long)arg1 ;
-(BOOL)indicatorExists;
-(id)description;
-(long long)maxRetryCount;
-(id)initWithIndicatorDirectoryURL:(id)arg1 ;
-(void)markUpdate;
-(NSURL *)indicatorURL;
-(void)_readIndicator;
@end

