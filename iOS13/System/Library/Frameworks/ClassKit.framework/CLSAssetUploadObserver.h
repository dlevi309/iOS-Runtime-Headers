/*
* Generated on Monday, March 1, 2021 at 2:32:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ClassKit.framework/ClassKit
*/


@class NSError, CLSAsset, NSMetadataQuery;

@interface CLSAssetUploadObserver : NSObject {

	double uploadProgress;
	NSError* uploadError;
	CLSAsset* _asset;
	/*^block*/id _onUploadProgress;
	/*^block*/id _onUploadComplete;
	NSMetadataQuery* _query;

}

@property (nonatomic,retain) CLSAsset * asset;                             //@synthesize asset=_asset - In the implementation block
@property (assign,getter=isUploaded,nonatomic) BOOL uploaded; 
@property (nonatomic,retain) NSMetadataQuery * query;                      //@synthesize query=_query - In the implementation block
@property (readonly) double uploadProgress; 
@property (readonly) NSError * uploadError; 
@property (nonatomic,copy) id onUploadProgress;                            //@synthesize onUploadProgress=_onUploadProgress - In the implementation block
@property (nonatomic,copy) id onUploadComplete;                            //@synthesize onUploadComplete=_onUploadComplete - In the implementation block
-(id)init;
-(NSMetadataQuery *)query;
-(void)setQuery:(NSMetadataQuery *)arg1 ;
-(CLSAsset *)asset;
-(void)setAsset:(CLSAsset *)arg1 ;
-(void)startObserving;
-(void)stopObserving;
-(id)initWithAsset:(id)arg1 ;
-(BOOL)isUploaded;
-(void)setUploaded:(BOOL)arg1 ;
-(NSError *)uploadError;
-(id)onUploadProgress;
-(id)onUploadComplete;
-(double)uploadProgress;
-(void)setOnUploadProgress:(id)arg1 ;
-(void)setOnUploadComplete:(id)arg1 ;
@end

