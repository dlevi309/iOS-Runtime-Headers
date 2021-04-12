/*
* Generated on Monday, March 1, 2021 at 2:31:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/


@interface PKDiagnostics : NSObject
+(id)_allPasses;
+(id)_secureElementData;
+(void)generateDiagnosticsPackageWithPassLibrary:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
+(id)_metadataForCardAtURL:(id)arg1 ;
+(void)generateZippedDiagnosticsPackageWithPassLibrary:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
+(id)generateUbiquityDiagnosticsFile:(BOOL)arg1 ;
+(void)saveTransitState:(id)arg1 forPaymentApplication:(id)arg2 ;
@end

