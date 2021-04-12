/*
* Generated on Thursday, January 14, 2021 at 2:21:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/ChatKit-Structs.h>
#import <ChatKit/CKContactMediaObject.h>
#import <libobjc.A.dylib/MKAnnotation.h>

@class NSString;

@interface CKLocationMediaObject : CKContactMediaObject <MKAnnotation> {

	CLLocationCoordinate2D _coordinate;

}

@property (assign,nonatomic) CLLocationCoordinate2D coordinate;              //@synthesize coordinate=_coordinate - In the implementation block
@property (nonatomic,copy,readonly) NSString * title; 
@property (nonatomic,copy,readonly) NSString * subtitle; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)fallbackFilenamePrefix;
+(BOOL)isPreviewable;
+(id)vcardDataFromCLLocation:(id)arg1 ;
+(Class)__ck_attachmentItemClass;
+(id)placeholderPreviewForWidth:(double)arg1 orientation:(char)arg2 ;
+(id)placeholderPreviewCache;
+(id)UTITypes;
-(Class)balloonViewClassForWidth:(double)arg1 orientation:(char)arg2 ;
-(CGSize)bbSize;
-(int)mediaType;
-(CLLocationCoordinate2D)coordinate;
-(id)pasteboardItemProvider;
-(id)rtfDocumentItemsWithFormatString:(id)arg1 selectedTextRange:(NSRange)arg2 ;
-(id)generateThumbnailFillToSize:(CGSize)arg1 contentAlignmentInsets:(UIEdgeInsets)arg2 ;
-(id)bbPreviewFillToSize:(CGSize)arg1 ;
-(Class)previewBalloonViewClass;
-(id)previewCacheKeyWithOrientation:(char)arg1 ;
-(id)previewCachesFileURLWithOrientation:(char)arg1 extension:(id)arg2 generateIntermediaries:(BOOL)arg3 ;
-(id)generatePlaceholderThumbnailForWidth:(double)arg1 orientation:(char)arg2 ;
-(id)generatePlaceholderThumbnailFillToSize:(CGSize)arg1 contentAlignmentInsets:(UIEdgeInsets)arg2 ;
-(id)mapItem;
-(id)transcriptTraitCollection;
-(id)previewForWidth:(double)arg1 orientation:(char)arg2 ;
-(id)metricsCollectorMediaType;
-(void)setCoordinate:(CLLocationCoordinate2D)arg1 ;
-(id)initWithTransfer:(id)arg1 isFromMe:(BOOL)arg2 suppressPreview:(BOOL)arg3 forceInlinePreview:(BOOL)arg4 ;
-(id)vCardURLProperties;
-(BOOL)isDroppedPin;
-(id)previewItemTitle;
-(id)attachmentSummary:(unsigned long long)arg1 ;
-(NSString *)title;
@end

