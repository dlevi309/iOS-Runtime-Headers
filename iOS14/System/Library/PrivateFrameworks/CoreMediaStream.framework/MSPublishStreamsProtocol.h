/*
* Generated on Thursday, January 14, 2021 at 2:26:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
*/

#import <CoreMediaStream/CoreMediaStream-Structs.h>
#import <CoreMediaStream/MSStreamsProtocol.h>

@class NSArray;

@interface MSPublishStreamsProtocol : MSStreamsProtocol {

	MSPSPCContext* _context;
	NSArray* _assetCollectionsInFlight;
	MSPSPCUCContext* _UCContext;

}
-(void)abort;
-(id)delegate;
-(void)setDelegate:(id)arg1 ;
-(void)dealloc;
-(id)initWithPersonID:(id)arg1 baseURL:(id)arg2 ;
-(id)_missingAssetFieldErrorWithFieldName:(id)arg1 ;
-(BOOL)_insertInfoAboutAsset:(id)arg1 intoDictionary:(id)arg2 outError:(id*)arg3 ;
-(void)_resetConnectionVariables;
-(id)_metadataDictForAsset:(id)arg1 outError:(id*)arg2 ;
-(id)_metadataDictForAssetCollection:(id)arg1 outError:(id*)arg2 ;
-(void)sendMetadataForAssetCollections:(id)arg1 ;
-(void)sendUploadCompleteForAssetCollections:(id)arg1 ;
-(void)_coreProtocolDidFinishResponse:(id)arg1 error:(id)arg2 ;
-(void)_coreProtocolDidFailAuthenticationError:(id)arg1 ;
-(void)_coreProtocolDidFinishUCResults:(id)arg1 error:(id)arg2 ;
@end

