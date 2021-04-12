/*
* Generated on Thursday, January 14, 2021 at 2:20:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
*/

#import <CFNetwork/CFNetwork-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSDate;

@interface _NSHTTPAlternativeServiceEntry : NSObject <NSCopying> {

	NSString* _host;
	NSString* _alternateHost;
	long long _port;
	long long _alternatePort;
	NSString* _partition;
	NSDate* _expirationDate;
	long long _serviceType;

}

@property (nonatomic,retain) NSString * host;                       //@synthesize host=_host - In the implementation block
@property (nonatomic,retain) NSString * alternateHost;              //@synthesize alternateHost=_alternateHost - In the implementation block
@property (assign,nonatomic) long long port;                        //@synthesize port=_port - In the implementation block
@property (assign,nonatomic) long long alternatePort;               //@synthesize alternatePort=_alternatePort - In the implementation block
@property (nonatomic,retain) NSString * partition;                  //@synthesize partition=_partition - In the implementation block
@property (nonatomic,retain) NSDate * expirationDate;               //@synthesize expirationDate=_expirationDate - In the implementation block
@property (assign,nonatomic) long long serviceType;                 //@synthesize serviceType=_serviceType - In the implementation block
-(long long)alternatePort;
-(void)setPort:(long long)arg1 ;
-(NSString *)partition;
-(void)setHost:(NSString *)arg1 ;
-(long long)port;
-(NSString *)host;
-(void)setExpirationDate:(NSDate *)arg1 ;
-(void)setPartition:(NSString *)arg1 ;
-(NSString *)alternateHost;
-(id)init;
-(void)setAlternateHost:(NSString *)arg1 ;
-(void)setServiceType:(long long)arg1 ;
-(id)description;
-(void)setAlternatePort:(long long)arg1 ;
-(NSDate *)expirationDate;
-(unsigned long long)hash;
-(long long)serviceType;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

