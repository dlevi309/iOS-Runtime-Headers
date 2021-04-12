/*
* Generated on Thursday, January 14, 2021 at 2:24:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)startObserving;
-(void)stopObserving;
-(NSMetadataQuery *)query;
-(void)setAsset:(CLSAsset *)arg1 ;
-(void)setUploaded:(BOOL)arg1 ;
-(BOOL)isUploaded;
-(id)init;
-(CLSAsset *)asset;
-(id)initWithAsset:(id)arg1 ;
-(NSError *)uploadError;
-(void)setQuery:(NSMetadataQuery *)arg1 ;
-(id)onUploadProgress;
-(id)onUploadComplete;
-(double)uploadProgress;
-(void)setOnUploadProgress:(id)arg1 ;
-(void)setOnUploadComplete:(id)arg1 ;
@end

