/*
* Generated on Thursday, January 14, 2021 at 2:21:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/CKAVMediaObject.h>

@class NSArray;

@interface CKAudioMediaObject : CKAVMediaObject

@property (nonatomic,retain) NSArray * powerLevels; 
+(id)fallbackFilenamePrefix;
+(BOOL)shouldUseTranscoderGeneratedPreviewSize;
+(id)_cachedPowerLevelsForKey:(id)arg1 ;
+(void)_cachePowerLevels:(id)arg1 forKey:(id)arg2 ;
+(id)generateThumbnailForWidth:(double)arg1 color:(id)arg2 powerLevels:(id)arg3 fileURL:(id)arg4 ;
+(Class)__ck_attachmentItemClass;
+(id)UTITypes;
-(void)export:(id)arg1 ;
-(id)waveformForWidth:(double)arg1 orientation:(char)arg2 ;
-(int)mediaType;
-(id)previewFilenameExtension;
-(id)savedPreviewFromURL:(id)arg1 forOrientation:(char)arg2 ;
-(id)generateThumbnailForWidth:(double)arg1 orientation:(char)arg2 ;
-(Class)coloredBalloonViewClass;
-(BOOL)isLikeAudioMessage;
-(id)generatePreviewFromThumbnail:(id)arg1 width:(double)arg2 orientation:(char)arg3 ;
-(void)savePreview:(id)arg1 toURL:(id)arg2 forOrientation:(char)arg3 ;
-(id)generatePlaceholderThumbnailForWidth:(double)arg1 ;
-(id)composeWaveformForWidth:(double)arg1 orientation:(char)arg2 ;
-(BOOL)canExport;
-(id)metricsCollectorMediaType;
-(BOOL)shouldBeQuickLooked;
-(id)previewItemTitle;
-(id)attachmentSummary:(unsigned long long)arg1 ;
-(NSArray *)powerLevels;
-(void)setPowerLevels:(NSArray *)arg1 ;
@end

