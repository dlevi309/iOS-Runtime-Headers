/*
* Generated on Thursday, January 14, 2021 at 2:22:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
*/

#import <StoreServices/SSEntity.h>

@class SSURLRequestProperties, NSString, NSURLRequest, NSArray;

@interface SSDownloadAsset : SSEntity {

	long long _assetType;
	SSURLRequestProperties* _localProperties;

}

@property (readonly) long long fileSize; 
@property (readonly) NSString * downloadFileName; 
@property (readonly) NSString * downloadPath; 
@property (readonly) NSString * finalizedPath; 
@property (getter=isExternal,readonly) BOOL external; 
@property (readonly) SSURLRequestProperties * URLRequestProperties; 
@property (readonly) SSURLRequestProperties * _localProperties; 
@property (retain,readonly) NSURLRequest * URLRequest; 
@property (readonly) NSArray * sinfs; 
+(long long)_existsMessage;
+(long long)_getExternalValuesMessage;
+(long long)_getValueMessage;
+(long long)_setValuesMessage;
+(id)assetWithURL:(id)arg1 type:(long long)arg2 ;
-(id)copyXPCEncoding;
-(long long)assetType;
-(NSArray *)sinfs;
-(long long)bytesDownloaded;
-(long long)_legacyAssetType;
-(void)_resetLocalIVars;
-(id)initWithURLRequestProperties:(id)arg1 ;
-(long long)fileSize;
-(id)initWithURLRequest:(id)arg1 ;
-(id)_copyURLRequestProperties;
-(long long)bytesUploadTotal;
-(SSURLRequestProperties *)URLRequestProperties;
-(SSURLRequestProperties *)_localProperties;
-(id)initWithURLRequest:(id)arg1 type:(long long)arg2 ;
-(NSString *)downloadFileName;
-(NSString *)downloadPath;
-(NSString *)finalizedPath;
-(long long)bytesUploaded;
-(BOOL)isExternal;
-(NSURLRequest *)URLRequest;
-(void)dealloc;
@end

