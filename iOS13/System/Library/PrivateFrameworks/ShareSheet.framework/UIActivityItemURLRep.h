/*
* Generated on Monday, March 1, 2021 at 2:31:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ShareSheet.framework/ShareSheet
*/


@class NSURL, UIImage;

@interface UIActivityItemURLRep : NSObject {

	NSURL* _URL;
	UIImage* _thumbnail;
	long long _attachmentURLType;

}

@property (nonatomic,retain) NSURL * URL;                              //@synthesize URL=_URL - In the implementation block
@property (nonatomic,retain) UIImage * thumbnail;                      //@synthesize thumbnail=_thumbnail - In the implementation block
@property (assign,nonatomic) long long attachmentURLType;              //@synthesize attachmentURLType=_attachmentURLType - In the implementation block
-(id)scheme;
-(BOOL)isFileURL;
-(void)setURL:(NSURL *)arg1 ;
-(NSURL *)URL;
-(UIImage *)thumbnail;
-(void)setThumbnail:(UIImage *)arg1 ;
-(long long)attachmentURLType;
-(void)setAttachmentURLType:(long long)arg1 ;
@end

