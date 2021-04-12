/*
* Generated on Monday, March 1, 2021 at 2:30:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/


@protocol PLVideoResource <NSObject>
@required
-(BOOL)isPlayable;
-(BOOL)isLocallyAvailable;
-(BOOL)isLocallyGeneratable;
-(BOOL)isStreamable;
-(BOOL)isRemotelyAvailable;
-(BOOL)isMediumHighQuality;
-(BOOL)isOriginalVideoComplement;
-(BOOL)matchesOrExceedsQualityLevel:(unsigned)arg1;
-(id)fileURLIfLocal;

@end

