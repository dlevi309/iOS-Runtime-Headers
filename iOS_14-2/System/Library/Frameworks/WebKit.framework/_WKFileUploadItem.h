/*
* Generated on Thursday, January 14, 2021 at 2:21:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
*/


#import <WebKit/WebKit-Structs.h>
@class NSURL;

@interface _WKFileUploadItem : NSObject {

	RetainPtr<NSURL>* _fileURL;

}

@property (getter=isVideo,nonatomic,readonly) BOOL video; 
@property (nonatomic,readonly) NSURL * fileURL; 
@property (nonatomic,readonly) RetainPtr<UIImage>* displayImage; 
-(NSURL *)fileURL;
-(id)initWithFileURL:(id)arg1 ;
-(RetainPtr<UIImage>*)displayImage;
-(BOOL)isVideo;
@end

