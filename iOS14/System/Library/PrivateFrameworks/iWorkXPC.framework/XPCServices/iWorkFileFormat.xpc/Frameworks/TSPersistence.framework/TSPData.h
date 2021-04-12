/*
* Generated on Thursday, January 14, 2021 at 2:28:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iWorkXPC.framework/XPCServices/iWorkFileFormat.xpc/Frameworks/TSPersistence.framework/TSPersistence
*/


@protocol OS_dispatch_queue, TSPDataStorage;
#import <TSPersistence/TSPersistence-Structs.h>
@class NSObject, NSString, TSPDataManager, TSPObjectContext;

@interface TSPData : NSObject {

	int _didCull;
	long long _identifier;
	NSObject*<OS_dispatch_queue> _accessQueue;
	id<TSPDataStorage> _storage;
	NSString* _filename;
	TSPDataManager* _manager;
	array<unsigned char, 20> _digest;
	BOOL _isDeallocating;

}

@property (nonatomic,readonly) long long identifier;                            //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) id<TSPDataStorage> storage; 
@property (nonatomic,readonly) NSString * filename; 
@property (nonatomic,readonly) NSString * type; 
@property (nonatomic,readonly) BOOL isReadable; 
@property (nonatomic,readonly) BOOL isApplicationData; 
@property (nonatomic,readonly) BOOL isExternalData; 
@property (nonatomic,readonly) NSString * documentResourceLocator; 
@property (nonatomic,readonly) NSString * packageLocator; 
@property (nonatomic,readonly) unsigned char packageIdentifier; 
@property (nonatomic,readonly) TSPObjectContext * context; 
@property (nonatomic,readonly) NSString * uniqueName; 
@property (nonatomic,readonly) BOOL needsDownload; 
@property (nonatomic,readonly) unsigned long long encodedLength; 
+(id)null;
+(id)dataFromReadChannel:(id)arg1 filename:(id)arg2 context:(id)arg3 ;
+(id)dataFromURL:(id)arg1 useExternalReferenceIfAllowed:(BOOL)arg2 context:(id)arg3 ;
+(id)dataFromURL:(id)arg1 useExternalReferenceIfAllowed:(BOOL)arg2 useFileCoordination:(BOOL)arg3 context:(id)arg4 ;
+(id)cullingListenersQueue;
+(id)cullingListeners;
+(id)requiredAVAssetOptions;
+(id)dataFromURL:(id)arg1 context:(id)arg2 ;
+(id)dataFromNSData:(id)arg1 filename:(id)arg2 context:(id)arg3 ;
+(id)dataFromDataRep:(id)arg1 filename:(id)arg2 context:(id)arg3 ;
+(id)readOnlyDataFromURL:(id)arg1 context:(id)arg2 ;
+(id)readOnlyDataFromNSData:(id)arg1 filename:(id)arg2 context:(id)arg3 ;
+(id)readOnlyDataFromDataRep:(id)arg1 filename:(id)arg2 context:(id)arg3 ;
+(id)readOnlyDataWithoutDataDigestFromURL:(id)arg1 context:(id)arg2 ;
+(void)addCullingListener:(id)arg1 ;
+(void)removeCullingListener:(id)arg1 ;
+(BOOL)updateDigest:(array<unsigned char, 20>*)arg1 withProtobufString:(const basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*)arg2 ;
-(BOOL)writeToURL:(id)arg1 error:(id*)arg2 ;
-(void)setStorage:(id<TSPDataStorage>)arg1 ;
-(BOOL)isReadable;
-(unsigned long long)encodedLength;
-(NSString *)uniqueName;
-(id<TSPDataStorage>)storage;
-(NSString *)filename;
-(id)bookmarkData;
-(TSPObjectContext *)context;
-(unsigned char)packageIdentifier;
-(id)description;
-(id)NSData;
-(id)preferredFilename;
-(NSString *)type;
-(unsigned long long)hash;
-(long long)identifier;
-(BOOL)needsDownload;
-(const array<unsigned char, 20>*)digest;
-(id)copyWithContext:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(id)AVAsset;
-(CGImageRef)newCGImage;
-(NSString *)packageLocator;
-(void)willCull;
-(void)performIOChannelReadWithAccessor:(/*^block*/id)arg1 ;
-(void)setFilename:(id)arg1 storage:(id)arg2 ;
-(id)initWithIdentifier:(long long)arg1 digest:(const array<unsigned char, 20>*)arg2 filename:(id)arg3 storage:(id)arg4 manager:(id)arg5 ;
-(BOOL)isApplicationData;
-(CGDataProviderRef)newCGDataProvider;
-(CGImageSourceRef)newCGImageSource;
-(id)AVAssetWithOptions:(id)arg1 ;
-(BOOL)isLengthLikelyToBeGreaterThan:(unsigned long long)arg1 ;
-(NSString *)documentResourceLocator;
-(BOOL)isExternalData;
-(void)performInputStreamReadWithAccessor:(/*^block*/id)arg1 ;
-(void)addDownloadObserver:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)isStorageInPackage:(id)arg1 ;
@end

