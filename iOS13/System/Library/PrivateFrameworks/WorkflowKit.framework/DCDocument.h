/*
* Generated on Monday, March 1, 2021 at 2:32:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/


@class NSURL;

@interface DCDocument : NSObject {

	NSURL* _fileURL;
	id _annotation;

}

@property (nonatomic,copy,readonly) NSURL * fileURL;              //@synthesize fileURL=_fileURL - In the implementation block
@property (nonatomic,copy,readonly) id annotation;                //@synthesize annotation=_annotation - In the implementation block
+(id)documentWithURL:(id)arg1 annotation:(id)arg2 ;
+(id)documentWithURL:(id)arg1 ;
-(NSURL *)fileURL;
-(id)annotation;
-(void)openWithAppBundleIdentifier:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)initWithURL:(id)arg1 annotation:(id)arg2 ;
@end

