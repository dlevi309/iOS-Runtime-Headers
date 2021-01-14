/*
* Generated on Thursday, January 14, 2021 at 2:27:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
*/


#import <VideoSubscriberAccount/VideoSubscriberAccount-Structs.h>
@class NSString, NSArray;

@interface VSAppChannelsMapping : NSObject {

	NSString* _appAdamID;
	NSArray* _channelIDs;

}

@property (nonatomic,copy) NSString * appAdamID;              //@synthesize appAdamID=_appAdamID - In the implementation block
@property (nonatomic,copy) NSArray * channelIDs;              //@synthesize channelIDs=_channelIDs - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setChannelIDs:(NSArray *)arg1 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)appAdamID;
-(void)setAppAdamID:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSArray *)channelIDs;
@end

