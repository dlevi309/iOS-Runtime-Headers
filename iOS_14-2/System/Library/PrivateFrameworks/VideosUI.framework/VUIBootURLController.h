/*
* Generated on Thursday, January 14, 2021 at 2:24:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/


@class NSURL;

@interface VUIBootURLController : NSObject {

	NSURL* _localAppURL;

}

@property (nonatomic,retain) NSURL * localAppURL;              //@synthesize localAppURL=_localAppURL - In the implementation block
-(id)init;
-(id)initWithLocalAppURL:(id)arg1 ;
-(void)fetchBootURLWithCompletionHandler:(/*^block*/id)arg1 ;
-(NSURL *)localAppURL;
-(void)setLocalAppURL:(NSURL *)arg1 ;
@end

