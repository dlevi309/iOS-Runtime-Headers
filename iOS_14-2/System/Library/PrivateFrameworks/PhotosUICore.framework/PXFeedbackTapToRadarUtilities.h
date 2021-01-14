/*
* Generated on Thursday, January 14, 2021 at 2:22:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/


@interface PXFeedbackTapToRadarUtilities : NSObject
+(void)fileRadarWithTitle:(id)arg1 description:(id)arg2 classification:(id)arg3 componentID:(id)arg4 componentName:(id)arg5 componentVersion:(id)arg6 keyword:(id)arg7 screenshotURLs:(id)arg8 attachmentURLs:(id)arg9 includeSysDiagnose:(BOOL)arg10 includeInternalRelease:(BOOL)arg11 additionalExtensionIdentifiers:(id)arg12 completionHandler:(/*^block*/id)arg13 ;
+(void)fileRadarWithTitle:(id)arg1 description:(id)arg2 classification:(id)arg3 componentID:(id)arg4 componentName:(id)arg5 componentVersion:(id)arg6 keyword:(id)arg7 attachmentURLs:(id)arg8 includeSysDiagnose:(BOOL)arg9 completionHandler:(/*^block*/id)arg10 ;
+(void)presentTermsAndConditionsForUIViewController:(id)arg1 completion:(/*^block*/id)arg2 ;
+(id)summaryDescription;
+(id)captureScreenshot;
+(id)defaultDescription;
+(id)attachmentURLForDiagnosticDictionaries:(id)arg1 descriptionName:(id)arg2 ;
+(id)alertControllerWithPrivacyMessage:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
+(id)internalReleaseAgreement;
+(id)defaultTitlePrefix;
+(id)_tempDirectoryURL;
+(id)detailedDebugDescriptionFileForAsset:(id)arg1 ;
+(id)originalImageFileForAsset:(id)arg1 ;
@end

