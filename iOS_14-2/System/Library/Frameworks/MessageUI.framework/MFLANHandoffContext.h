/*
* Generated on Thursday, January 14, 2021 at 2:23:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
*/


@class NSString;

@interface MFLANHandoffContext : NSObject {

	unsigned short _port;
	NSString* _host;

}

@property (nonatomic,copy) NSString * host;                    //@synthesize host=_host - In the implementation block
@property (assign,nonatomic) unsigned short port;              //@synthesize port=_port - In the implementation block
-(void)setPort:(unsigned short)arg1 ;
-(void)setHost:(NSString *)arg1 ;
-(unsigned short)port;
-(NSString *)host;
-(void)dealloc;
@end

