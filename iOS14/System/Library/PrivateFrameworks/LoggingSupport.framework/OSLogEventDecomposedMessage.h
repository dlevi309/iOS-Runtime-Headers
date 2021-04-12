/*
* Generated on Thursday, January 14, 2021 at 2:22:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/LoggingSupport.framework/LoggingSupport
*/


#import <LoggingSupport/LoggingSupport-Structs.h>
@class OSLogEventProxy;

@interface OSLogEventDecomposedMessage : NSObject {

	BOOL _hasPopulatedFields;
	BOOL _hdrNeedsFree;
	unsigned short _pubsize;
	unsigned short _privsize;
	unsigned short _placeholderCount;
	unsigned long long _variant;
	unsigned long long _sizeof_long;
	const os_log_fmt_hdr_s* _hdr;
	const void* _pubdata;
	const void* _privdata;
	const char* _fmt;
	unsigned long long _messageState;
	os_log_fmt_raw_placeholder* _rawPlaceholders;
	void* _hdr_buffer;
	OSLogEventProxy* _proxy;

}

@property (nonatomic,readonly) OSLogEventProxy * proxy;                    //@synthesize proxy=_proxy - In the implementation block
@property (nonatomic,readonly) unsigned long long sizeOfLong;              //@synthesize sizeof_long=_sizeof_long - In the implementation block
@property (readonly) unsigned long long placeholderCount; 
@property (nonatomic,readonly) unsigned long long state; 
-(void)_populateFields;
-(id)initWithEventProxy:(id)arg1 ;
-(os_log_fmt_raw_placeholder*)_rawPlaceholderForIndex:(unsigned long long)arg1 ;
-(void)_initializePlaceholders;
-(unsigned long long)sizeOfLong;
-(OSLogEventProxy *)proxy;
-(id)argumentAtIndex:(unsigned long long)arg1 ;
-(id)placeholderAtIndex:(unsigned long long)arg1 ;
-(id)literalPrefixAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)placeholderCount;
-(unsigned long long)state;
-(void)_unmake;
-(void)dealloc;
@end

