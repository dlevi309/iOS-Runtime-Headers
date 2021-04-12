/*
* Generated on Monday, March 1, 2021 at 2:34:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
*/


@class ICAttachment, NSString, NSURL, NSData, NSDictionary, UIImage, NSAttributedString;

@interface ICAddAttachmentsManagerAttachmentInfo : NSObject {

	BOOL _usesTemporaryFile;
	ICAttachment* _attachment;
	NSString* _title;
	NSURL* _mediaURL;
	NSString* _mediaUTI;
	NSData* _mediaData;
	NSDictionary* _metadata;
	NSString* _mediaFilenameExtension;
	UIImage* _image;
	NSAttributedString* _attributedContentText;

}

@property (nonatomic,retain) ICAttachment * attachment;                               //@synthesize attachment=_attachment - In the implementation block
@property (nonatomic,retain) NSString * title;                                        //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) NSURL * mediaURL;                                        //@synthesize mediaURL=_mediaURL - In the implementation block
@property (nonatomic,retain) NSString * mediaUTI;                                     //@synthesize mediaUTI=_mediaUTI - In the implementation block
@property (nonatomic,retain) NSData * mediaData;                                      //@synthesize mediaData=_mediaData - In the implementation block
@property (nonatomic,retain) NSDictionary * metadata;                                 //@synthesize metadata=_metadata - In the implementation block
@property (nonatomic,retain) NSString * mediaFilenameExtension;                       //@synthesize mediaFilenameExtension=_mediaFilenameExtension - In the implementation block
@property (nonatomic,retain) UIImage * image;                                         //@synthesize image=_image - In the implementation block
@property (nonatomic,retain) NSAttributedString * attributedContentText;              //@synthesize attributedContentText=_attributedContentText - In the implementation block
@property (nonatomic,readonly) BOOL isPhoto; 
@property (nonatomic,readonly) BOOL isVideo; 
@property (assign,nonatomic) BOOL usesTemporaryFile;                                  //@synthesize usesTemporaryFile=_usesTemporaryFile - In the implementation block
-(id)description;
-(void)setAttributedContentText:(NSAttributedString *)arg1 ;
-(NSAttributedString *)attributedContentText;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(UIImage *)image;
-(void)setImage:(UIImage *)arg1 ;
-(void)setMetadata:(NSDictionary *)arg1 ;
-(NSDictionary *)metadata;
-(ICAttachment *)attachment;
-(void)setAttachment:(ICAttachment *)arg1 ;
-(id)initWithFileURL:(id)arg1 ;
-(BOOL)isVideo;
-(void)setMediaData:(NSData *)arg1 ;
-(NSData *)mediaData;
-(BOOL)isPhoto;
-(NSURL *)mediaURL;
-(void)setMediaURL:(NSURL *)arg1 ;
-(void)setMediaUTI:(NSString *)arg1 ;
-(NSString *)mediaUTI;
-(NSString *)mediaFilenameExtension;
-(BOOL)usesTemporaryFile;
-(id)attachmentIfExistsForAccount:(id)arg1 ;
-(unsigned long long)mediaSize;
-(void)deleteTemporaryImageFileIfNecessary;
-(void)setMediaFilenameExtension:(NSString *)arg1 ;
-(void)setUsesTemporaryFile:(BOOL)arg1 ;
@end

