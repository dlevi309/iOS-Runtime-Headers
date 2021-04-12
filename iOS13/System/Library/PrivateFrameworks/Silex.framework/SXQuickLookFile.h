/*
* Generated on Monday, March 1, 2021 at 2:33:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/


@class NSURL, NSString;

@interface SXQuickLookFile : NSObject {

	NSURL* _fileURL;
	NSString* _title;
	NSURL* _shareURL;

}

@property (nonatomic,readonly) NSURL * fileURL;               //@synthesize fileURL=_fileURL - In the implementation block
@property (nonatomic,readonly) NSString * title;              //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) NSURL * shareURL;              //@synthesize shareURL=_shareURL - In the implementation block
-(NSString *)title;
-(NSURL *)fileURL;
-(NSURL *)shareURL;
-(id)previewItemTitle;
-(id)previewItemURL;
-(id)initWithFileURL:(id)arg1 shareURL:(id)arg2 ;
-(id)initWithFileURL:(id)arg1 title:(id)arg2 shareURL:(id)arg3 ;
@end

