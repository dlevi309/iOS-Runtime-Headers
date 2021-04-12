/*
* Generated on Thursday, January 14, 2021 at 2:23:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
*/


@protocol OS_dispatch_queue;
@class NSObject, NSString, _SFQuickLookDocument;

@interface _SFQuickLookDocumentWriter : NSObject {

	NSObject*<OS_dispatch_queue> _dispatchQueue;
	NSString* _filePathAccessedOnDispatchQueue;
	BOOL _hasFinishedWriting;
	_SFQuickLookDocument* _quickLookDocument;

}

@property (nonatomic,copy) NSString * filePathAccessedOnDispatchQueue; 
@property (nonatomic,readonly) _SFQuickLookDocument * quickLookDocument;              //@synthesize quickLookDocument=_quickLookDocument - In the implementation block
@property (nonatomic,readonly) BOOL hasFinishedWriting;                               //@synthesize hasFinishedWriting=_hasFinishedWriting - In the implementation block
-(id)initWithFileName:(id)arg1 uti:(id)arg2 ;
-(void)writeDataAndClose:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setFilePathAccessedOnDispatchQueue:(NSString *)arg1 ;
-(NSString *)filePathAccessedOnDispatchQueue;
-(BOOL)hasFinishedWriting;
-(_SFQuickLookDocument *)quickLookDocument;
@end

