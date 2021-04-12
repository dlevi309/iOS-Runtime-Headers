/*
* Generated on Monday, March 1, 2021 at 2:30:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
*/


@interface SFDeviceAssetRequestConfiguration : NSObject {

	/*^block*/id _queryResultHandler;
	double _timeout;
	/*^block*/id _downloadCompletionHandler;

}

@property (nonatomic,copy,readonly) id queryResultHandler;              //@synthesize queryResultHandler=_queryResultHandler - In the implementation block
@property (assign,nonatomic) double timeout;                            //@synthesize timeout=_timeout - In the implementation block
@property (nonatomic,copy) id downloadCompletionHandler;                //@synthesize downloadCompletionHandler=_downloadCompletionHandler - In the implementation block
-(id)description;
-(double)timeout;
-(void)setTimeout:(double)arg1 ;
-(id)queryResultHandler;
-(id)downloadCompletionHandler;
-(id)initWithQueryResultHandler:(/*^block*/id)arg1 ;
-(void)setDownloadCompletionHandler:(id)arg1 ;
@end

