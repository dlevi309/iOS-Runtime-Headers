/*
* Generated on Monday, March 1, 2021 at 2:32:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
*/


@class NSString;

@interface MFLANHandoffContext : NSObject {

	unsigned short _port;
	NSString* _host;

}

@property (nonatomic,copy) NSString * host;                    //@synthesize host=_host - In the implementation block
@property (assign,nonatomic) unsigned short port;              //@synthesize port=_port - In the implementation block
-(void)dealloc;
-(NSString *)host;
-(unsigned short)port;
-(void)setPort:(unsigned short)arg1 ;
-(void)setHost:(NSString *)arg1 ;
@end

