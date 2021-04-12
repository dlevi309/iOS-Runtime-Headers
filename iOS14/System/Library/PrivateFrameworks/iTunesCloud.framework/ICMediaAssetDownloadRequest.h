/*
* Generated on Thursday, January 14, 2021 at 2:22:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
*/

#import <iTunesCloud/ICRequestOperation.h>

@class ICStoreRequestContext, NSURL, ICMediaAVAssetDownloadOptions, ICURLSession, ICURLRequest, ICURLResponse, NSData;

@interface ICMediaAssetDownloadRequest : ICRequestOperation {

	ICStoreRequestContext* _requestContext;
	NSURL* _assetURL;
	ICMediaAVAssetDownloadOptions* _downloadOptions;
	ICURLSession* _downloadSession;
	ICURLRequest* _request;
	ICURLResponse* _response;
	BOOL _allowsCellularData;
	BOOL _allowsCellularFallback;
	BOOL _discretionary;
	BOOL _requiresPower;
	NSURL* _destinationURL;
	NSData* _resumeData;

}

@property (nonatomic,copy) NSURL * destinationURL;                                   //@synthesize destinationURL=_destinationURL - In the implementation block
@property (assign,nonatomic) BOOL allowsCellularData;                                //@synthesize allowsCellularData=_allowsCellularData - In the implementation block
@property (assign,nonatomic) BOOL allowsCellularFallback;                            //@synthesize allowsCellularFallback=_allowsCellularFallback - In the implementation block
@property (assign,getter=isDiscretionary,nonatomic) BOOL discretionary;              //@synthesize discretionary=_discretionary - In the implementation block
@property (assign,nonatomic) BOOL requiresPower;                                     //@synthesize requiresPower=_requiresPower - In the implementation block
@property (nonatomic,copy) NSData * resumeData;                                      //@synthesize resumeData=_resumeData - In the implementation block
-(void)setDiscretionary:(BOOL)arg1 ;
-(void)execute;
-(NSURL *)destinationURL;
-(NSData *)resumeData;
-(void)setDestinationURL:(NSURL *)arg1 ;
-(void)performRequestWithResponseHandler:(/*^block*/id)arg1 ;
-(id)initWithRequestContext:(id)arg1 assetURL:(id)arg2 avAssetDownloadOptions:(id)arg3 resumeData:(id)arg4 ;
-(BOOL)allowsCellularData;
-(void)setAllowsCellularData:(BOOL)arg1 ;
-(BOOL)allowsCellularFallback;
-(void)setAllowsCellularFallback:(BOOL)arg1 ;
-(BOOL)requiresPower;
-(void)setRequiresPower:(BOOL)arg1 ;
-(void)setResumeData:(NSData *)arg1 ;
-(void)finishWithError:(id)arg1 ;
-(BOOL)isDiscretionary;
-(void)cancel;
-(id)_sessionIdentifier;
@end

