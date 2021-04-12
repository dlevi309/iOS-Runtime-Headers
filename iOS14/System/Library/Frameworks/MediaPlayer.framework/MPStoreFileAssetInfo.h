/*
* Generated on Thursday, January 14, 2021 at 2:21:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSData *)md5;
-(NSString *)fileExtension;
-(unsigned long long)fileSize;
-(NSURL *)assetURL;
-(long long)protectionType;
-(NSString *)downloadKey;
-(long long)flavorType;
-(id)initWithiTunesCloudStoreFileAssetInfo:(id)arg1 ;
-(NSArray *)fairPlayInfoList;
@end

