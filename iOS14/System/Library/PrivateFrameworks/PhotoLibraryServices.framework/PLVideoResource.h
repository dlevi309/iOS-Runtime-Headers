/*
* Generated on Thursday, January 14, 2021 at 2:22:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/


@protocol PLVideoResource <NSObject>
@required
+(BOOL)deviceSupportsHDR;
-(BOOL)isPlayable;
-(id)fileURLIfLocal;
-(BOOL)isLocallyGeneratable;
-(BOOL)isDerivative;
-(BOOL)isMediumHighQuality;
-(BOOL)isOriginalVideo;
-(id)uniformTypeIdentifier;
-(BOOL)isOriginalVideoComplement;
-(BOOL)matchesOrExceedsQualityLevel:(unsigned)arg1;
-(BOOL)isDownloadable;
-(BOOL)isStreamable;
-(BOOL)isHDROrSDRDependingOnMasterVideo;
-(BOOL)isSDRFallback;
-(BOOL)isHDRDerivative;
-(BOOL)hasAssociatedMediaMetadata;
-(BOOL)isLocallyAvailable;
-(unsigned)version;

@end

