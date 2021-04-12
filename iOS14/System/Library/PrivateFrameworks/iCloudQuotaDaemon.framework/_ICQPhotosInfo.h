/*
* Generated on Thursday, January 14, 2021 at 2:24:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iCloudQuotaDaemon.framework/iCloudQuotaDaemon
*/


@interface _ICQPhotosInfo : NSObject {

	unsigned long long _photoCount;
	unsigned long long _videoCount;

}

@property (assign,nonatomic) unsigned long long photoCount;              //@synthesize photoCount=_photoCount - In the implementation block
@property (assign,nonatomic) unsigned long long videoCount;              //@synthesize videoCount=_videoCount - In the implementation block
+(id)mockCount:(id)arg1 ;
+(void)getInfoWithCompletion:(/*^block*/id)arg1 ;
-(unsigned long long)photoCount;
-(unsigned long long)videoCount;
-(void)setVideoCount:(unsigned long long)arg1 ;
-(void)setPhotoCount:(unsigned long long)arg1 ;
@end

