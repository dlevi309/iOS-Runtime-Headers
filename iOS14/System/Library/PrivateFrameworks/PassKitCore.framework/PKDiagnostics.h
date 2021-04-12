/*
* Generated on Thursday, January 14, 2021 at 2:21:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/


@interface PKDiagnostics : NSObject
+(id)_allPasses;
+(id)_secureElementData;
+(id)_metadataForCardAtURL:(id)arg1 ;
+(void)_createDiagnosticJsonWithDictionary:(id)arg1 hasLibrary:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
+(void)generateDiagnosticsPackageWithPassLibrary:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
+(void)generateZippedDiagnosticsPackageWithPassLibrary:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
+(id)generateUbiquityDiagnosticsFile:(BOOL)arg1 ;
+(void)saveTransitState:(id)arg1 forPaymentApplication:(id)arg2 ;
@end

