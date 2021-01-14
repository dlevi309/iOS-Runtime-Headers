/*
* Generated on Thursday, January 14, 2021 at 2:22:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/

#import <libobjc.A.dylib/PLVideoResource.h>

@class PLInternalResource, NSString;

@interface PLVideoInternalResource : NSObject <PLVideoResource> {

	PLInternalResource* _backingResource;

}

@property (nonatomic,readonly) PLInternalResource * backingResource;              //@synthesize backingResource=_backingResource - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)deviceSupportsHDR;
-(BOOL)isPlayable;
-(id)fileURLIfLocal;
-(BOOL)isLocallyGeneratable;
-(BOOL)isDerivative;
-(BOOL)isMediumHighQuality;
-(BOOL)isOriginalVideo;
-(id)uniformTypeIdentifier;
-(BOOL)isOriginalVideoComplement;
-(BOOL)matchesOrExceedsQualityLevel:(unsigned)arg1 ;
-(id)initWithBackingResource:(id)arg1 ;
-(BOOL)isDownloadable;
-(BOOL)isStreamable;
-(BOOL)isHDROrSDRDependingOnMasterVideo;
-(BOOL)isSDRFallback;
-(BOOL)isHDRDerivative;
-(BOOL)hasAssociatedMediaMetadata;
-(PLInternalResource *)backingResource;
-(BOOL)isLocallyAvailable;
-(unsigned)version;
-(BOOL)isEqual:(id)arg1 ;
@end

