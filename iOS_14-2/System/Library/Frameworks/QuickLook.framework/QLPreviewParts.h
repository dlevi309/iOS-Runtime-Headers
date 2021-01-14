/*
* Generated on Thursday, January 14, 2021 at 2:24:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
*/


#import <QuickLook/QuickLook-Structs.h>
@class NSURL, NSData, NSString, NSURLConnection, NSURLResponse, NSMutableSet, NSMutableDictionary, NSThread, NSError, NSURLRequest, NSSet;

@interface QLPreviewParts : NSObject {

	NSURL* _url;
	NSData* _data;
	NSString* _fileName;
	NSString* _uti;
	NSString* _password;
	BOOL _progressive;
	void* _convertFunction;
	NSURLConnection* _connection;
	long long _pageCount;
	float _pageWidth;
	float _pageHeight;
	NSURL* previewURL;
	NSURLResponse* previewResponse;
	NSMutableSet* registeredURLs;
	NSMutableSet* outstandingURLs;
	NSMutableDictionary* encodingsForURLs;
	NSThread* delegateCallbackThread;
	NSError* mainError;
	BOOL computed;
	BOOL cancelled;
	const void* representedObject;
	SCD_Struct_QL13* representedObjectCallbacks;
	long long representedObjectProtection;
	BOOL htmlErrorDisabled;
	BOOL _shouldRemoveURLAfterGeneration;
	id _delegate;

}

@property (nonatomic,retain) NSURL * url;                                      //@synthesize url=_url - In the implementation block
@property (nonatomic,retain) NSData * data;                                    //@synthesize data=_data - In the implementation block
@property (nonatomic,retain) NSString * fileName;                              //@synthesize fileName=_fileName - In the implementation block
@property (nonatomic,retain) NSString * uti;                                   //@synthesize uti=_uti - In the implementation block
@property (nonatomic,retain) NSString * password;                              //@synthesize password=_password - In the implementation block
@property (assign,nonatomic) BOOL progressive;                                 //@synthesize progressive=_progressive - In the implementation block
@property (nonatomic,retain) NSURLConnection * connection;                     //@synthesize connection=_connection - In the implementation block
@property (assign,nonatomic) BOOL shouldRemoveURLAfterGeneration;              //@synthesize shouldRemoveURLAfterGeneration=_shouldRemoveURLAfterGeneration - In the implementation block
@property (assign,nonatomic,__weak) id delegate;                               //@synthesize delegate=_delegate - In the implementation block
@property (assign) BOOL htmlErrorDisabled; 
@property (nonatomic,readonly) NSURLRequest * previewRequest; 
@property (nonatomic,readonly) NSURLResponse * previewResponse; 
@property (nonatomic,readonly) NSURL * previewURL; 
@property (nonatomic,readonly) NSSet * attachmentURLs; 
@property (readonly) long long pageCount;                                      //@synthesize pageCount=_pageCount - In the implementation block
@property (readonly) float pageWidth;                                          //@synthesize pageWidth=_pageWidth - In the implementation block
@property (readonly) float pageHeight;                                         //@synthesize pageHeight=_pageHeight - In the implementation block
@property (getter=isComputed,readonly) BOOL computed; 
@property (getter=isCancelled,readonly) BOOL cancelled; 
+(id)safeURLScheme;
+(id)relativeStringForSafeURL:(id)arg1 ;
+(void)registerPreview:(id)arg1 ;
+(void)unregisterPreview:(id)arg1 ;
+(BOOL)isSafeURL:(id)arg1 ;
+(BOOL)isSafeRequest:(id)arg1 ;
-(NSString *)uti;
-(id)mimeTypeForAttachmentURL:(id)arg1 ;
-(id)_voidRequest;
-(id)_requestForURL:(id)arg1 ;
-(void)computePreview;
-(NSURL *)previewURL;
-(void)setFileName:(NSString *)arg1 ;
-(id)delegate;
-(id)safeRequestForRequest:(id)arg1 ;
-(NSURLResponse *)previewResponse;
-(NSURLRequest *)previewRequest;
-(long long)pageCount;
-(void)setUti:(NSString *)arg1 ;
-(void)setError:(id)arg1 ;
-(NSString *)password;
-(NSURL *)url;
-(void)setData:(NSData *)arg1 ;
-(NSString *)fileName;
-(void)setDelegate:(id)arg1 ;
-(void)computePreviewInThread;
-(void)_protectRepresentedObjectSafely;
-(void)_discardRepresentedObjectSafely;
-(void)_registerURL:(id)arg1 mimeType:(id)arg2 textEncoding:(id)arg3 ;
-(id)newSafeAttachmentURLWithID:(id)arg1 mimeType:(id)arg2 textEncoding:(id)arg3 ;
-(unsigned)cfEncodingForAttachmentURL:(id)arg1 ;
-(BOOL)progressive;
-(void)setProgressive:(BOOL)arg1 ;
-(BOOL)shouldRemoveURLAfterGeneration;
-(NSURLConnection *)connection;
-(float)pageHeight;
-(void)setPassword:(NSString *)arg1 ;
-(NSData *)data;
-(void)setShouldRemoveURLAfterGeneration:(BOOL)arg1 ;
-(void)startComputingPreview;
-(void)setHtmlErrorDisabled:(BOOL)arg1 ;
-(BOOL)htmlErrorDisabled;
-(void)setUrl:(NSURL *)arg1 ;
-(BOOL)isComputed;
-(NSSet *)attachmentURLs;
-(void)startDataRepresentationWithContentType:(id)arg1 properties:(id)arg2 ;
-(void)appendData:(id)arg1 forURL:(id)arg2 lastChunk:(BOOL)arg3 ;
-(id)newAttachmentURLWithID:(id)arg1 properties:(id)arg2 ;
-(void)setDocumentObject:(const void*)arg1 callbacks:(const SCD_Struct_QL13*)arg2 ;
-(const void*)documentObject;
-(void)setConnection:(NSURLConnection *)arg1 ;
-(void)cancel;
-(float)pageWidth;
-(BOOL)isCancelled;
-(void)dealloc;
@end

