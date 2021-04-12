/*
* Generated on Monday, March 1, 2021 at 2:32:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/InstallCoordination.framework/InstallCoordination
*/

#import <InstallCoordination/IXOpaqueDataPromise.h>
#import <libobjc.A.dylib/SZExtractorDelegate.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/SZExtractor.h>

@protocol SZExtractorDelegate;
@class SZExtractor, IXPromisedOutOfBandStreamingZipTransferSeed, NSURL, NSString;

@interface IXPromisedOutOfBandStreamingZipTransfer : IXOpaqueDataPromise <SZExtractorDelegate, NSSecureCoding, SZExtractor> {

	id<SZExtractorDelegate> _extractorDelegate;
	SZExtractor* _extractor;

}

@property (nonatomic,retain) IXPromisedOutOfBandStreamingZipTransferSeed * seed; 
@property (assign,getter=isComplete,nonatomic) BOOL complete; 
@property (assign,nonatomic) unsigned long long archiveBytesConsumed; 
@property (nonatomic,retain) SZExtractor * extractor;                                         //@synthesize extractor=_extractor - In the implementation block
@property (nonatomic,readonly) NSURL * extractionPath; 
@property (assign,nonatomic,__weak) id<SZExtractorDelegate> extractorDelegate;                //@synthesize extractorDelegate=_extractorDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL doesConsumeExtractedData; 
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)supplyBytes:(id)arg1 withCompletionBlock:(/*^block*/id)arg2 ;
-(void)finishStreamWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)prepareForExtractionToPath:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)suspendStreamWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)terminateStreamWithError:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(BOOL)doesConsumeExtractedData;
-(id)initWithSeed:(id)arg1 ;
-(Class)seedClass;
-(unsigned long long)archiveBytesConsumed;
-(void)setArchiveBytesConsumed:(unsigned long long)arg1 ;
-(void)resetWithCompletion:(/*^block*/id)arg1 ;
-(NSURL *)extractionPath;
-(void)setExtractor:(SZExtractor *)arg1 ;
-(SZExtractor *)extractor;
-(void)setExtractorDelegate:(id<SZExtractorDelegate>)arg1 ;
-(void)setExtractionProgress:(double)arg1 ;
-(void)extractionCompleteAtArchivePath:(id)arg1 ;
-(void)extractionEnteredPassThroughMode;
-(id<SZExtractorDelegate>)extractorDelegate;
-(void)prepareForExtraction:(/*^block*/id)arg1 ;
-(BOOL)consumeExtractedDataIfNeeded;
-(id)initWithName:(id)arg1 client:(unsigned long long)arg2 streamingZipOptions:(id)arg3 archiveSize:(unsigned long long)arg4 diskSpaceNeeded:(unsigned long long)arg5 ;
-(void)addBytesTransferred:(unsigned long long)arg1 ;
@end

