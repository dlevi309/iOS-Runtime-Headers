/*
* Generated on Monday, March 1, 2021 at 2:31:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/


@class ICStoreFileAssetInfo, NSURL, NSString, NSArray, NSData;

@interface MPStoreFileAssetInfo : NSObject {

	ICStoreFileAssetInfo* _internalInfo;

}

@property (nonatomic,copy,readonly) NSURL * assetURL; 
@property (nonatomic,copy,readonly) NSString * downloadKey; 
@property (nonatomic,copy,readonly) NSArray * fairPlayInfoList; 
@property (nonatomic,readonly) long long flavorType; 
@property (nonatomic,copy,readonly) NSString * fileExtension; 
@property (nonatomic,readonly) unsigned long long fileSize; 
@property (nonatomic,copy,readonly) NSData * md5; 
@property (nonatomic,readonly) long long protectionType; 
-(unsigned long long)fileSize;
-(NSString *)fileExtension;
-(NSData *)md5;
-(NSURL *)assetURL;
-(id)initWithiTunesCloudStoreFileAssetInfo:(id)arg1 ;
-(NSString *)downloadKey;
-(NSArray *)fairPlayInfoList;
-(long long)flavorType;
-(long long)protectionType;
@end

