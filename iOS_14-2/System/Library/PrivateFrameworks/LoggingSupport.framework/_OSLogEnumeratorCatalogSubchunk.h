/*
* Generated on Thursday, January 14, 2021 at 2:22:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/LoggingSupport.framework/LoggingSupport
*/

#import <LoggingSupport/LoggingSupport-Structs.h>
#import <libobjc.A.dylib/_OSLogIndexTimeRangable.h>

@class NSMutableDictionary, _OSLogEnumeratorCatalog, NSString;

@interface _OSLogEnumeratorCatalogSubchunk : NSObject <_OSLogIndexTimeRangable> {

	NSMutableDictionary* _decompressedChunks;
	catalog_subchunk_s* _subchunk;
	NSRange _range;
	_OSLogEnumeratorCatalog* _catalog;
	unsigned long long _ot;
	unsigned long long _et;

}

@property (nonatomic,readonly) _OSLogEnumeratorCatalog * catalog;              //@synthesize catalog=_catalog - In the implementation block
@property (nonatomic,readonly) unsigned long long oldestTime;                  //@synthesize ot=_ot - In the implementation block
@property (nonatomic,readonly) unsigned long long endTime;                     //@synthesize et=_et - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(_OSLogEnumeratorCatalog *)catalog;
-(id)initWithCatalog:(id)arg1 subchunk:(catalog_subchunk_s*)arg2 range:(NSRange)arg3 oldestTime:(unsigned long long)arg4 endTime:(unsigned long long)arg5 ;
-(void)enumerateChunksUsingBlock:(/*^block*/id)arg1 ;
-(id)initWithCatalog:(id)arg1 subchunk:(catalog_subchunk_s*)arg2 range:(NSRange)arg3 ;
-(id)_decompressedBufferForChunk:(tracev3_chunk_s*)arg1 subchunk:(catalog_subchunk_s*)arg2 ;
-(long long)endTimeCompare:(id)arg1 ;
-(unsigned long long)endTime;
-(unsigned long long)oldestTime;
-(long long)oldestTimeCompare:(id)arg1 ;
@end

