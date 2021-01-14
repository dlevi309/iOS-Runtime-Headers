/*
* Generated on Thursday, January 14, 2021 at 2:25:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/QuickLookThumbnailingDaemon.framework/QuickLookThumbnailingDaemon
*/


@class NSString, QLCacheFragHandler, NSMutableArray, _QLCacheThread;

@interface QLCacheMMAPBlobDatabase : NSObject {

	NSString* _path;
	QLCacheFragHandler* _fragHandler;
	int _file;
	unsigned long long _maxSize;
	void* _vmFile;
	NSMutableArray* _reservedBuffers;
	_QLCacheThread* _cacheThread;

}

@property (__weak) _QLCacheThread * cacheThread;              //@synthesize cacheThread=_cacheThread - In the implementation block
@property (readonly) unsigned long long maxSize;              //@synthesize maxSize=_maxSize - In the implementation block
@property (readonly) unsigned long long size; 
@property (readonly) float fragmentation; 
-(void)open;
-(void)save;
-(BOOL)isOpen;
-(void)close;
-(unsigned long long)size;
-(BOOL)isValid;
-(unsigned long long)maxSize;
-(void)reset;
-(BOOL)doesExist;
-(_QLCacheThread *)cacheThread;
-(void)setCacheThread:(_QLCacheThread *)arg1 ;
-(id)copyBlobWithInfo:(id)arg1 ;
-(BOOL)deleteBlobWithInfo:(id)arg1 ;
-(id)initWithPath:(id)arg1 cacheSize:(long long)arg2 cacheThread:(id)arg3 ;
-(BOOL)deleteBlobsWithArray:(id)arg1 ;
-(void)compactFragmentation;
-(float)fragmentation;
-(id)cacheHolesOrderedByStart;
-(id)checkConsistency:(id)arg1 ;
-(id)reserveBufferWithLength:(unsigned long long)arg1 ;
-(void*)bufferPointedToByBlobInfo:(id)arg1 ;
-(void)discardReservedBufferWithBlobInfo:(id)arg1 ;
-(void)validateReservedBufferWithBlobInfo:(id)arg1 ;
@end

