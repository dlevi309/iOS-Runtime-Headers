/*
* Generated on Thursday, January 14, 2021 at 2:21:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/CKMediaObject.h>

@class LPLinkMetadata;

@interface CKWatchfaceMediaObject : CKMediaObject {

	char _cachedOrientation;
	LPLinkMetadata* _linkMetadata;
	double _cachedWidth;

}

@property (nonatomic,retain) LPLinkMetadata * linkMetadata;              //@synthesize linkMetadata=_linkMetadata - In the implementation block
@property (assign,nonatomic) double cachedWidth;                         //@synthesize cachedWidth=_cachedWidth - In the implementation block
@property (assign,nonatomic) char cachedOrientation;                     //@synthesize cachedOrientation=_cachedOrientation - In the implementation block
+(BOOL)isPreviewable;
+(BOOL)shouldUseTranscoderGeneratedPreviewSize;
+(id)UTITypes;
+(BOOL)canGeneratePreviewInMVSHostProcess;
-(double)cachedWidth;
-(id)linkMetadataForWidth:(double)arg1 orientation:(char)arg2 ;
-(int)mediaType;
-(BOOL)generatePreviewOutOfProcess;
-(id)generateThumbnailForWidth:(double)arg1 orientation:(char)arg2 ;
-(Class)previewBalloonViewClass;
-(id)generatePreviewFromThumbnail:(id)arg1 width:(double)arg2 orientation:(char)arg3 ;
-(char)cachedOrientation;
-(void)setCachedWidth:(double)arg1 ;
-(BOOL)hasOutOfProcessPreviewGenerator;
-(BOOL)_isCachedFileLocationValid;
-(void)setCachedOrientation:(char)arg1 ;
-(id)metricsCollectorMediaType;
-(LPLinkMetadata *)linkMetadata;
-(void)setLinkMetadata:(LPLinkMetadata *)arg1 ;
-(id)attachmentSummary:(unsigned long long)arg1 ;
@end

