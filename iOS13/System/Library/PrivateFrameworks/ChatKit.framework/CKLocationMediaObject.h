/*
* Generated on Monday, March 1, 2021 at 2:31:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * title; 
@property (nonatomic,copy,readonly) NSString * subtitle; 
+(id)UTITypes;
+(id)placeholderPreviewCache;
+(id)titleBarMaskImageForWidth:(double)arg1 ;
+(id)attachmentSummary:(unsigned long long)arg1 ;
+(id)fallbackFilenamePrefix;
+(BOOL)isPreviewable;
+(Class)__ck_attachmentItemClass;
+(id)vcardDataFromCLLocation:(id)arg1 ;
+(id)placeholderPreviewForWidth:(double)arg1 orientation:(char)arg2 ;
-(CLLocationCoordinate2D)coordinate;
-(NSString *)title;
-(int)mediaType;
-(void)setCoordinate:(CLLocationCoordinate2D)arg1 ;
-(id)mapItem;
-(id)transcriptTraitCollection;
-(id)previewForWidth:(double)arg1 orientation:(char)arg2 ;
-(id)initWithTransfer:(id)arg1 isFromMe:(BOOL)arg2 suppressPreview:(BOOL)arg3 forceInlinePreview:(BOOL)arg4 ;
-(id)vCardURLProperties;
-(BOOL)isDroppedPin;
-(id)generateThumbnailFillToSize:(CGSize)arg1 contentAlignmentInsets:(UIEdgeInsets)arg2 ;
-(id)bbPreviewFillToSize:(CGSize)arg1 ;
-(CGSize)bbSize;
-(Class)previewBalloonViewClass;
-(id)previewCacheKeyWithOrientation:(char)arg1 ;
-(id)previewCachesFileURLWithOrientation:(char)arg1 extension:(id)arg2 ;
-(id)generatePlaceholderThumbnailForWidth:(double)arg1 orientation:(char)arg2 ;
-(id)generatePlaceholderThumbnailFillToSize:(CGSize)arg1 contentAlignmentInsets:(UIEdgeInsets)arg2 ;
@end

