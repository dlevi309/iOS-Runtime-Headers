/*
* Generated on Monday, March 1, 2021 at 2:31:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/ChatKit-Structs.h>
#import <libobjc.A.dylib/QLPreviewItem.h>

@class NSURL, NSString, NSDate;

@interface CKAttachmentItem : NSObject <QLPreviewItem> {

	CGSize _size;
	NSURL* _appendedBundleURL;
	BOOL _isSticker;
	BOOL _showDocumentIcon;
	BOOL _isIrisAsset;
	NSURL* _fileURL;
	NSString* _transferGUID;
	NSString* _guid;
	NSDate* _createdDate;
	NSString* _irisVideoPath;
	NSURL* _previewURL;

}

@property (nonatomic,copy) NSURL * fileURL;                              //@synthesize fileURL=_fileURL - In the implementation block
@property (nonatomic,copy) NSString * guid;                              //@synthesize guid=_guid - In the implementation block
@property (nonatomic,copy) NSString * transferGUID;                      //@synthesize transferGUID=_transferGUID - In the implementation block
@property (nonatomic,retain) NSDate * createdDate;                       //@synthesize createdDate=_createdDate - In the implementation block
@property (nonatomic,retain) NSString * irisVideoPath;                   //@synthesize irisVideoPath=_irisVideoPath - In the implementation block
@property (assign,nonatomic) BOOL isIrisAsset;                           //@synthesize isIrisAsset=_isIrisAsset - In the implementation block
@property (nonatomic,retain) NSURL * previewURL;                         //@synthesize previewURL=_previewURL - In the implementation block
@property (nonatomic,readonly) CGSize size; 
@property (assign,nonatomic) BOOL isSticker;                             //@synthesize isSticker=_isSticker - In the implementation block
@property (assign,nonatomic) BOOL showDocumentIcon;                      //@synthesize showDocumentIcon=_showDocumentIcon - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSURL * previewItemURL; 
@property (nonatomic,readonly) NSString * previewItemTitle; 
+(CGSize)defaultSize;
+(id)UTITypes;
+(id)previewCache;
+(id)previewSizingQueue;
+(unsigned long long)pxWidth;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)description;
-(CGSize)size;
-(NSURL *)fileURL;
-(void)setFileURL:(NSURL *)arg1 ;
-(id)dragItem;
-(id)imageData;
-(void)setGuid:(NSString *)arg1 ;
-(NSString *)guid;
-(BOOL)isSticker;
-(NSDate *)createdDate;
-(void)setCreatedDate:(NSDate *)arg1 ;
-(void)setIsSticker:(BOOL)arg1 ;
-(NSURL *)previewItemURL;
-(NSURL *)previewURL;
-(void)setPreviewURL:(NSURL *)arg1 ;
-(id)fileIcon;
-(void)setShowDocumentIcon:(BOOL)arg1 ;
-(id)cachedPreview;
-(void)generatePreviewWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)isIrisAsset;
-(id)calculateIrisVideoPath;
-(void)startDeferredSetup;
-(id)UTIType;
-(void)setIsIrisAsset:(BOOL)arg1 ;
-(BOOL)canShareItem;
-(id)pasteboardItem;
-(id)_savedPreviewFromURL:(id)arg1 ;
-(id)initWithFileURL:(id)arg1 size:(CGSize)arg2 transferGUID:(id)arg3 guid:(id)arg4 createdDate:(id)arg5 ;
-(NSString *)transferGUID;
-(void)_savePreview:(id)arg1 ;
-(id)getIrisVideoPath;
-(id)_getIrisBundleLocation;
-(void)setTransferGUID:(NSString *)arg1 ;
-(BOOL)showDocumentIcon;
-(id)uncachedPreviewURL;
-(id)_getIrisBundleURL;
-(NSString *)irisVideoPath;
-(void)setIrisVideoPath:(NSString *)arg1 ;
@end

