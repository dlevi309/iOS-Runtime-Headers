/*
* Generated on Thursday, January 14, 2021 at 2:28:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TVPlayback.framework/TVPlayback
*/


@protocol TVPSecureKeyLoaderDelegate <NSObject>
@optional
-(void)secureKeyLoader:(id)arg1 didReceiveUpdatedRentalPlaybackStartDate:(id)arg2;
-(void)secureKeyLoader:(id)arg1 didReceiveUpdatedRentalExpirationDate:(id)arg2 playbackStartDate:(id)arg3;

@required
-(void)secureKeyLoader:(id)arg1 didLoadKeyResponseData:(id)arg2 renewalDate:(id)arg3 forRequest:(id)arg4;
-(void)secureKeyLoader:(id)arg1 didFailWithError:(id)arg2 forRequest:(id)arg3;
-(void)secureKeyLoader:(id)arg1 didLoadCertificateData:(id)arg2 forRequest:(id)arg3;
-(void)secureKeyLoader:(id)arg1 didLoadContentIdentifierData:(id)arg2 forRequest:(id)arg3;
-(void)secureKeyLoader:(id)arg1 didReceiveUpdatedRentalExpirationDate:(id)arg2;

@end

