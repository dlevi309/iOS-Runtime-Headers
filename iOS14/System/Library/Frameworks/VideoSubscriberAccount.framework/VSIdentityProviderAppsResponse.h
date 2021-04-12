/*
* Generated on Thursday, January 14, 2021 at 2:27:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
*/


#import <VideoSubscriberAccount/VideoSubscriberAccount-Structs.h>
@class NSArray;

@interface VSIdentityProviderAppsResponse : NSObject {

	NSArray* _providerAppAdamIDs;
	NSArray* _channelMappings;

}

@property (nonatomic,copy) NSArray * providerAppAdamIDs;              //@synthesize providerAppAdamIDs=_providerAppAdamIDs - In the implementation block
@property (nonatomic,copy) NSArray * channelMappings;                 //@synthesize channelMappings=_channelMappings - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setProviderAppAdamIDs:(NSArray *)arg1 ;
-(void)setChannelMappings:(NSArray *)arg1 ;
-(NSArray *)providerAppAdamIDs;
-(NSArray *)channelMappings;
@end

