/*
* Generated on Monday, March 1, 2021 at 2:30:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
*/


@class NSString;

@interface CUDashboardClient : NSObject {

	SCD_Union_CU21 _destAddr;
	unsigned _destLen;
	unsigned char _key[32];
	char _model[32];
	char _osBuild[32];
	int _sock;
	unsigned char _udid[20];
	NSString* _server;

}

@property (nonatomic,copy) NSString * server;              //@synthesize server=_server - In the implementation block
-(id)init;
-(void)dealloc;
-(int)_activate;
-(void)invalidate;
-(void)setServer:(NSString *)arg1 ;
-(NSString *)server;
-(int)activate;
-(int)logJSON:(id)arg1 ;
-(int)logf:(const char*)arg1 ;
-(int)logv:(const char*)arg1 args:(char*)arg2 ;
-(int)_logCStr:(const char*)arg1 length:(unsigned long long)arg2 ;
-(int)_setupSocket;
@end

