/*
* Generated on Monday, March 1, 2021 at 2:32:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
*/

#import <VideoSubscriberAccount/VideoSubscriberAccount-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSSet, NSDictionary;

@interface VSAccountChannels : NSObject <NSCopying> {

	NSString* _providerID;
	NSString* _adamID;
	NSSet* _channelIDs;
	NSDictionary* _providerInfo;

}

@property (nonatomic,copy) NSString * providerID;                    //@synthesize providerID=_providerID - In the implementation block
@property (nonatomic,copy) NSString * adamID;                        //@synthesize adamID=_adamID - In the implementation block
@property (nonatomic,copy) NSSet * channelIDs;                       //@synthesize channelIDs=_channelIDs - In the implementation block
@property (nonatomic,copy) NSDictionary * providerInfo;              //@synthesize providerInfo=_providerInfo - In the implementation block
+(id)deserializationResultWithData:(id)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)providerID;
-(void)setProviderID:(NSString *)arg1 ;
-(NSString *)adamID;
-(void)setAdamID:(NSString *)arg1 ;
-(NSSet *)channelIDs;
-(NSDictionary *)providerInfo;
-(void)setChannelIDs:(NSSet *)arg1 ;
-(id)serializationResultWithFormat:(unsigned long long)arg1 ;
-(id)serializationResult;
-(void)setProviderInfo:(NSDictionary *)arg1 ;
@end

