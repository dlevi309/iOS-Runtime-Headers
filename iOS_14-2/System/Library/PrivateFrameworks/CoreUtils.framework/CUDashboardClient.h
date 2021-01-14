/*
* Generated on Thursday, January 14, 2021 at 2:21:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
*/


@class NSString;

@interface CUDashboardClient : NSObject {

	SCD_Union_CU22 _destAddr;
	unsigned _destLen;
	unsigned char _key[32];
	char _model[32];
	char _osBuild[32];
	int _sock;
	unsigned char _udid[20];
	NSString* _server;

}

@property (nonatomic,copy) NSString * server;              //@synthesize server=_server - In the implementation block
-(int)logJSON:(id)arg1 ;
-(int)_logCStr:(const char*)arg1 length:(unsigned long long)arg2 ;
-(id)init;
-(void)setServer:(NSString *)arg1 ;
-(int)_setupSocket;
-(int)activate;
-(int)_activate;
-(NSString *)server;
-(int)logv:(const char*)arg1 args:(char*)arg2 ;
-(void)invalidate;
-(int)logf:(const char*)arg1 ;
-(void)dealloc;
@end

