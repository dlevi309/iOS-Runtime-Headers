/*
* Generated on Monday, March 1, 2021 at 2:31:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/PDFKit.framework/PDFKit
*/

#import <PDFKit/PDFKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PDFDocumentPrivate, NSURL, NSDictionary, NSString, PDFOutline, PDFSelection;

@interface PDFDocument : NSObject <NSCopying> {

	PDFDocumentPrivate* _private;

}

@property (nonatomic,readonly) NSURL * documentURL; 
@property (nonatomic,readonly) CGPDFDocumentRef documentRef; 
@property (nonatomic,copy) NSDictionary * documentAttributes; 
@property (nonatomic,readonly) long long majorVersion; 
@property (nonatomic,readonly) long long minorVersion; 
@property (nonatomic,readonly) BOOL isEncrypted; 
@property (nonatomic,readonly) BOOL isLocked; 
@property (nonatomic,readonly) BOOL allowsPrinting; 
@property (nonatomic,readonly) BOOL allowsCopying; 
@property (nonatomic,readonly) BOOL allowsDocumentChanges; 
@property (nonatomic,readonly) BOOL allowsDocumentAssembly; 
@property (nonatomic,readonly) BOOL allowsContentAccessibility; 
@property (nonatomic,readonly) BOOL allowsCommenting; 
@property (nonatomic,readonly) BOOL allowsFormFieldEntry; 
@property (nonatomic,readonly) long long permissionsStatus; 
@property (nonatomic,readonly) NSString * string; 
@property (assign,nonatomic,__weak) id<PDFDocumentDelegate> delegate; 
@property (nonatomic,retain) PDFOutline * outlineRoot; 
@property (nonatomic,readonly) unsigned long long pageCount; 
@property (nonatomic,readonly) Class pageClass; 
@property (nonatomic,readonly) BOOL isFinding; 
@property (nonatomic,readonly) PDFSelection * selectionForEntireDocument; 
+(BOOL)pdfDocumentAppendModeActiveForThisThread;
+(void)setPDFDocumentAppendModeActiveForThisThread:(BOOL)arg1 ;
-(id)init;
-(NSString *)string;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithURL:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id<PDFDocumentDelegate>)delegate;
-(void)setDelegate:(id<PDFDocumentDelegate>)arg1 ;
-(id)dataRepresentation;
-(NSURL *)documentURL;
-(BOOL)isLocked;
-(BOOL)isEncrypted;
-(long long)majorVersion;
-(long long)minorVersion;
-(void)_commonInit;
-(void)setDocumentAttributes:(NSDictionary *)arg1 ;
-(NSDictionary *)documentAttributes;
-(void)undo:(id)arg1 ;
-(void)redo:(id)arg1 ;
-(unsigned long long)pageCount;
-(void)setDocument:(CGPDFDocumentRef)arg1 ;
-(id)pageAtIndex:(unsigned long long)arg1 ;
-(void)cancelFindString;
-(id)findString:(id)arg1 withOptions:(unsigned long long)arg2 ;
-(BOOL)allowsFormFieldEntry;
-(id)akDocumentAdaptor;
-(unsigned long long)indexForPage:(id)arg1 ;
-(id)renderingProperties;
-(void)setRenderingProperties:(id)arg1 ;
-(void)setDocumentHasBurnInAnnotations:(BOOL)arg1 ;
-(BOOL)allowsCommenting;
-(long long)permissionsStatus;
-(CGPDFDocumentRef)documentRef;
-(id)formData;
-(void)setFormData:(id)arg1 ;
-(id)selectionFromPage:(id)arg1 atCharacterIndex:(unsigned long long)arg2 toPage:(id)arg3 atCharacterIndex:(unsigned long long)arg4 ;
-(id)annotationsForFieldName:(id)arg1 ;
-(void)setPageChangeDelegate:(id)arg1 ;
-(BOOL)unlockWithPassword:(id)arg1 ;
-(BOOL)allowsDocumentAssembly;
-(id)akController;
-(void)requirePasswordsIfNeeded:(/*^block*/id)arg1 ;
-(id)PDFAKControllerDelegate;
-(void)setPDFAKControllerDelegate:(id)arg1 ;
-(id)findPageWithCGPDFDictionaryPageRef:(CGPDFDictionaryRef)arg1 ;
-(BOOL)allowsPrinting;
-(BOOL)allowsCopying;
-(BOOL)allowsDocumentChanges;
-(BOOL)allowsContentAccessibility;
-(BOOL)documentChanged;
-(id)bookmarkedPages;
-(id)_documentCatalogMetadataForRootPath:(id)arg1 withKeys:(id)arg2 ;
-(id)_rawPageAtIndex:(unsigned long long)arg1 ;
-(BOOL)_isCommonlyMappedToNothing:(id)arg1 ;
-(BOOL)_isNonAsciiSpace:(id)arg1 ;
-(id)_addEncryptionFromOptions:(id)arg1 ;
-(id)_convertWriteOptions:(id)arg1 ;
-(BOOL)canSaveWithAppendModeUsingOptions:(id)arg1 ;
-(BOOL)_writeAppendMode:(CGDataConsumerRef)arg1 ;
-(CFDictionaryRef)_createInfoDictionary;
-(PDFOutline *)outlineRoot;
-(BOOL)bookmarksChanged;
-(void)updateBookmarksInPDFDocument;
-(CFDataRef)newXMPFromData:(id)arg1 preserveExistingXMPMetadata:(BOOL)arg2 ;
-(CGPDFAnnotationRef)_createCGPDFAnnotationForAnnotation:(id)arg1 ;
-(void)_sanitizeAnnotationDictionary:(CFDictionaryRef)arg1 ;
-(CGPDFNameRef)_convertCFStringToCGPDFName:(void*)arg1 forKey:(CFStringRef)arg2 ;
-(void)_sanitizeAnnotationArray:(CFArrayRef)arg1 ;
-(id)_dataFromXMP:(CFDataRef)arg1 withRootPath:(id)arg2 keys:(id)arg3 ;
-(id)passwordUsedForUnlocking;
-(id)_SASLSanitize:(id)arg1 ;
-(BOOL)_canSaveWithEncryption;
-(void)didMatchString:(id)arg1 ;
-(id)dataRepresentationWithOptions:(id)arg1 ;
-(BOOL)writeToConsumer:(CGDataConsumerRef)arg1 withOptions:(id)arg2 ;
-(BOOL)writeToFile:(id)arg1 withOptions:(id)arg2 ;
-(BOOL)writeToURL:(id)arg1 withOptions:(id)arg2 ;
-(id)_getNearestOutline:(id)arg1 forDestination:(id)arg2 ;
-(Class)pageClass;
-(void)_notifyAKAdaptorPagePlaceholder:(id)arg1 wasReplacedWithPage:(id)arg2 atIndex:(unsigned long long)arg3 ;
-(BOOL)isFinding;
-(void)normalizeFindOptions:(unsigned long long)arg1 ;
-(void)coreFindString:(id)arg1 ;
-(void)beginFindStrings:(id)arg1 withOptions:(unsigned long long)arg2 ;
-(void)coreFindStrings:(id)arg1 ;
-(id)_findString:(id)arg1 fromSelection:(id)arg2 withOptions:(unsigned long long)arg3 ;
-(void)cleanupFind;
-(id)selectionFromPage:(id)arg1 atPoint:(CGPoint)arg2 toPage:(id)arg3 atPoint:(CGPoint)arg4 type:(int)arg5 ;
-(id)_bookmarksCatalog;
-(void)_setDocumentCatalogMetadata:(id)arg1 withNSpace:(id)arg2 prefix:(id)arg3 rootPath:(id)arg4 ;
-(id)_namedDestination:(id)arg1 forNameDictionary:(CGPDFDictionaryRef)arg2 ;
-(BOOL)validateUndo:(id)arg1 ;
-(BOOL)validateRedo:(id)arg1 ;
-(BOOL)findOnPage;
-(void)scheduledFindOnPage:(id)arg1 ;
-(void)setupAKDocumentAdaptorIfNecessaryWithView:(id)arg1 ;
-(void)enableDocumentMRUMode:(BOOL)arg1 ;
-(BOOL)writeToFile:(id)arg1 ;
-(BOOL)writeToURL:(id)arg1 ;
-(void)setOutlineRoot:(PDFOutline *)arg1 ;
-(id)outlineItemForSelection:(id)arg1 ;
-(void)insertPage:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)removePageAtIndex:(unsigned long long)arg1 ;
-(void)exchangePageAtIndex:(unsigned long long)arg1 withPageAtIndex:(unsigned long long)arg2 ;
-(void)beginFindString:(id)arg1 withOptions:(unsigned long long)arg2 ;
-(id)findString:(id)arg1 fromSelection:(id)arg2 withOptions:(unsigned long long)arg3 ;
-(id)findStringPerPage:(id)arg1 fromSelection:(id)arg2 withOptions:(unsigned long long)arg3 ;
-(void)asyncFindString:(id)arg1 withDelegate:(id)arg2 onQueue:(id)arg3 ;
-(PDFSelection *)selectionForEntireDocument;
-(id)selectionFromPage:(id)arg1 atPoint:(CGPoint)arg2 toPage:(id)arg3 atPoint:(CGPoint)arg4 ;
-(BOOL)showsAnnotations;
-(void)setShowsAnnotations:(BOOL)arg1 ;
-(void)setBookmarked:(BOOL)arg1 atPageIndex:(unsigned long long)arg2 ;
-(void)enableLimitedSearch;
-(id)namedDestination:(id)arg1 ;
-(void)revert;
-(id)pageAnnotationChanges;
-(void)resetPageAnnotationChanges;
-(BOOL)viewPreferenceRightToLeft;
-(void)enqueueLayoutThreadForPage:(id)arg1 ;
-(Class)annotationSubclassForType:(id)arg1 ;
@end

