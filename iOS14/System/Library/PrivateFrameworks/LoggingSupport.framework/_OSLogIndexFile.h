/*
* Generated on Thursday, January 14, 2021 at 2:22:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/LoggingSupport.framework/LoggingSupport
*/

#import <libobjc.A.dylib/_OSLogIndexTimeRangable.h>

@class _OSLogChunkFileReference, _OSLogChunkStore, NSString;

@interface _OSLogIndexFile : NSObject <_OSLogIndexTimeRangable> {

	_OSLogChunkFileReference* _cfr;
	_OSLogChunkStore* _cs;
	unsigned char _bootu[16];
	BOOL _timespanDetermined;
	unsigned long long _cot_header;
	unsigned long long _cot;
	unsigned long long _cet;
	unsigned long long _et;
	unsigned long long _ot;
	char* _path;

}

@property (nonatomic,readonly) const char* bootUUID; 
@property (nonatomic,readonly) unsigned long long oldestTime;              //@synthesize ot=_ot - In the implementation block
@property (nonatomic,readonly) unsigned long long endTime;                 //@synthesize et=_et - In the implementation block
@property (nonatomic,readonly) char* path;                                 //@synthesize path=_path - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithTraceFile:(id)arg1 error:(id*)arg2 ;
-(char*)path;
-(BOOL)_loadHeaderMetadata:(id)arg1 ;
-(id)copyMappedChunkStore:(id*)arg1 ;
-(BOOL)_loadCatalogMetadataForTimespan;
-(BOOL)_determineTimespan;
-(unsigned long long)endTime;
-(const char*)bootUUID;
-(unsigned long long)oldestTime;
-(void)dealloc;
-(id)initWithChunkStore:(id)arg1 error:(id*)arg2 ;
@end

