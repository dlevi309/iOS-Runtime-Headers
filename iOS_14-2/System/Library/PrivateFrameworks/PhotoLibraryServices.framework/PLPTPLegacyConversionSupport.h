/*
* Generated on Thursday, January 14, 2021 at 2:22:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/

#import <libobjc.A.dylib/PLPTPConversionSupport.h>

@class PHMediaFormatConversionManager, PFMediaCapabilities, NSString;

@interface PLPTPLegacyConversionSupport : NSObject <PLPTPConversionSupport> {

	PHMediaFormatConversionManager* _mediaFormatConversionManager;
	PFMediaCapabilities* _peerMediaCapabilities;

}

@property (nonatomic,readonly) BOOL penultimateIsPublic; 
@property (nonatomic,readonly) BOOL peerSupportsTranscodeChoice; 
@property (nonatomic,readonly) BOOL peerSupportsAdjustmentBaseResources; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id)conversionResultForAsset:(id)arg1 isVideo:(BOOL)arg2 isRender:(BOOL)arg3 forceLegacyConversion:(BOOL)arg4 ;
-(BOOL)penultimateIsPublic;
-(BOOL)peerSupportsTranscodeChoice;
-(BOOL)peerSupportsAdjustmentBaseResources;
@end

