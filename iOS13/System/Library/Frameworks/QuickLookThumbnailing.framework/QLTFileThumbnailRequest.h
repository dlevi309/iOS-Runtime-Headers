/*
* Generated on Monday, March 1, 2021 at 2:34:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/QuickLookThumbnailing.framework/QuickLookThumbnailing
*/

#import <QuickLookThumbnailing/QuickLookThumbnailing-Structs.h>
#import <QuickLookThumbnailing/QLTThumbnailRequest.h>

@class FPSandboxingURLWrapper, FPItem, QLCacheBasicVersionedFileIdentifier;

@interface QLTFileThumbnailRequest : QLTThumbnailRequest {

	FPSandboxingURLWrapper* _quicklookSandboxWrapper;
	FPSandboxingURLWrapper* _genericSandboxWrapper;
	FPItem* _item;

}

@property (nonatomic,readonly) FPSandboxingURLWrapper * quicklookSandboxWrapper;                  //@synthesize quicklookSandboxWrapper=_quicklookSandboxWrapper - In the implementation block
@property (nonatomic,readonly) FPSandboxingURLWrapper * genericSandboxWrapper;                    //@synthesize genericSandboxWrapper=_genericSandboxWrapper - In the implementation block
@property (nonatomic,readonly) QLCacheBasicVersionedFileIdentifier * fileIdentifier; 
@property (retain) FPItem * item;                                                                 //@synthesize item=_item - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(FPItem *)item;
-(void)setItem:(FPItem *)arg1 ;
-(id)initWithFileAtURL:(id)arg1 size:(CGSize)arg2 scale:(double)arg3 iconMode:(BOOL)arg4 ;
-(id)initWithFileAtURL:(id)arg1 size:(CGSize)arg2 minimumDimension:(double)arg3 scale:(double)arg4 iconMode:(BOOL)arg5 error:(id*)arg6 ;
-(FPSandboxingURLWrapper *)quicklookSandboxWrapper;
-(FPSandboxingURLWrapper *)genericSandboxWrapper;
-(id)computeContentType;
-(BOOL)shouldProvideFoldedGenericIcon;
-(id)initWithFileAtURL:(id)arg1 size:(CGSize)arg2 minimumDimension:(double)arg3 scale:(double)arg4 iconMode:(BOOL)arg5 error:(id*)arg6 shouldMakeSandboxWrapper:(BOOL)arg7 ;
@end

