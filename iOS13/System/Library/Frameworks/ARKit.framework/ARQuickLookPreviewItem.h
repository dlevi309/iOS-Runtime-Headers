/*
* Generated on Monday, March 1, 2021 at 2:32:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ARKit.framework/ARKit
*/

#import <libobjc.A.dylib/QLPreviewItemPrivateProtocol.h>
#import <libobjc.A.dylib/QLPreviewItem.h>

@class NSString, NSURL, UIColor, NSDictionary;

@interface ARQuickLookPreviewItem : NSObject <QLPreviewItemPrivateProtocol, QLPreviewItem> {

	BOOL _allowsContentScaling;
	NSURL* _canonicalWebPageURL;
	NSURL* _fileURL;

}

@property (nonatomic,retain) NSURL * fileURL;                                  //@synthesize fileURL=_fileURL - In the implementation block
@property (nonatomic,retain) NSURL * canonicalWebPageURL;                      //@synthesize canonicalWebPageURL=_canonicalWebPageURL - In the implementation block
@property (assign,nonatomic) BOOL allowsContentScaling;                        //@synthesize allowsContentScaling=_allowsContentScaling - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSURL * previewItemURL; 
@property (nonatomic,readonly) NSString * previewItemTitle; 
@property (nonatomic,readonly) NSString * previewItemContentType; 
@property (readonly) NSURL * previewItemURLForDisplay; 
@property (nonatomic,readonly) BOOL isPromisedItem; 
@property (readonly) double autoPlaybackPosition; 
@property (readonly) UIColor * backgroundColorOverride; 
@property (readonly) BOOL wantsDefaultMediaPlayer; 
@property (readonly) NSString * MIMEType; 
@property (nonatomic,copy) NSDictionary * previewOptions; 
-(NSURL *)fileURL;
-(void)setFileURL:(NSURL *)arg1 ;
-(id)initWithFileAtURL:(id)arg1 ;
-(void)setCanonicalWebPageURL:(NSURL *)arg1 ;
-(NSURL *)previewItemURL;
-(NSDictionary *)previewOptions;
-(NSURL *)canonicalWebPageURL;
-(BOOL)allowsContentScaling;
-(void)setAllowsContentScaling:(BOOL)arg1 ;
@end

