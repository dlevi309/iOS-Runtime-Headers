/*
* Generated on Thursday, January 14, 2021 at 2:24:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSURL *)shareURL;
-(NSURL *)fileURL;
-(id)previewItemTitle;
-(id)previewItemURL;
-(NSString *)title;
-(id)initWithFileURL:(id)arg1 shareURL:(id)arg2 ;
-(id)initWithFileURL:(id)arg1 title:(id)arg2 shareURL:(id)arg3 ;
@end

