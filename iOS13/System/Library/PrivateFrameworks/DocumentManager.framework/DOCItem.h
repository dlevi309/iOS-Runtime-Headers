/*
* Generated on Monday, March 1, 2021 at 2:31:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DocumentManager.framework/DocumentManager
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class FPSandboxingURLWrapper, NSString, NSURL, FPItem;

@interface DOCItem : NSObject <NSSecureCoding> {

	FPSandboxingURLWrapper* _wrapper;
	BOOL _needsToBeImported;
	NSString* _contentType;
	NSURL* _fileURL;
	NSString* _bookmarkableString;
	FPItem* _fileProviderItem;

}

@property (nonatomic,copy) NSString * contentType;              //@synthesize contentType=_contentType - In the implementation block
@property (retain) NSString * bookmarkableString;               //@synthesize bookmarkableString=_bookmarkableString - In the implementation block
@property (retain) FPItem * fileProviderItem;                   //@synthesize fileProviderItem=_fileProviderItem - In the implementation block
@property (nonatomic,copy) NSURL * fileURL;                     //@synthesize fileURL=_fileURL - In the implementation block
+(BOOL)supportsSecureCoding;
+(BOOL)isAnyItemAFault:(id)arg1 ;
+(id)documentsURLsForItems:(id)arg1 ;
+(id)_wrapperForURL:(id)arg1 error:(id*)arg2 ;
+(void)_fetchDocumentURLFromBookmarkableString:(id)arg1 completion:(/*^block*/id)arg2 ;
+(BOOL)isAnyFPItemAFault:(id)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)contentType;
-(void)setContentType:(NSString *)arg1 ;
-(NSURL *)fileURL;
-(void)setFileURL:(NSURL *)arg1 ;
-(void)prepareForMode:(unsigned long long)arg1 usingBookmark:(BOOL)arg2 completionBlock:(/*^block*/id)arg3 ;
-(FPItem *)fileProviderItem;
-(void)setBookmarkableString:(NSString *)arg1 ;
-(void)setFileProviderItem:(FPItem *)arg1 ;
-(BOOL)needsToBeImported;
-(void)copyURLToInbox:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setNeedsToBeImported:(BOOL)arg1 ;
-(id)initWithBookmarkableString:(id)arg1 fileProviderItem:(id)arg2 ;
-(id)initWithURL:(id)arg1 fileProviderItem:(id)arg2 ;
-(id)coordinatedFileURL;
-(id)fileURLForUploading;
-(NSString *)bookmarkableString;
@end

