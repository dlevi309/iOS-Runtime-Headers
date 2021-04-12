/*
* Generated on Thursday, January 14, 2021 at 2:28:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SMBSearch.framework/SMBSearch
*/


@interface wspHeader : NSObject {

	unsigned _msgid;
	unsigned _status;
	unsigned _checksum;
	unsigned _reserved2;

}

@property (assign) unsigned msgid;                  //@synthesize msgid=_msgid - In the implementation block
@property (assign) unsigned status;                 //@synthesize status=_status - In the implementation block
@property (assign) unsigned checksum;               //@synthesize checksum=_checksum - In the implementation block
@property (assign) unsigned reserved2;              //@synthesize reserved2=_reserved2 - In the implementation block
-(unsigned)msgid;
-(void)setMsgid:(unsigned)arg1 ;
-(id)init;
-(unsigned)reserved2;
-(void)setStatus:(unsigned)arg1 ;
-(void)setChecksum:(unsigned)arg1 ;
-(unsigned)checksum;
-(unsigned)status;
-(void)setReserved2:(unsigned)arg1 ;
-(int)decodeBuffer:(id)arg1 BufferOffset:(unsigned)arg2 BytesDecoded:(unsigned*)arg3 ;
@end

