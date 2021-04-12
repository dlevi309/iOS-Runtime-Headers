/*
* Generated on Monday, March 1, 2021 at 2:30:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/

#import <libobjc.A.dylib/PLPTPConversionSupport.h>

@class PHMediaFormatConversionManager, PFMediaCapabilities, NSString;

@interface PLPTPLegacyConversionSupport : NSObject <PLPTPConversionSupport> {

	PHMediaFormatConversionManager* _mediaFormatConversionManager;
	PFMediaCapabilities* _peerMediaCapabilities;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL penultimateIsPublic; 
@property (nonatomic,readonly) BOOL peerSupportsTranscodeChoice; 
@property (nonatomic,readonly) BOOL peerSupportsAdjustmentBaseResources; 
-(id)init;
-(id)conversionResultForAsset:(id)arg1 isVideo:(BOOL)arg2 isRender:(BOOL)arg3 forceLegacyConversion:(BOOL)arg4 ;
-(BOOL)penultimateIsPublic;
-(BOOL)peerSupportsTranscodeChoice;
-(BOOL)peerSupportsAdjustmentBaseResources;
@end

