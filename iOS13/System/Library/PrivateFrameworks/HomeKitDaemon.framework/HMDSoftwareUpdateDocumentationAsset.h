/*
* Generated on Monday, March 1, 2021 at 2:33:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFLogging.h>
#import <libobjc.A.dylib/HMFObject.h>
#import <libobjc.A.dylib/NSURLSessionDownloadDelegate.h>
#import <libobjc.A.dylib/SZExtractorDelegate.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol OS_dispatch_queue;
@class NSUUID, HMSoftwareUpdateDocumentationMetadata, NSObject, NSURLSession, SZExtractor, NSInputStream, NSURL, HMSoftwareUpdateDocumentation, NSString, NSArray;

@interface HMDSoftwareUpdateDocumentationAsset : HMFObject <HMFLogging, HMFObject, NSURLSessionDownloadDelegate, SZExtractorDelegate, NSSecureCoding> {

	BOOL _shouldAutomaticallyCache;
	long long _state;
	NSUUID* _identifier;
	HMSoftwareUpdateDocumentationMetadata* _metadata;
	NSObject*<OS_dispatch_queue> _clientQueue;
	NSObject*<OS_dispatch_queue> _propertyQueue;
	NSURLSession* _URLSession;
	SZExtractor* _extrator;
	NSInputStream* _archivedFileStream;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> clientQueue;              //@synthesize clientQueue=_clientQueue - In the implementation block
@property (readonly) NSObject*<OS_dispatch_queue> propertyQueue;                      //@synthesize propertyQueue=_propertyQueue - In the implementation block
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
+(BOOL)supportsSecureCoding;
+(id)assetWithURL:(id)arg1 ;
+(id)logCategory;
+(id)assetDirectoryURL;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSUUID *)identifier;
-(id)bundleURL;
-(long long)state;
-(NSURL *)URL;
-(NSObject*<OS_dispatch_queue>)propertyQueue;
-(void)setState:(long long)arg1 ;
-(HMSoftwareUpdateDocumentationMetadata *)metadata;
-(void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3 ;
-(void)URLSession:(id)arg1 downloadTask:(id)arg2 didFinishDownloadingToURL:(id)arg3 ;
-(void)URLSession:(id)arg1 downloadTask:(id)arg2 didWriteData:(long long)arg3 totalBytesWritten:(long long)arg4 totalBytesExpectedToWrite:(long long)arg5 ;
-(NSString *)shortDescription;
-(NSObject*<OS_dispatch_queue>)clientQueue;
-(NSString *)propertyDescription;
-(void)cancelDownload;
-(id)logIdentifier;
-(void)setURLSession:(NSURLSession *)arg1 ;
-(NSURLSession *)URLSession;
-(HMSoftwareUpdateDocumentation *)documentation;
-(id)metadataURL;
-(BOOL)saveWithError:(id*)arg1 ;
-(id)archiveURL;
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
-(BOOL)purgeWithError:(id*)arg1 ;
-(void)cancelUnarchive;
-(void)finishUnarchive;
@end

