/*
* Generated on Monday, March 1, 2021 at 2:32:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/LoggingSupport.framework/LoggingSupport
*/


#import <LoggingSupport/LoggingSupport-Structs.h>
@class _OSLogEnumeratorCatalogSubchunk;

@interface _OSLogEnumeratorOversizeChunk : NSObject {

	_OSLogEnumeratorCatalogSubchunk* _subchunk;
	tracev3_chunk_s* _chunk;

}

@property (nonatomic,readonly) unsigned long long timestamp; 
-(long long)compare:(id)arg1 ;
-(unsigned long long)timestamp;
-(id)initWithSubchunk:(id)arg1 chunk:(tracev3_chunk_s*)arg2 ;
-(BOOL)matches:(unsigned)arg1 procinfo:(catalog_procinfo_s*)arg2 ;
-(void)fillMessage:(os_log_message_s*)arg1 ;
-(void)fillProxy:(id)arg1 ;
@end

