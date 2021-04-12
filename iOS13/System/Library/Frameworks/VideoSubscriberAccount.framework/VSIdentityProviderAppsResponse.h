/*
* Generated on Monday, March 1, 2021 at 2:32:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setProviderAppAdamIDs:(NSArray *)arg1 ;
-(void)setChannelMappings:(NSArray *)arg1 ;
-(NSArray *)providerAppAdamIDs;
-(NSArray *)channelMappings;
@end

