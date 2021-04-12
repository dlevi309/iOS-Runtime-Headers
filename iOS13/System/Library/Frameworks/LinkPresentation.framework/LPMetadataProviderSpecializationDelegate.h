/*
* Generated on Monday, March 1, 2021 at 2:31:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
*/


@protocol LPMetadataProviderSpecializationDelegate <NSObject>
@optional
-(void)metadataProviderSpecialization:(id)arg1 didFetchPreliminaryMetadata:(id)arg2;

@required
-(void)metadataProviderSpecializationDidFail:(id)arg1;
-(void)metadataProviderSpecialization:(id)arg1 didCompleteWithMetadata:(id)arg2;

@end

