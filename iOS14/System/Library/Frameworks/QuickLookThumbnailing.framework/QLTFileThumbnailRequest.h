/*
* Generated on Thursday, January 14, 2021 at 2:27:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(FPItem *)item;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setItem:(FPItem *)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(FPSandboxingURLWrapper *)quicklookSandboxWrapper;
-(FPSandboxingURLWrapper *)genericSandboxWrapper;
-(id)initWithFileAtURL:(id)arg1 size:(CGSize)arg2 scale:(double)arg3 iconMode:(BOOL)arg4 ;
-(id)initWithFileAtURL:(id)arg1 size:(CGSize)arg2 minimumDimension:(double)arg3 scale:(double)arg4 iconMode:(BOOL)arg5 error:(id*)arg6 ;
-(id)computeContentType;
-(BOOL)shouldProvideFoldedGenericIcon;
-(id)initWithFileAtURL:(id)arg1 size:(CGSize)arg2 minimumDimension:(double)arg3 scale:(double)arg4 iconMode:(BOOL)arg5 error:(id*)arg6 shouldMakeSandboxWrapper:(BOOL)arg7 ;
@end

