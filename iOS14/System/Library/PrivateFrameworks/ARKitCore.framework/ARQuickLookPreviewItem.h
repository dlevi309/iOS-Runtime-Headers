/*
* Generated on Thursday, January 14, 2021 at 2:26:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ARKitCore.framework/ARKitCore
*/

#import <libobjc.A.dylib/QLPreviewItemPrivateProtocol.h>
#import <libobjc.A.dylib/QLPreviewItem.h>

@class NSString, NSURL, UIColor, NSDictionary;

@interface ARQuickLookPreviewItem : NSObject <QLPreviewItemPrivateProtocol, QLPreviewItem> {

	BOOL _allowsContentScaling;
	BOOL _wantsStatusPillHidden;
	BOOL _forceIgnoreMuteSwitch;
	NSURL* _canonicalWebPageURL;
	NSURL* _fileURL;

}

@property (nonatomic,retain) NSURL * fileURL;                                  //@synthesize fileURL=_fileURL - In the implementation block
@property (assign,nonatomic) BOOL wantsStatusPillHidden;                       //@synthesize wantsStatusPillHidden=_wantsStatusPillHidden - In the implementation block
@property (assign,nonatomic) BOOL forceIgnoreMuteSwitch;                       //@synthesize forceIgnoreMuteSwitch=_forceIgnoreMuteSwitch - In the implementation block
@property (nonatomic,retain) NSURL * canonicalWebPageURL;                      //@synthesize canonicalWebPageURL=_canonicalWebPageURL - In the implementation block
@property (assign,nonatomic) BOOL allowsContentScaling;                        //@synthesize allowsContentScaling=_allowsContentScaling - In the implementation block
@property (nonatomic,readonly) NSString * previewItemContentType; 
@property (readonly) NSURL * previewItemURLForDisplay; 
@property (nonatomic,readonly) BOOL isPromisedItem; 
@property (readonly) double autoPlaybackPosition; 
@property (readonly) UIColor * backgroundColorOverride; 
@property (readonly) BOOL wantsDefaultMediaPlayer; 
@property (readonly) NSString * MIMEType; 
@property (nonatomic,copy) NSDictionary * previewOptions; 
@property (nonatomic,readonly) NSURL * previewItemURL; 
@property (nonatomic,readonly) NSString * previewItemTitle; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setFileURL:(NSURL *)arg1 ;
-(id)initWithFileAtURL:(id)arg1 ;
-(void)setCanonicalWebPageURL:(NSURL *)arg1 ;
-(NSURL *)fileURL;
-(NSURL *)previewItemURL;
-(NSDictionary *)previewOptions;
-(void)setWantsStatusPillHidden:(BOOL)arg1 ;
-(void)setForceIgnoreMuteSwitch:(BOOL)arg1 ;
-(NSURL *)canonicalWebPageURL;
-(BOOL)allowsContentScaling;
-(BOOL)wantsStatusPillHidden;
-(BOOL)forceIgnoreMuteSwitch;
-(void)setAllowsContentScaling:(BOOL)arg1 ;
@end

