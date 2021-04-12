/*
* Generated on Monday, March 1, 2021 at 2:31:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(_SFQuickLookDocument *)quickLookDocument;
-(id)initWithFileName:(id)arg1 uti:(id)arg2 ;
-(void)writeDataAndClose:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setFilePathAccessedOnDispatchQueue:(NSString *)arg1 ;
-(NSString *)filePathAccessedOnDispatchQueue;
-(BOOL)hasFinishedWriting;
@end

