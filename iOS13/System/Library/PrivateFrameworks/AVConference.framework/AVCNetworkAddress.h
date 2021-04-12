/*
* Generated on Monday, March 1, 2021 at 2:33:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/


@class NSString;

@interface AVCNetworkAddress : NSObject {

	NSString* ip;
	NSString* interfaceName;
	unsigned short port;
	BOOL isIPv6;

}

@property (nonatomic,copy) NSString * ip; 
@property (assign,nonatomic) unsigned short port; 
@property (assign,nonatomic) BOOL isIPv6; 
@property (nonatomic,copy) NSString * interfaceName; 
-(id)init;
-(void)dealloc;
-(unsigned short)port;
-(void)setPort:(unsigned short)arg1 ;
-(NSString *)interfaceName;
-(void)setInterfaceName:(NSString *)arg1 ;
-(BOOL)isIPv6;
-(NSString *)ip;
-(void)setIp:(NSString *)arg1 ;
-(void)setIsIPv6:(BOOL)arg1 ;
@end

