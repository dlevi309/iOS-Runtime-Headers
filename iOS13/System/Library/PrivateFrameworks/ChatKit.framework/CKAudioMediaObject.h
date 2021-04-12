/*
* Generated on Monday, March 1, 2021 at 2:31:49 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/CKAVMediaObject.h>

@class NSArray;

@interface CKAudioMediaObject : CKAVMediaObject

@property (nonatomic,retain) NSArray * powerLevels; 
+(id)UTITypes;
+(id)attachmentSummary:(unsigned long long)arg1 ;
+(id)fallbackFilenamePrefix;
+(BOOL)shouldUseTranscoderGeneratedPreviewSize;
+(id)_cachedPowerLevelsForKey:(id)arg1 ;
+(void)_cachePowerLevels:(id)arg1 forKey:(id)arg2 ;
+(id)generateThumbnailForWidth:(double)arg1 color:(id)arg2 powerLevels:(id)arg3 fileURL:(id)arg4 ;
+(Class)__ck_attachmentItemClass;
-(int)mediaType;
-(id)previewItemTitle;
-(void)export:(id)arg1 ;
-(void)setPowerLevels:(NSArray *)arg1 ;
-(BOOL)canExport;
-(BOOL)shouldBeQuickLooked;
-(NSArray *)powerLevels;
-(id)waveformForWidth:(double)arg1 orientation:(char)arg2 ;
-(id)previewFilenameExtension;
-(id)savedPreviewFromURL:(id)arg1 forOrientation:(char)arg2 ;
-(id)generateThumbnailForWidth:(double)arg1 orientation:(char)arg2 ;
-(Class)coloredBalloonViewClass;
-(BOOL)isLikeAudioMessage;
-(id)generatePreviewFromThumbnail:(id)arg1 width:(double)arg2 orientation:(char)arg3 ;
-(void)savePreview:(id)arg1 toURL:(id)arg2 forOrientation:(char)arg3 ;
-(id)generatePlaceholderThumbnailForWidth:(double)arg1 ;
-(id)composeWaveformForWidth:(double)arg1 orientation:(char)arg2 ;
@end

