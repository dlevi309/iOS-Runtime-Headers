/*
* Generated on Thursday, January 14, 2021 at 2:21:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <NewsCore/NewsCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface FCPaidALaCartePaywallConfig : NSObject <NSCopying> {

	NSString* _channelID;
	NSString* _channelPaywallTitle;
	NSString* _hardPaywallTitle;
	NSString* _leakyPaywallTitle;
	NSString* _promotionalPaywallTitle;
	NSString* _channelId;

}

@property (nonatomic,copy) NSString * channelId;                            //@synthesize channelId=_channelId - In the implementation block
@property (nonatomic,copy) NSString * channelPaywallTitle;                  //@synthesize channelPaywallTitle=_channelPaywallTitle - In the implementation block
@property (nonatomic,copy) NSString * hardPaywallTitle;                     //@synthesize hardPaywallTitle=_hardPaywallTitle - In the implementation block
@property (nonatomic,copy) NSString * leakyPaywallTitle;                    //@synthesize leakyPaywallTitle=_leakyPaywallTitle - In the implementation block
@property (nonatomic,copy) NSString * promotionalPaywallTitle;              //@synthesize promotionalPaywallTitle=_promotionalPaywallTitle - In the implementation block
@property (nonatomic,readonly) NSString * channelID;                        //@synthesize channelID=_channelID - In the implementation block
-(id)initWithConfigDictionary:(id)arg1 ;
-(id)init;
-(NSString *)hardPaywallTitle;
-(NSString *)channelID;
-(NSString *)channelId;
-(NSString *)channelPaywallTitle;
-(id)initWithChannelID:(id)arg1 channelPaywallTitle:(id)arg2 hardPaywallTitle:(id)arg3 leakyPaywallTitle:(id)arg4 promotionalPaywallTitle:(id)arg5 ;
-(NSString *)leakyPaywallTitle;
-(NSString *)promotionalPaywallTitle;
-(void)setChannelPaywallTitle:(NSString *)arg1 ;
-(void)setHardPaywallTitle:(NSString *)arg1 ;
-(void)setLeakyPaywallTitle:(NSString *)arg1 ;
-(void)setPromotionalPaywallTitle:(NSString *)arg1 ;
-(unsigned long long)hash;
-(void)setChannelId:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

