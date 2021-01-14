/*
* Generated on Thursday, January 14, 2021 at 2:27:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DocumentCamera.framework/DocumentCamera
*/


@class NSURL;

@interface DCCachesDirectory : NSObject {

	NSURL* _cachesDirectoryURL;

}

@property (nonatomic,readonly) NSURL * cachesDirectoryURL;              //@synthesize cachesDirectoryURL=_cachesDirectoryURL - In the implementation block
+(id)sharedCachesDirectory;
-(id)init;
-(NSURL *)cachesDirectoryURL;
@end

