/*
* Generated on Thursday, January 14, 2021 at 2:25:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKit/HMRemoteLoginMessage.h>
#import <libobjc.A.dylib/HMRemoteLoginMessageProtocol.h>

@class NSData, NSString, NSDictionary;

@interface HMSyncAnisetteDataRequest : HMRemoteLoginMessage <HMRemoteLoginMessageProtocol> {

	NSData* _simData;

}

@property (nonatomic,copy) NSData * simData;                                //@synthesize simData=_simData - In the implementation block
@property (nonatomic,copy,readonly) NSString * messageName; 
@property (nonatomic,copy,readonly) NSString * xpcMessageName; 
@property (nonatomic,readonly) NSDictionary * messagePayload; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)messageName;
+(id)objWithDict:(id)arg1 ;
+(id)objWithMessage:(id)arg1 ;
+(id)xpcMessageName;
-(NSString *)messageName;
-(void)encodeWithCoder:(id)arg1 ;
-(NSDictionary *)messagePayload;
-(NSString *)description;
-(NSData *)simData;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)xpcMessageName;
-(void)setSimData:(NSData *)arg1 ;
@end

