/*
* Generated on Monday, March 1, 2021 at 2:31:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(long long)fileSize;
-(long long)bytesDownloaded;
-(id)initWithURLRequest:(id)arg1 ;
-(BOOL)isExternal;
-(long long)assetType;
-(long long)bytesUploaded;
-(NSURLRequest *)URLRequest;
-(NSArray *)sinfs;
-(id)copyXPCEncoding;
-(long long)_legacyAssetType;
-(void)_resetLocalIVars;
-(id)initWithURLRequestProperties:(id)arg1 ;
-(id)_copyURLRequestProperties;
-(long long)bytesUploadTotal;
-(SSURLRequestProperties *)URLRequestProperties;
-(SSURLRequestProperties *)_localProperties;
-(id)initWithURLRequest:(id)arg1 type:(long long)arg2 ;
-(NSString *)downloadFileName;
-(NSString *)downloadPath;
-(NSString *)finalizedPath;
@end

