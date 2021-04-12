/*
* Generated on Thursday, January 14, 2021 at 2:20:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
*/

#import <CFNetwork/CFNetwork-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface _NSHTTPAlternativeServicesFilter : NSObject <NSCopying> {

	NSString* _host;
	NSString* _partition;
	long long _port;

}

@property (nonatomic,retain) NSString * host;                   //@synthesize host=_host - In the implementation block
@property (nonatomic,retain) NSString * partition;              //@synthesize partition=_partition - In the implementation block
@property (assign,nonatomic) long long port;                    //@synthesize port=_port - In the implementation block
+(id)emptyFilter;
-(void)setPort:(long long)arg1 ;
-(NSString *)partition;
-(void)setHost:(NSString *)arg1 ;
-(long long)port;
-(NSString *)host;
-(void)setPartition:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

