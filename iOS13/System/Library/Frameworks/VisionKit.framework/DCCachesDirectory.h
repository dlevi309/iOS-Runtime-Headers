/*
* Generated on Monday, March 1, 2021 at 2:34:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/VisionKit.framework/VisionKit
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

