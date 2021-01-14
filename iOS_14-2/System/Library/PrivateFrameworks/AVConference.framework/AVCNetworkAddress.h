/*
* Generated on Thursday, January 14, 2021 at 2:25:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setPort:(unsigned short)arg1 ;
-(NSString *)ip;
-(unsigned short)port;
-(id)init;
-(void)setIp:(NSString *)arg1 ;
-(BOOL)isIPv6;
-(NSString *)interfaceName;
-(void)setIsIPv6:(BOOL)arg1 ;
-(void)setInterfaceName:(NSString *)arg1 ;
-(void)dealloc;
@end

