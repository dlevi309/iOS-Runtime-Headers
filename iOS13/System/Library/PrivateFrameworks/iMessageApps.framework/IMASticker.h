/*
* Generated on Monday, March 1, 2021 at 2:35:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/iMessageApps.framework/iMessageApps
*/


@class NSURL, NSString;

@interface IMASticker : NSObject {

	NSURL* _fileURL;
	NSString* _stickerName;
	NSString* _accessibilityLabel;

}

@property (nonatomic,copy,readonly) NSURL * fileURL;                            //@synthesize fileURL=_fileURL - In the implementation block
@property (nonatomic,copy,readonly) NSString * stickerName;                     //@synthesize stickerName=_stickerName - In the implementation block
@property (nonatomic,copy,readonly) NSString * accessibilityLabel;              //@synthesize accessibilityLabel=_accessibilityLabel - In the implementation block
+(double)screenScale;
-(NSURL *)fileURL;
-(NSString *)accessibilityLabel;
-(NSString *)stickerName;
-(id)initWithFileURL:(id)arg1 stickerName:(id)arg2 accessibilityLabel:(id)arg3 ;
@end

