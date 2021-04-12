/*
* Generated on Monday, March 1, 2021 at 2:35:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

