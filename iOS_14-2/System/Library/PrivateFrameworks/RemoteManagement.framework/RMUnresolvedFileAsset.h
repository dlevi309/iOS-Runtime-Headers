/*
* Generated on Thursday, January 14, 2021 at 2:28:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RemoteManagement.framework/RemoteManagement
*/

#import <libobjc.A.dylib/RMUnresolvedAsset.h>

@class RMAsset, NSDictionary, NSURL, NSString;

@interface RMUnresolvedFileAsset : NSObject <RMUnresolvedAsset> {

	RMAsset* _asset;
	NSDictionary* _queryParameters;
	NSURL* _downloadToFileURL;

}

@property (nonatomic,retain) RMAsset * asset;                           //@synthesize asset=_asset - In the implementation block
@property (nonatomic,copy) NSDictionary * queryParameters;              //@synthesize queryParameters=_queryParameters - In the implementation block
@property (nonatomic,retain) NSURL * downloadToFileURL;                 //@synthesize downloadToFileURL=_downloadToFileURL - In the implementation block
@property (nonatomic,copy,readonly) NSString * identifier; 
-(void)setAsset:(RMAsset *)arg1 ;
-(RMAsset *)asset;
-(void)setQueryParameters:(NSDictionary *)arg1 ;
-(NSDictionary *)queryParameters;
-(NSString *)identifier;
-(void)resolveWithAssetResolver:(id)arg1 statusUpdater:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(NSURL *)downloadToFileURL;
-(id)initWithAsset:(id)arg1 queryParameters:(id)arg2 downloadToFileURL:(id)arg3 ;
-(void)setDownloadToFileURL:(NSURL *)arg1 ;
@end

