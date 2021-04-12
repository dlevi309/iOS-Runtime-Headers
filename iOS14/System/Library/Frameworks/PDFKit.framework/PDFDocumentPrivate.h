/*
* Generated on Thursday, January 14, 2021 at 2:26:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PDFKit.framework/PDFKit
*/


@protocol OS_dispatch_queue, PDFDocumentPageChangeDelegate, PDFAKControllerDelegateProtocol, PDFDocumentAsyncFindDelegate;
#import <PDFKit/PDFKit-Structs.h>
@class NSURL, NSMutableArray, NSMutableDictionary, NSMutableIndexSet, NSString, NSDictionary, PDFOutline, NSObject, NSArray, PDFSelection, PDFForm, NSIndexSet, PDFAKDocumentAdaptor, PDFRenderingProperties;

@interface PDFDocumentPrivate : NSObject {

	CGPDFDocumentRef document;
	NSURL* documentURL;
	BOOL createdWithHighLatencyDataProvider;
	NSMutableArray* pages;
	NSMutableDictionary* pageIndices;
	NSMutableDictionary* pageDictionaryIndices;
	NSMutableIndexSet* preloadingPageIndexes;
	BOOL subclassOverridesPageAtIndex;
	id delegate;
	BOOL respondsToDidUnlock;
	BOOL respondsToDidFindMatch;
	BOOL respondsToDidBeginDocumentFind;
	BOOL respondsToDidEndDocumentFind;
	BOOL respondsToDidBeginPageFind;
	BOOL respondsToDidEndPageFind;
	BOOL respondsToDidMatchString;
	BOOL respondsToPrintJobTitle;
	BOOL respondsToClassForPage;
	BOOL respondsToClassForAnnotationType;
	BOOL respondsToClassForAnnotationClass;
	unsigned long long pageCount;
	int majorVersion;
	int minorVersion;
	BOOL isEncrypted;
	BOOL isUnlocked;
	int accessPermissions;
	BOOL allowsPrinting;
	BOOL allowsCopying;
	BOOL allowsDocumentChanges;
	BOOL allowsDocumentAssembly;
	BOOL allowsContentAccessibility;
	BOOL allowsCommenting;
	BOOL allowsFormFieldEntry;
	long long permission;
	NSString* ownerPassword;
	NSString* userPassword;
	NSDictionary* attributes;
	PDFOutline* outline;
	NSObject*<OS_dispatch_queue> textExtractionQueue;
	NSObject*<OS_dispatch_queue> displayListCreationQueue;
	BOOL finding;
	int findModel;
	NSArray* findStrings;
	PDFSelection* findInstance;
	unsigned long long findOptions;
	long long findPageIndex;
	long long findCharIndex;
	long long lastFindPageIndex;
	long long lastFindCharIndex;
	NSMutableArray* findResults;
	PDFForm* formData;
	BOOL formDataLoaded;
	NSArray* documentCatalogMetadata;
	NSString* xmpNameSpace;
	NSString* xmpPrefix;
	NSString* xmpRootPath;
	id<PDFDocumentPageChangeDelegate> pageChangeDelegate;
	BOOL documentChanged;
	BOOL documentHasBurnInAnnotations;
	unsigned long long documentRedactionCount;
	SCD_Struct_PD28 pagesChanged;
	NSIndexSet* initialBookmarkedPageIndices;
	NSMutableIndexSet* bookmarkedPages;
	PDFAKDocumentAdaptor* akDocumentAdaptor;
	id<PDFAKControllerDelegateProtocol> pdfAKControllerDelegateForDeferredSetup;
	PDFRenderingProperties* renderingProperties;
	BOOL useTaggedPDF;
	BOOL limitedSearch;
	NSObject*<OS_dispatch_queue> asyncSearchQueue;
	os_unfair_lock_s asyncSearchLock;
	id<PDFDocumentAsyncFindDelegate> asyncSearchDelegate;
	NSMutableArray* asyncSearchResults;

}
@end

