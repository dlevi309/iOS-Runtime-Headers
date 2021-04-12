/*
* Generated on Thursday, January 14, 2021 at 2:22:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)fillMessage:(os_log_message_s*)arg1 ;
-(void)fillProxy:(id)arg1 ;
-(id)initWithSubchunk:(id)arg1 chunk:(tracev3_chunk_s*)arg2 ;
-(BOOL)matches:(unsigned)arg1 procinfo:(catalog_procinfo_s*)arg2 ;
@end

