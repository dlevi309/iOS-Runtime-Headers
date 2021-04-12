/*
* Generated on Monday, March 1, 2021 at 2:34:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/QuickLookThumbnailing.framework/QuickLookThumbnailing
*/

#import <QuickLookThumbnailing/QuickLookThumbnailing-Structs.h>
#import <QuickLookThumbnailing/QLTThumbnailRequest.h>

@class FPItem, QLCacheFileProviderVersionedFileIdentifier;

@interface QLTUbiquitousFileThumbnailRequest : QLTThumbnailRequest {

	FPItem* _item;

}

@property (readonly) FPItem * item;                                                            //@synthesize item=_item - In the implementation block
@property (readonly) QLCacheFileProviderVersionedFileIdentifier * fileIdentifier; 
+(BOOL)supportsSecureCoding;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(FPItem *)item;
-(id)initWithFPItem:(id)arg1 size:(CGSize)arg2 minimumDimension:(double)arg3 scale:(double)arg4 iconMode:(BOOL)arg5 ;
-(id)computeContentType;
-(BOOL)shouldProvideFoldedGenericIcon;
@end

