/*
* Generated on Thursday, January 14, 2021 at 2:24:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
*/


@protocol OS_dispatch_io;
@class QLPreviewParts, NSDictionary, NSObject, NSURL, NSString, NSURLRequest, NSURLResponse;

@interface QLPreviewConverter : NSObject {

	QLPreviewParts* _previewParts;
	NSDictionary* _options;
	NSObject*<OS_dispatch_io> _io_write;
	NSURL* _tmpFileURL;
	long long _totalWrittenBytes;
	BOOL _dataPhaseFinished;
	BOOL _dataGatheringSucceeded;

}

@property (nonatomic,readonly) NSString * previewFileName; 
@property (nonatomic,readonly) NSString * previewUTI; 
@property (nonatomic,readonly) NSURLRequest * previewRequest; 
@property (nonatomic,readonly) NSURLResponse * previewResponse; 
@property (nonatomic,readonly) QLPreviewParts * previewParts; 
+(id)_iWorkUTIs;
+(id)_iWorkMIMETypes;
+(id)_rtfMIMETypes;
+(id)_csvMIMETypes;
+(id)_spreadSheetMIMETypes;
+(id)_officeUTIs;
+(id)_spreadSheetUTIs;
+(BOOL)canConvertDocumentType:(id)arg1 ;
+(BOOL)isSafeURL:(id)arg1 ;
+(id)convertibleMIMETypes;
+(id)convertibleUTIs;
+(BOOL)isOfficeDocumentType:(id)arg1 ;
+(BOOL)isCSVDocumentType:(id)arg1 ;
+(BOOL)isLPDFDocumentType:(id)arg1 ;
+(BOOL)isRTFDocumentType:(id)arg1 ;
+(BOOL)isSafeRequest:(id)arg1 ;
+(BOOL)isIWorkDocumentType:(id)arg1 ;
+(BOOL)isSpreadSheetDocumentType:(id)arg1 ;
+(id)_lpdfUTIs;
+(id)_officeMIMETypes;
+(id)_rtfUTIs;
+(id)_csvUTIs;
-(id)initWithConnection:(id)arg1 delegate:(id)arg2 response:(id)arg3 options:(id)arg4 ;
-(id)safeRequestForRequest:(id)arg1 ;
-(NSURLResponse *)previewResponse;
-(NSString *)previewFileName;
-(NSString *)previewUTI;
-(void)finishedAppendingData;
-(void)finishConverting;
-(id)initWithData:(id)arg1 name:(id)arg2 uti:(id)arg3 options:(id)arg4 ;
-(NSURLRequest *)previewRequest;
-(void)_register;
-(void)_closeIOCahnnel;
-(void)appendDataArray:(id)arg1 ;
-(void)_writeDataArrayIntoStream:(id)arg1 ;
-(void)_createDispatchIOChannel;
-(void)setHtmlErrorDisabled:(BOOL)arg1 ;
-(BOOL)htmlErrorDisabled;
-(id)initWithURL:(id)arg1 uti:(id)arg2 options:(id)arg3 ;
-(QLPreviewParts *)previewParts;
-(BOOL)isComputed;
-(void)appendData:(id)arg1 ;
-(void)cancel;
-(BOOL)isCancelled;
-(void)dealloc;
@end

