/*
* Generated on Thursday, January 14, 2021 at 2:22:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)isFileURL;
-(id)scheme;
-(UIImage *)thumbnail;
-(void)setURL:(NSURL *)arg1 ;
-(NSURL *)URL;
-(long long)attachmentURLType;
-(void)setAttachmentURLType:(long long)arg1 ;
-(void)setThumbnail:(UIImage *)arg1 ;
@end

