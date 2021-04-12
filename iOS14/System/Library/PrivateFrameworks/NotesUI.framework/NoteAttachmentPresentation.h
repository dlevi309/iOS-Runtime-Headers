/*
* Generated on Thursday, January 14, 2021 at 2:26:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
*/

#import <NotesUI/NotesUI-Structs.h>
#import <NotesUI/NotesCIDDataProvider.h>

@class NSString, NSURL, NSError, NSData, NSNumber;

@interface NoteAttachmentPresentation : NSObject <NotesCIDDataProvider> {

	BOOL _sourceIsManaged;
	BOOL _image;
	NSString* _contentID;
	NSURL* _contentIDURL;
	NSURL* _dataFileURL;
	NSString* _mimeType;
	NSString* _filename;
	NSError* _dataFileURLError;
	NSString* _contentIDURLAbsoluteString;
	NSData* _data;
	CGSize _iconSize;

}

@property (nonatomic,copy) NSString * contentID;                               //@synthesize contentID=_contentID - In the implementation block
@property (nonatomic,copy) NSURL * dataFileURL;                                //@synthesize dataFileURL=_dataFileURL - In the implementation block
@property (nonatomic,copy) NSURL * contentIDURL;                               //@synthesize contentIDURL=_contentIDURL - In the implementation block
@property (nonatomic,retain) NSError * dataFileURLError;                       //@synthesize dataFileURLError=_dataFileURLError - In the implementation block
@property (nonatomic,copy) NSString * contentIDURLAbsoluteString;              //@synthesize contentIDURLAbsoluteString=_contentIDURLAbsoluteString - In the implementation block
@property (nonatomic,copy) NSString * mimeType;                                //@synthesize mimeType=_mimeType - In the implementation block
@property (assign,getter=isImage,nonatomic) BOOL image;                        //@synthesize image=_image - In the implementation block
@property (nonatomic,retain) NSData * data;                                    //@synthesize data=_data - In the implementation block
@property (assign,nonatomic) CGSize iconSize;                                  //@synthesize iconSize=_iconSize - In the implementation block
@property (nonatomic,readonly) NSNumber * dataSizeNumber; 
@property (nonatomic,copy,readonly) NSString * filename;                       //@synthesize filename=_filename - In the implementation block
@property (nonatomic,readonly) BOOL sourceIsManaged;                           //@synthesize sourceIsManaged=_sourceIsManaged - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)attachmentPresentationsForAttachments:(id)arg1 ;
+(void)prepareDocumentForPresentationWithAttachmentContentIDs:(id)arg1 withAttachmentPresentations:(id)arg2 occurences:(id*)arg3 ;
+(id)presentationSelector;
+(void)prepareDocumentForSerializationWithAttachmentContentIDs:(id)arg1 withAttachmentPresentations:(id)arg2 newPresentationProvider:(/*^block*/id)arg3 leftoverPresentations:(id*)arg4 ;
-(BOOL)sourceIsManaged;
-(NSString *)mimeType;
-(void)setImage:(BOOL)arg1 ;
-(NSString *)filename;
-(void)setMimeType:(NSString *)arg1 ;
-(void)setData:(NSData *)arg1 ;
-(NSString *)contentID;
-(void)setContentID:(NSString *)arg1 ;
-(CGSize)iconSize;
-(BOOL)isImage;
-(void)clearCache;
-(NSData *)data;
-(void)setIconSize:(CGSize)arg1 ;
-(BOOL)getData:(id*)arg1 mimeType:(id*)arg2 error:(id*)arg3 ;
-(BOOL)getPresentationData:(id*)arg1 mimeType:(id*)arg2 error:(id*)arg3 ;
-(NSURL *)contentIDURL;
-(NSNumber *)dataSizeNumber;
-(NSURL *)dataFileURL;
-(id)initWithNoteAttachmentObject:(id)arg1 ;
-(void)updateContentIDURL;
-(NSError *)dataFileURLError;
-(void)setContentIDURL:(NSURL *)arg1 ;
-(void)setContentIDURLAbsoluteString:(NSString *)arg1 ;
-(id)initWithData:(id)arg1 contentID:(id)arg2 mimeType:(id)arg3 filename:(id)arg4 ;
-(void)setDataFileURL:(NSURL *)arg1 ;
-(void)setDataFileURLError:(NSError *)arg1 ;
-(NSString *)contentIDURLAbsoluteString;
@end

