/*
* Generated on Monday, March 1, 2021 at 2:34:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaConversionService.framework/MediaConversionService
*/

#import <MediaConversionService/MediaConversionService-Structs.h>
#import <libobjc.A.dylib/NSProgressReporting.h>

@class NSProgress, NSString, NSError, PHMediaFormatConversionDestination, NSUUID, PHMediaFormatConversionSource, PFMediaCapabilities, PHMediaFormatConversionCompositeRequest, NSURL;

@interface PHMediaFormatConversionRequest : NSObject <NSProgressReporting> {

	double _formatConversionExpansionFactor;
	BOOL _forceFormatConversion;
	BOOL _shouldPadOutputFileToEstimatedLength;
	BOOL _shouldStripLocation;
	BOOL _useTransferBehaviorUserPreference;
	BOOL _requiresSinglePassVideoConversion;
	BOOL _preflighted;
	long long _livePhotoPairingIdentifierBehavior;
	NSString* _livePhotoPairingIdentifier;
	long long _status;
	NSProgress* _progress;
	NSError* _error;
	NSString* _outputFilename;
	PHMediaFormatConversionDestination* _destination;
	id _userInfo;
	NSUUID* _identifier;
	PHMediaFormatConversionSource* _source;
	PFMediaCapabilities* _destinationCapabilities;
	PHMediaFormatConversionCompositeRequest* _parentRequest;
	NSURL* _directoryForTemporaryFiles;
	long long _transferBehaviorUserPreference;
	/*^block*/id _singlePassVideoConversionUpdateHandler;
	long long _passthroughConversionAdditionalByteCount;

}

@property (readonly) NSUUID * identifier;                                                     //@synthesize identifier=_identifier - In the implementation block
@property (retain) PHMediaFormatConversionSource * source;                                    //@synthesize source=_source - In the implementation block
@property (retain) PFMediaCapabilities * destinationCapabilities;                             //@synthesize destinationCapabilities=_destinationCapabilities - In the implementation block
@property (__weak) PHMediaFormatConversionCompositeRequest * parentRequest;                   //@synthesize parentRequest=_parentRequest - In the implementation block
@property (readonly) NSString * statusString; 
@property (readonly) BOOL requiresFormatConversion; 
@property (readonly) BOOL requiresPassthroughConversion; 
@property (readonly) BOOL requiresMetadataChanges; 
@property (readonly) BOOL isCompositeRequest; 
@property (retain) NSProgress * progress;                                                     //@synthesize progress=_progress - In the implementation block
@property (retain) NSURL * directoryForTemporaryFiles;                                        //@synthesize directoryForTemporaryFiles=_directoryForTemporaryFiles - In the implementation block
@property (assign) long long transferBehaviorUserPreference;                                  //@synthesize transferBehaviorUserPreference=_transferBehaviorUserPreference - In the implementation block
@property (copy) id singlePassVideoConversionUpdateHandler;                                   //@synthesize singlePassVideoConversionUpdateHandler=_singlePassVideoConversionUpdateHandler - In the implementation block
@property (assign) BOOL requiresSinglePassVideoConversion;                                    //@synthesize requiresSinglePassVideoConversion=_requiresSinglePassVideoConversion - In the implementation block
@property (assign,nonatomic) double formatConversionExpansionFactor; 
@property (assign,nonatomic) long long passthroughConversionAdditionalByteCount;              //@synthesize passthroughConversionAdditionalByteCount=_passthroughConversionAdditionalByteCount - In the implementation block
@property (assign) long long status;                                                          //@synthesize status=_status - In the implementation block
@property (assign) BOOL preflighted;                                                          //@synthesize preflighted=_preflighted - In the implementation block
@property (retain) NSError * error;                                                           //@synthesize error=_error - In the implementation block
@property (retain) PHMediaFormatConversionDestination * destination;                          //@synthesize destination=_destination - In the implementation block
@property (readonly) long long backwardsCompatibilityStatus; 
@property (readonly) unsigned long long estimatedOutputFileLength; 
@property (assign) long long livePhotoPairingIdentifierBehavior;                              //@synthesize livePhotoPairingIdentifierBehavior=_livePhotoPairingIdentifierBehavior - In the implementation block
@property (copy) NSString * livePhotoPairingIdentifier;                                       //@synthesize livePhotoPairingIdentifier=_livePhotoPairingIdentifier - In the implementation block
@property (assign) BOOL forceFormatConversion;                                                //@synthesize forceFormatConversion=_forceFormatConversion - In the implementation block
@property (assign) BOOL shouldPadOutputFileToEstimatedLength;                                 //@synthesize shouldPadOutputFileToEstimatedLength=_shouldPadOutputFileToEstimatedLength - In the implementation block
@property (assign) BOOL shouldStripLocation;                                                  //@synthesize shouldStripLocation=_shouldStripLocation - In the implementation block
@property (retain) NSString * outputFilename;                                                 //@synthesize outputFilename=_outputFilename - In the implementation block
@property (readonly) NSString * outputPathExtension; 
@property (readonly) NSString * outputFileType; 
@property (assign) BOOL useTransferBehaviorUserPreference;                                    //@synthesize useTransferBehaviorUserPreference=_useTransferBehaviorUserPreference - In the implementation block
@property (retain) id userInfo;                                                               //@synthesize userInfo=_userInfo - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)requestForSource:(id)arg1 destinationCapabilities:(id)arg2 error:(id*)arg3 ;
+(double)heifToJPEGFactorWithImageDimensions:(CGSize)arg1 fileLength:(unsigned long long)arg2 ;
+(id)stringForRequestStatus:(long long)arg1 ;
+(double)bitsPerPixelWithImageDimensions:(CGSize)arg1 fileLength:(unsigned long long)arg2 ;
+(double)heifToJPEGFactorForBitsPerPixel:(double)arg1 ;
-(id)init;
-(NSString *)description;
-(id)userInfo;
-(void)setSource:(PHMediaFormatConversionSource *)arg1 ;
-(NSUUID *)identifier;
-(PHMediaFormatConversionSource *)source;
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
-(NSProgress *)progress;
-(void)setUserInfo:(id)arg1 ;
-(long long)status;
-(PHMediaFormatConversionDestination *)destination;
-(void)setDestination:(PHMediaFormatConversionDestination *)arg1 ;
-(void)setStatus:(long long)arg1 ;
-(void)setProgress:(NSProgress *)arg1 ;
-(PHMediaFormatConversionCompositeRequest *)parentRequest;
-(NSString *)statusString;
-(NSURL *)directoryForTemporaryFiles;
-(void)setDirectoryForTemporaryFiles:(NSURL *)arg1 ;
-(NSString *)outputFileType;
-(void)markAsCancelled;
-(unsigned long long)estimatedOutputFileLength;
-(void)enableSinglePassVideoEncodingWithUpdateHandler:(/*^block*/id)arg1 ;
-(void)setOutputFilename:(NSString *)arg1 ;
-(void)setUseTransferBehaviorUserPreference:(BOOL)arg1 ;
-(void)setShouldPadOutputFileToEstimatedLength:(BOOL)arg1 ;
-(NSString *)outputPathExtension;
-(long long)backwardsCompatibilityStatus;
-(void)setLivePhotoPairingIdentifierBehavior:(long long)arg1 ;
-(void)setLivePhotoPairingIdentifier:(NSString *)arg1 ;
-(BOOL)requiresSinglePassVideoConversion;
-(void)setForceFormatConversion:(BOOL)arg1 ;
-(BOOL)shouldStripLocation;
-(void)setShouldStripLocation:(BOOL)arg1 ;
-(NSString *)outputFilename;
-(NSString *)livePhotoPairingIdentifier;
-(BOOL)prepareWithError:(id*)arg1 ;
-(BOOL)preflighted;
-(void)setPreflighted:(BOOL)arg1 ;
-(BOOL)isCompositeRequest;
-(void)setupProgress;
-(void)preflightWithConversionManager:(id)arg1 ;
-(BOOL)requiresPassthroughConversion;
-(BOOL)requiresMetadataChanges;
-(BOOL)requiresLivePhotoPairingIdentifierChange;
-(BOOL)requiresLocationMetadataChange;
-(BOOL)requiresFormatConversion;
-(BOOL)userPreferenceProhibitsFormatConversion;
-(void)setFormatConversionExpansionFactor:(double)arg1 ;
-(double)formatConversionExpansionFactor;
-(long long)passthroughConversionAdditionalByteCount;
-(void)padOutputFileToEstimatedLength;
-(void)didFinishProcessing;
-(void)updateSinglePassVideoConversionStatus:(long long)arg1 addedRange:(NSRange)arg2 error:(id)arg3 ;
-(long long)livePhotoPairingIdentifierBehavior;
-(BOOL)forceFormatConversion;
-(BOOL)shouldPadOutputFileToEstimatedLength;
-(BOOL)useTransferBehaviorUserPreference;
-(PFMediaCapabilities *)destinationCapabilities;
-(void)setDestinationCapabilities:(PFMediaCapabilities *)arg1 ;
-(void)setParentRequest:(PHMediaFormatConversionCompositeRequest *)arg1 ;
-(long long)transferBehaviorUserPreference;
-(void)setTransferBehaviorUserPreference:(long long)arg1 ;
-(id)singlePassVideoConversionUpdateHandler;
-(void)setSinglePassVideoConversionUpdateHandler:(id)arg1 ;
-(void)setRequiresSinglePassVideoConversion:(BOOL)arg1 ;
-(void)setPassthroughConversionAdditionalByteCount:(long long)arg1 ;
@end

