/*
* Generated on Thursday, January 14, 2021 at 2:28:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSString *)accessibilityLabel;
-(NSURL *)fileURL;
-(NSString *)stickerName;
-(id)initWithFileURL:(id)arg1 stickerName:(id)arg2 accessibilityLabel:(id)arg3 ;
@end

