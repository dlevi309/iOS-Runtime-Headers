/*
* Generated on Monday, March 1, 2021 at 2:31:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
*/


@protocol _SFQuickLookDocumentSource;
@class LSDocumentProxy, NSString, NSURL;

@interface _SFQuickLookDocument : NSObject {

	LSDocumentProxy* _documentProxy;
	BOOL _needsQuickLookDocumentView;
	NSString* _savedPath;
	NSString* _savedPathWithProperExtension;
	BOOL _shouldDeleteSavedPath;
	BOOL _shouldDeleteSavedPathWithProperExtension;
	NSString* _fileName;
	NSString* _mimeType;
	NSString* _uti;
	NSURL* _sourceURL;
	id<_SFQuickLookDocumentSource> _documentSource;

}

@property (nonatomic,retain) LSDocumentProxy * documentProxy;                                   //@synthesize documentProxy=_documentProxy - In the implementation block
@property (nonatomic,copy) NSString * savedPath;                                                //@synthesize savedPath=_savedPath - In the implementation block
@property (nonatomic,copy) NSString * savedPathWithProperExtension;                             //@synthesize savedPathWithProperExtension=_savedPathWithProperExtension - In the implementation block
@property (nonatomic,copy) NSString * fileName;                                                 //@synthesize fileName=_fileName - In the implementation block
@property (nonatomic,copy) NSString * mimeType;                                                 //@synthesize mimeType=_mimeType - In the implementation block
@property (nonatomic,copy) NSString * uti;                                                      //@synthesize uti=_uti - In the implementation block
@property (nonatomic,readonly) BOOL needsQuickLookDocumentView;                                 //@synthesize needsQuickLookDocumentView=_needsQuickLookDocumentView - In the implementation block
@property (nonatomic,copy,readonly) NSURL * savedURLWithProperExtension; 
@property (nonatomic,readonly) unsigned long long fileSize; 
@property (nonatomic,copy,readonly) NSString * inferredUTI; 
@property (nonatomic,copy,readonly) NSString * localizedType; 
@property (nonatomic,retain) NSURL * sourceURL;                                                 //@synthesize sourceURL=_sourceURL - In the implementation block
@property (nonatomic,readonly) BOOL shouldUnzipByUIDocumentInteractionController; 
@property (assign,nonatomic,__weak) id<_SFQuickLookDocumentSource> documentSource;              //@synthesize documentSource=_documentSource - In the implementation block
+(BOOL)_hasSuitableApplicationForOpeningDocument:(id)arg1 ;
-(void)dealloc;
-(unsigned long long)fileSize;
-(LSDocumentProxy *)documentProxy;
-(NSString *)uti;
-(void)setUti:(NSString *)arg1 ;
-(NSString *)mimeType;
-(void)setMimeType:(NSString *)arg1 ;
-(NSURL *)sourceURL;
-(void)setSourceURL:(NSURL *)arg1 ;
-(NSString *)fileName;
-(void)setFileName:(NSString *)arg1 ;
-(id<_SFQuickLookDocumentSource>)documentSource;
-(void)setDocumentSource:(id<_SFQuickLookDocumentSource>)arg1 ;
-(NSURL *)savedURLWithProperExtension;
-(id)initWithFileName:(id)arg1 mimeType:(id)arg2 uti:(id)arg3 needsQuickLookDocumentView:(BOOL)arg4 ;
-(void)saveToFileIfNeeded;
-(BOOL)shouldUnzipByUIDocumentInteractionController;
-(NSString *)localizedType;
-(NSString *)inferredUTI;
-(void)addQuickLookPrintSettingsToPrintInfo:(id)arg1 ;
-(void)setSavedPath:(id)arg1 shouldDelete:(BOOL)arg2 ;
-(void)_deleteSavedPathIfNecessary;
-(void)_deleteSavedPathWithProperExtensionIfNecessary;
-(NSString *)savedPath;
-(NSString *)savedPathWithProperExtension;
-(void)setDocumentProxy:(LSDocumentProxy *)arg1 ;
-(void)setSavedPathWithProperExtension:(id)arg1 shouldDelete:(BOOL)arg2 ;
-(void)setSavedPath:(NSString *)arg1 ;
-(void)setSavedPathWithProperExtension:(NSString *)arg1 ;
-(void)setFileNameForPDFDocument:(id)arg1 ;
-(BOOL)needsQuickLookDocumentView;
@end

