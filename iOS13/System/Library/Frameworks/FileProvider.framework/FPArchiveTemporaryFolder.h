/*
* Generated on Monday, March 1, 2021 at 2:32:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/FileProvider.framework/FileProvider
*/


@class NSURL;

@interface FPArchiveTemporaryFolder : NSObject {

	NSURL* _url;
	BOOL _didStartAccessing;
	NSURL* _temporaryFolderURL;

}
-(id)init;
-(void)dealloc;
-(id)initWithURL:(id)arg1 ;
-(id)temporaryFolderURLGetError:(id*)arg1 ;
@end

