/*
* Generated on Thursday, January 14, 2021 at 2:28:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SMBClientEngine.framework/SMBClientEngine
*/


#import <SMBClientEngine/SMBClientEngine-Structs.h>
@class SMB_rq, SMBPiston, NSString;

@interface SMBNode : NSObject {

	SMB_rq* rqp[5];
	unsigned _shareID;
	unsigned _isOpen;
	int _isCmpd;
	unsigned _marshallPos;
	unsigned _parsePos;
	unsigned _treeID;
	unsigned _onEncryptedShare;
	SMBPiston* _pd;
	NSString* _name;
	NSString* _streamName;
	unsigned long long _cmpdNextCmdOffset;
	SCD_Struct_SM7 _fid;

}

@property (assign) int isCmpd;                                        //@synthesize isCmpd=_isCmpd - In the implementation block
@property (assign) unsigned marshallPos;                              //@synthesize marshallPos=_marshallPos - In the implementation block
@property (assign) unsigned parsePos;                                 //@synthesize parsePos=_parsePos - In the implementation block
@property (assign) unsigned long long cmpdNextCmdOffset;              //@synthesize cmpdNextCmdOffset=_cmpdNextCmdOffset - In the implementation block
@property (assign) unsigned treeID;                                   //@synthesize treeID=_treeID - In the implementation block
@property (assign) unsigned onEncryptedShare;                         //@synthesize onEncryptedShare=_onEncryptedShare - In the implementation block
@property (retain) SMBPiston * pd;                                    //@synthesize pd=_pd - In the implementation block
@property (assign) unsigned shareID;                                  //@synthesize shareID=_shareID - In the implementation block
@property (copy) NSString * name;                                     //@synthesize name=_name - In the implementation block
@property (copy) NSString * streamName;                               //@synthesize streamName=_streamName - In the implementation block
@property (assign) SCD_Struct_SM7 fid;                                //@synthesize fid=_fid - In the implementation block
@property (assign) unsigned isOpen;                                   //@synthesize isOpen=_isOpen - In the implementation block
+(void)nodeForCmpd:(id)arg1 onShareID:(unsigned)arg2 callBack:(/*^block*/id)arg3 ;
+(void)nodeWithParameters:(smb_create*)arg1 onPiston:(id)arg2 onShareID:(unsigned)arg3 withName:(id)arg4 withStreamName:(id)arg5 callBack:(/*^block*/id)arg6 ;
-(SMBPiston *)pd;
-(NSString *)streamName;
-(SCD_Struct_SM7)fid;
-(unsigned)shareID;
-(void)setShareID:(unsigned)arg1 ;
-(unsigned)isOpen;
-(NSString *)name;
-(unsigned)treeID;
-(void)setPd:(SMBPiston *)arg1 ;
-(int)isCmpd;
-(void)setName:(NSString *)arg1 ;
-(void)setStreamName:(NSString *)arg1 ;
-(void)setFid:(SCD_Struct_SM7)arg1 ;
-(void)dealloc;
-(id)init:(id)arg1 ;
-(void)setIsOpen:(unsigned)arg1 ;
-(unsigned)onEncryptedShare;
-(int)commonInit:(id)arg1 onShareID:(unsigned)arg2 ;
-(void)setTreeID:(unsigned)arg1 ;
-(void)setOnEncryptedShare:(unsigned)arg1 ;
-(void)setIsCmpd:(int)arg1 ;
-(int)commonInit:(id)arg1 onShareID:(unsigned)arg2 name:(id)arg3 streamName:(id)arg4 ;
-(int)updateCmpdHdr;
-(int)parseNextHeader:(unsigned short)arg1 retNTStatus:(unsigned*)arg2 retMdpp:(mdchain*)arg3 ;
-(void)close:(smb_close*)arg1 withFlags:(unsigned short)arg2 callBack:(/*^block*/id)arg3 ;
-(id)initForCmpd:(id)arg1 onShareID:(unsigned)arg2 ;
-(id)init:(smb_create*)arg1 onPiston:(id)arg2 onShareID:(unsigned)arg3 withName:(id)arg4 withStreamName:(id)arg5 callBack:(/*^block*/id)arg6 ;
-(int)cmpdAddCreate:(smb_create*)arg1 withName:(id)arg2 withStreamName:(id)arg3 ;
-(int)cmpdParseCreate:(smb_create*)arg1 ;
-(int)cmpdAddClose:(smb_close*)arg1 withFlags:(unsigned short)arg2 ;
-(int)cmpdParseClose:(smb_close*)arg1 withFlags:(unsigned short)arg2 ;
-(void)flush:(smb_flush*)arg1 callBack:(/*^block*/id)arg2 ;
-(void)read:(smb_read_write*)arg1 intoBuffer:(id)arg2 callBack:(/*^block*/id)arg3 ;
-(int)cmpdAddRead:(smb_read_write*)arg1 intoBuffer:(id)arg2 ;
-(int)cmpdParseRead:(smb_read_write*)arg1 intoBuffer:(id)arg2 ;
-(void)write:(smb_read_write*)arg1 fromBuffer:(id)arg2 callBack:(/*^block*/id)arg3 ;
-(int)cmpdAddWrite:(smb_read_write*)arg1 fromBuffer:(id)arg2 ;
-(int)cmpdParseWrite:(smb_read_write*)arg1 ;
-(void)lockUnlock:(smb_lock*)arg1 callBack:(/*^block*/id)arg2 ;
-(void)ioctl:(smb_ioctl*)arg1 getReparsePoint:(id)arg2 callBack:(/*^block*/id)arg3 ;
-(void)ioctl:(smb_ioctl*)arg1 setReparsePoint:(id)arg2 callBack:(/*^block*/id)arg3 ;
-(void)ioctl:(smb_ioctl*)arg1 pipeTransceive:(id)arg2 withRecvData:(id)arg3 callBack:(/*^block*/id)arg4 ;
-(int)cmpdAddIoctl:(smb_ioctl*)arg1 getReparsePoint:(id)arg2 ;
-(int)cmpdAddIoctl:(smb_ioctl*)arg1 setReparsePoint:(id)arg2 ;
-(int)cmpdAddIoctl:(smb_ioctl*)arg1 pipeTransceive:(id)arg2 withRecvData:(id)arg3 ;
-(int)cmpdParseIoctl:(smb_ioctl*)arg1 reparsePoint:(id)arg2 sendInputBuffer:(id)arg3 rcvOutputBuffer:(id)arg4 ;
-(void)queryDirectory:(smb_query_dir*)arg1 onDir:(id)arg2 returnDataIn:(id)arg3 callBack:(/*^block*/id)arg4 ;
-(int)cmpdAddQueryDirectory:(smb_query_dir*)arg1 onDir:(id)arg2 returnDataIn:(id)arg3 ;
-(int)cmpdParseQueryDirectory:(smb_query_dir*)arg1 returnDataIn:(id)arg2 ;
-(void)changeNotify:(smb_change_notify*)arg1 withFlags:(unsigned short)arg2 withFilter:(unsigned)arg3 returnDataIn:(id)arg4 callBack:(/*^block*/id)arg5 ;
-(void)queryInformation:(smb_query_info*)arg1 withStreamName:(id)arg2 forFileAllInfo:(id)arg3 withInputBuffer:(id)arg4 withOutputBuffer:(id)arg5 callBack:(/*^block*/id)arg6 ;
-(int)cmpdAddQueryInformation:(smb_query_info*)arg1 withStreamName:(id)arg2 forFileAllInfo:(id)arg3 withInputBuffer:(id)arg4 withOutputBuffer:(id)arg5 ;
-(int)cmpdParseQueryInformation:(smb_query_info*)arg1 withStreamName:(id)arg2 forFileAllInfo:(id)arg3 withOutputBuffer:(id)arg4 ;
-(void)setInformation:(smb_setinfo*)arg1 withInputBuffer:(id)arg2 withRenameTarget:(id)arg3 callBack:(/*^block*/id)arg4 ;
-(int)cmpdAddSetInformation:(smb_setinfo*)arg1 withInputBuffer:(id)arg2 withRenameTarget:(id)arg3 ;
-(int)cmpdParseSetInformation:(smb_setinfo*)arg1 ;
-(void)sendCmpdRequest:(/*^block*/id)arg1 ;
-(int)resetCmpdRequest;
-(unsigned)marshallPos;
-(void)setMarshallPos:(unsigned)arg1 ;
-(unsigned)parsePos;
-(void)setParsePos:(unsigned)arg1 ;
-(unsigned long long)cmpdNextCmdOffset;
-(void)setCmpdNextCmdOffset:(unsigned long long)arg1 ;
@end
