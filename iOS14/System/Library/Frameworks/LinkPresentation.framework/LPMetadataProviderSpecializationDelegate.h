/*
* Generated on Thursday, January 14, 2021 at 2:22:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
*/


@protocol LPMetadataProviderSpecializationDelegate <NSObject>
@optional
-(void)metadataProviderSpecialization:(id)arg1 didFetchPreliminaryMetadata:(id)arg2;

@required
-(void)metadataProviderSpecializationDidFail:(id)arg1;
-(void)metadataProviderSpecialization:(id)arg1 didCompleteWithMetadata:(id)arg2;

@end

