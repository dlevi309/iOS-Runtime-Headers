/*
* Generated on Monday, March 1, 2021 at 2:30:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
*/


#import <WebKit/WebKit-Structs.h>
@class NSURL, UIImage;

@interface _WKFileUploadItem : NSObject {

	RetainPtr<NSURL>* _fileURL;

}

@property (getter=isVideo,nonatomic,readonly) BOOL video; 
@property (nonatomic,readonly) NSURL * fileURL; 
@property (nonatomic,readonly) UIImage * displayImage; 
-(NSURL *)fileURL;
-(id)initWithFileURL:(id)arg1 ;
-(UIImage *)displayImage;
-(BOOL)isVideo;
@end

