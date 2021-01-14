/*
* Generated on Thursday, January 14, 2021 at 2:27:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CheckerBoardServices.framework/CheckerBoardServices
*/

#import <CheckerBoardServices/CheckerBoardServices-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSNumber;

@interface CBSProxyServer : NSObject <NSSecureCoding> {

	NSString* _server;
	NSNumber* _port;
	NSString* _token;

}

@property (nonatomic,retain) NSString * server;              //@synthesize server=_server - In the implementation block
@property (nonatomic,retain) NSNumber * port;                //@synthesize port=_port - In the implementation block
@property (nonatomic,retain) NSString * token;               //@synthesize token=_token - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setPort:(NSNumber *)arg1 ;
-(NSNumber *)port;
-(id)init;
-(void)setServer:(NSString *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(NSString *)server;
-(void)setToken:(NSString *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)token;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithServer:(id)arg1 port:(id)arg2 token:(id)arg3 ;
@end

