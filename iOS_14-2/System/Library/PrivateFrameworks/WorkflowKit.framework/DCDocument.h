/*
* Generated on Thursday, January 14, 2021 at 2:26:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/


@class NSURL;

@interface DCDocument : NSObject {

	NSURL* _fileURL;
	id _annotation;

}

@property (nonatomic,copy,readonly) NSURL * fileURL;              //@synthesize fileURL=_fileURL - In the implementation block
@property (nonatomic,copy,readonly) id annotation;                //@synthesize annotation=_annotation - In the implementation block
+(id)documentWithURL:(id)arg1 ;
+(id)documentWithURL:(id)arg1 annotation:(id)arg2 ;
-(id)annotation;
-(NSURL *)fileURL;
-(id)initWithURL:(id)arg1 annotation:(id)arg2 ;
-(void)openWithAppBundleIdentifier:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end

