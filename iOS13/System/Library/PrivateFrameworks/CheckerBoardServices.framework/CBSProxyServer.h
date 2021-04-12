/*
* Generated on Monday, March 1, 2021 at 2:34:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)token;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSNumber *)port;
-(void)setPort:(NSNumber *)arg1 ;
-(void)setServer:(NSString *)arg1 ;
-(NSString *)server;
-(void)setToken:(NSString *)arg1 ;
-(id)initWithServer:(id)arg1 port:(id)arg2 token:(id)arg3 ;
@end

