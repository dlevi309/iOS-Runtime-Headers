/*
* Generated on Monday, March 1, 2021 at 2:33:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/


@protocol OS_dispatch_queue, TSPDataStorage;
#import <TSReading/TSReading-Structs.h>
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
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)type;
-(id<TSPDataStorage>)storage;
-(long long)identifier;
-(BOOL)writeToURL:(id)arg1 error:(id*)arg2 ;
-(TSPObjectContext *)context;
-(id)preferredFilename;
-(NSString *)filename;
-(void)setStorage:(id<TSPDataStorage>)arg1 ;
-(NSString *)uniqueName;
-(unsigned long long)encodedLength;
-(BOOL)isReadable;
-(id)bookmarkData;
-(BOOL)needsDownload;
-(const array<unsigned char, 20>*)digest;
-(CGImageRef)newCGImage;
-(unsigned char)packageIdentifier;
-(id)copyWithContext:(id)arg1 ;
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
-(id)NSData;
-(id)AVAsset;
-(BOOL)isExternalData;
-(void)performInputStreamReadWithAccessor:(/*^block*/id)arg1 ;
-(void)addDownloadObserver:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)isStorageInPackage:(id)arg1 ;
@end

