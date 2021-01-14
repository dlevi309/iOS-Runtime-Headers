/*
* Generated on Thursday, January 14, 2021 at 2:26:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setImage:(UIImage *)arg1 ;
-(BOOL)isPhoto;
-(NSURL *)mediaURL;
-(void)setTitle:(NSString *)arg1 ;
-(void)setMetadata:(NSDictionary *)arg1 ;
-(UIImage *)image;
-(void)setAttributedContentText:(NSAttributedString *)arg1 ;
-(id)initWithFileURL:(id)arg1 ;
-(id)description;
-(ICAttachment *)attachment;
-(NSAttributedString *)attributedContentText;
-(void)setMediaURL:(NSURL *)arg1 ;
-(BOOL)isVideo;
-(void)setMediaData:(NSData *)arg1 ;
-(void)setAttachment:(ICAttachment *)arg1 ;
-(NSData *)mediaData;
-(NSDictionary *)metadata;
-(NSString *)title;
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

