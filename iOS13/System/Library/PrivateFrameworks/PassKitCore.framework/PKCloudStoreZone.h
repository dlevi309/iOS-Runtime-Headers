/*
* Generated on Monday, March 1, 2021 at 2:31:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PassKitCore-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSDate, NSData;

@interface PKCloudStoreZone : NSObject <NSSecureCoding, NSCopying> {

	NSString* _containerName;
	NSString* _zoneName;
	NSString* _subscriptionID;
	NSDate* _fetchTimestamp;
	NSData* _tokenData;

}

@property (nonatomic,copy) NSString * containerName;               //@synthesize containerName=_containerName - In the implementation block
@property (nonatomic,copy) NSString * zoneName;                    //@synthesize zoneName=_zoneName - In the implementation block
@property (nonatomic,copy) NSString * subscriptionID;              //@synthesize subscriptionID=_subscriptionID - In the implementation block
@property (nonatomic,copy) NSDate * fetchTimestamp;                //@synthesize fetchTimestamp=_fetchTimestamp - In the implementation block
@property (nonatomic,copy) NSData * tokenData;                     //@synthesize tokenData=_tokenData - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)containerName;
-(void)setContainerName:(NSString *)arg1 ;
-(NSString *)zoneName;
-(void)setZoneName:(NSString *)arg1 ;
-(id)recordZone;
-(NSString *)subscriptionID;
-(id)serverChangeToken;
-(void)setSubscriptionID:(NSString *)arg1 ;
-(void)setFetchTimestamp:(NSDate *)arg1 ;
-(NSDate *)fetchTimestamp;
-(NSData *)tokenData;
-(id)initWithZoneName:(id)arg1 containerName:(id)arg2 ;
-(id)recordZoneSubscription;
-(void)setTokenData:(NSData *)arg1 ;
@end

