/*
* Generated on Thursday, January 14, 2021 at 2:23:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface NTPBPaywallDescription : PBCodable <NSCopying> {

	NSString* _channelPaywall;
	NSString* _hardPaywall;
	NSString* _leakyPaywall;
	NSString* _promotionalPaywall;

}

@property (nonatomic,readonly) BOOL hasChannelPaywall; 
@property (nonatomic,retain) NSString * channelPaywall;                  //@synthesize channelPaywall=_channelPaywall - In the implementation block
@property (nonatomic,readonly) BOOL hasLeakyPaywall; 
@property (nonatomic,retain) NSString * leakyPaywall;                    //@synthesize leakyPaywall=_leakyPaywall - In the implementation block
@property (nonatomic,readonly) BOOL hasPromotionalPaywall; 
@property (nonatomic,retain) NSString * promotionalPaywall;              //@synthesize promotionalPaywall=_promotionalPaywall - In the implementation block
@property (nonatomic,readonly) BOOL hasHardPaywall; 
@property (nonatomic,retain) NSString * hardPaywall;                     //@synthesize hardPaywall=_hardPaywall - In the implementation block
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(void)setChannelPaywall:(NSString *)arg1 ;
-(void)setPromotionalPaywall:(NSString *)arg1 ;
-(void)setLeakyPaywall:(NSString *)arg1 ;
-(void)setHardPaywall:(NSString *)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)hasChannelPaywall;
-(BOOL)hasLeakyPaywall;
-(BOOL)hasPromotionalPaywall;
-(BOOL)hasHardPaywall;
-(NSString *)channelPaywall;
-(NSString *)leakyPaywall;
-(NSString *)promotionalPaywall;
-(NSString *)hardPaywall;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

