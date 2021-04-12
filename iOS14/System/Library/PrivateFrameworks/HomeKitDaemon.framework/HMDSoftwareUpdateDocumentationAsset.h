/*
* Generated on Thursday, January 14, 2021 at 2:25:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFLogging.h>
#import <libobjc.A.dylib/HMFObject.h>
#import <libobjc.A.dylib/NSURLSessionDownloadDelegate.h>
#import <libobjc.A.dylib/SZExtractorDelegate.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol HMFLocking, OS_dispatch_queue;
@class NSObject, NSUUID, HMSoftwareUpdateDocumentationMetadata, NSURLSession, SZExtractor, NSInputStream, NSURL, HMSoftwareUpdateDocumentation, NSString, NSArray;

@interface HMDSoftwareUpdateDocumentationAsset : HMFObject <HMFLogging, HMFObject, NSURLSessionDownloadDelegate, SZExtractorDelegate, NSSecureCoding> {

	id<HMFLocking> _lock;
	NSObject*<OS_dispatch_queue> _queue;
	BOOL _shouldAutomaticallyCache;
	long long _state;
	NSUUID* _identifier;
	HMSoftwareUpdateDocumentationMetadata* _metadata;
	NSURLSession* _URLSession;
	SZExtractor* _extrator;
	NSInputStream* _archivedFileStream;

}

@property (nonatomic,retain) NSURLSession * URLSession;                               //@synthesize URLSession=_URLSession - In the implementation block
@property (nonatomic,retain) SZExtractor * extrator;                                  //@synthesize extrator=_extrator - In the implementation block
@property (nonatomic,retain) NSInputStream * archivedFileStream;                      //@synthesize archivedFileStream=_archivedFileStream - In the implementation block
@property (assign) BOOL shouldAutomaticallyCache;                                     //@synthesize shouldAutomaticallyCache=_shouldAutomaticallyCache - In the implementation block
@property (copy,readonly) NSUUID * identifier;                                        //@synthesize identifier=_identifier - In the implementation block
@property (readonly) HMSoftwareUpdateDocumentationMetadata * metadata;                //@synthesize metadata=_metadata - In the implementation block
@property (readonly) long long state;                                                 //@synthesize state=_state - In the implementation block
@property (copy,readonly) NSURL * URL; 
@property (copy,readonly) HMSoftwareUpdateDocumentation * documentation; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (copy,readonly) NSString * shortDescription; 
@property (copy,readonly) NSString * privateDescription; 
@property (copy,readonly) NSString * propertyDescription; 
@property (nonatomic,copy,readonly) NSArray * attributeDescriptions; 
+(id)logCategory;
+(BOOL)supportsSecureCoding;
+(id)assetWithURL:(id)arg1 ;
+(id)assetDirectoryURL;
-(void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3 ;
-(id)bundleURL;
-(void)URLSession:(id)arg1 downloadTask:(id)arg2 didWriteData:(long long)arg3 totalBytesWritten:(long long)arg4 totalBytesExpectedToWrite:(long long)arg5 ;
-(id)init;
-(void)cancelDownload;
-(id)archiveURL;
-(void)setURLSession:(NSURLSession *)arg1 ;
-(NSURLSession *)URLSession;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)shortDescription;
-(BOOL)purgeWithError:(id*)arg1 ;
-(id)logIdentifier;
-(id)metadataURL;
-(void)URLSession:(id)arg1 downloadTask:(id)arg2 didFinishDownloadingToURL:(id)arg3 ;
-(NSURL *)URL;
-(BOOL)saveWithError:(id*)arg1 ;
-(void)setState:(long long)arg1 ;
-(NSString *)propertyDescription;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(long long)state;
-(NSUUID *)identifier;
-(HMSoftwareUpdateDocumentationMetadata *)metadata;
-(HMSoftwareUpdateDocumentation *)documentation;
-(BOOL)isEqual:(id)arg1 ;
-(void)setExtractionProgress:(double)arg1 ;
-(void)startCaching;
-(void)setShouldAutomaticallyCache:(BOOL)arg1 ;
-(void)startDownload;
-(void)startUnarchive;
-(void)setArchivedFileStream:(NSInputStream *)arg1 ;
-(void)setExtrator:(SZExtractor *)arg1 ;
-(NSInputStream *)archivedFileStream;
-(SZExtractor *)extrator;
-(id)initWithDocumentationMetadata:(id)arg1 ;
-(BOOL)shouldAutomaticallyCache;
-(void)finishDownload;
-(void)cancelUnarchive;
-(void)finishUnarchive;
@end

