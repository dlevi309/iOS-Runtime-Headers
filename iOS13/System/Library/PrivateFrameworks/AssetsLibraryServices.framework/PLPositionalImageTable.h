/*
* Generated on Monday, March 1, 2021 at 2:32:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AssetsLibraryServices.framework/AssetsLibraryServices
*/

#import <AssetsLibraryServices/AssetsLibraryServices-Structs.h>
#import <libobjc.A.dylib/PLThumbPersistenceManager.h>

@class NSString, PLImageFormat;

@interface PLPositionalImageTable : NSObject <PLThumbPersistenceManager> {

	tagPLImageTableMemoryPool* _pool;
	os_unfair_lock_s _expansionLock;
	BOOL _isReadOnly;
	BOOL _flushAfterWrite;
	BOOL _formatIsCropped;
	BOOL _readOnly;
	int _formatSideLen;
	int _descriptor;
	NSString* _path;
	unsigned long long _entryLength;
	PLImageFormat* _format;
	long long _entryCapacity;

}

@property (assign,nonatomic) int descriptor;                                 //@synthesize descriptor=_descriptor - In the implementation block
@property (assign,nonatomic) long long entryCapacity;                        //@synthesize entryCapacity=_entryCapacity - In the implementation block
@property (assign,nonatomic) BOOL formatIsCropped;                           //@synthesize formatIsCropped=_formatIsCropped - In the implementation block
@property (assign,nonatomic) int formatSideLen;                              //@synthesize formatSideLen=_formatSideLen - In the implementation block
@property (assign,nonatomic) unsigned long long entryLength;                 //@synthesize entryLength=_entryLength - In the implementation block
@property (assign,nonatomic) BOOL flushAfterWrite;                           //@synthesize flushAfterWrite=_flushAfterWrite - In the implementation block
@property (getter=isReadOnly,nonatomic,readonly) BOOL readOnly;              //@synthesize readOnly=_readOnly - In the implementation block
@property (nonatomic,readonly) PLImageFormat * format;                       //@synthesize format=_format - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * path;                              //@synthesize path=_path - In the implementation block
@property (nonatomic,readonly) BOOL isReadOnly;                              //@synthesize isReadOnly=_isReadOnly - In the implementation block
-(void)dealloc;
-(NSString *)path;
-(PLImageFormat *)format;
-(int)descriptor;
-(void)flush;
-(void)setDescriptor:(int)arg1 ;
-(BOOL)isReadOnly;
-(BOOL)isReadOnly;
-(id)_debugDescription;
-(id)beginThumbnailSafePropertyUpdatesOnAssetThumbnailIdentifier:(id)arg1 ;
-(void)endThumbnailSafePropertyUpdatesOnAssetThumbnailIdentifier:(id)arg1 withToken:(id)arg2 ;
-(BOOL)validateData:(id)arg1 withToken:(id)arg2 ;
-(id)imageDataWithIdentifier:(id)arg1 orIndex:(unsigned long long)arg2 width:(int*)arg3 height:(int*)arg4 bytesPerRow:(int*)arg5 dataWidth:(int*)arg6 dataHeight:(int*)arg7 dataOffset:(int*)arg8 ;
-(BOOL)usesThumbIdentifiers;
-(long long)fileLength;
-(void)preheatDataForThumbnailIndexes:(id)arg1 ;
-(void)deleteEntryWithIdentifier:(id)arg1 orIndex:(unsigned long long)arg2 uuid:(id)arg3 ;
-(BOOL)writeEntryData:(id)arg1 toIndex:(unsigned long long)arg2 ;
-(int)formatSideLen;
-(unsigned long long)entryLength;
-(CGImageRef)createImageWithIdentifier:(id)arg1 orIndex:(unsigned long long)arg2 decodeSession:(void*)arg3 ;
-(id)initWithPath:(id)arg1 readOnly:(BOOL)arg2 format:(id)arg3 ;
-(BOOL)formatIsCropped;
-(void)touchEntriesInRange:(NSRange)arg1 ;
-(BOOL)_increaseEntryCapacityIfNeededToStoreIndex:(long long)arg1 ;
-(BOOL)_setEntryCapacity:(long long)arg1 ;
-(BOOL)flushAfterWrite;
-(void)setFlushAfterWrite:(BOOL)arg1 ;
-(void)setEntryLength:(unsigned long long)arg1 ;
-(void)setFormatSideLen:(int)arg1 ;
-(void)setFormatIsCropped:(BOOL)arg1 ;
-(long long)entryCapacity;
-(void)setEntryCapacity:(long long)arg1 ;
@end

